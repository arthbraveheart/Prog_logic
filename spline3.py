"""
O objetivo deste código é computar, através da ferramenta Spline Cúbica,
uma curva suave gerada pela interpolação dos dados sugeridos: neste caso 
a concentração de um produto químico ao passar dos anos. 
A referida ferramenta nos ajudará na análise preditiva do comportamento temporal
desse produto. 

"""


import numpy as np
import matplotlib
import matplotlib.pyplot as plt

#------------------------SPLINE CUBICA-------------------------#


def spl3(p,x,f):
    """
    Spline Cúbica

    Interpolação suave das coordenadas que utiliza, na sua construção, conceitos de 
    derivada. Nesse caso repartindo uma curva contínua em "pedaços" representados
    por um polinômio do terceiro grau, autoajustandos. 

    p  = entrada (nesse caso concentração dada para computar a data)
    x  = vetor das abscissa (concentrações)
    f  = vetor das ordenadas (tempo) 



    """



    ordenada =5.123
    n    =len(x)
    h    =[x[i] - x[i-1] for i in range(1,n)]
    b    =[]
    d    =[]
    ss   =[]
    s    =lambda i,xi,fi,bi,ci,di : fi +bi*(i-xi) +ci*((i-xi)**2) +di*((i-xi)**3)
    y    =np.zeros(n)
    M    =np.zeros((n,n))
    M[0][0]  =1
    M[-1][-1]=1
    for i in range(1,n-1):
        for j in range(i-1,n-2,3):
            M[i][j], M[i][j+1], M[i][j+2] = ( h[i-1],2*( h[i-1] +  h[i]) , h[i] )
            
    y[0]  =0
    y[-1] =0
   
    for i in range(1,n-1):
        y[i]      = 3*(((f[i+1]-f[i])/h[i]) - ((f[i]-f[i-1])/(h[i-1]))) 
    
    c             =np.linalg.solve(M,y)
    c             =[c[i] for i in range(n)]
    for i in range(n-1):
        d.append  ((c[i+1] -c[i]) /(3*h[i]))
        b.append  (((f[i+1]-f[i])/h[i]) -(1/3)*(c[i+1] +2*c[i])*h[i])
        #z         =(x[i],f[i],b[i],c[i],d[i])
        intervalo  =np.arange(x[i],x[i+1],0.1)
        for j in intervalo:
           ss.append (s(j,x[i],f[i],b[i],c[i],d[i]))
        if p<=x[i+1] and p>=x[i]:
            ordenada =s(p,x[i],f[i],b[i],c[i],d[i])
            
    return ss, ordenada 

print(spl3(4.5,[3,6,9], [17,20,28])) 

#---------------------DADOS-----------------------#


k  =  [ 12.0, 12.7, 13.0, 15.2, 18.2, 19.8, 24.1, 28.1]  #concentrações da toxina
T  =  [2006, 2008, 2010, 2012, 2014, 2016, 2018, 2020]  #tempo


#-----------------SOLUÇÃO--------------------------#

"""
O único jeito de inferir, utilizandoi a spline cubica, 
o valor da concentração da toxina no ano de 2022 seria 
identificar a condição de contorno do ultimo nodulo (2020)
e, com a taxa de variação desse ponto, equacionar uma reta e computar
o valor requerido. 

"""

