a=int(raw_input())
b=int(raw_input())
n=int(raw_input())
ar=[]
ar.insert(0,a);
ar.insert(1,b);
for i in range(2,n):
	ar.insert(i,ar[i-1]*ar[i-1]+ar[i-2])
print ar[n-1]