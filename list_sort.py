def sort(l,i):
 
 if l[i+1]<l[i] and i>=0 and i<=len(l)-1:
    t=l[i+1]
    l[i+1]=l[i]
    l[i]=t
    return (sort(l, (i-1)*(i>0) +
                    (i+1)*(i==0)))
 elif(i+1<len(l)-1):
    return sort(l, i+1)
#list to be sorted
list=[1,3,5,2,6,3,4,88,7,19,7,2]

sort(list,0)
print(list)
