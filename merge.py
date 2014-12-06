import math;
l = []
r = []
def merge(a,p,q,r):
	n1 = int(q-p+1)
	n2 = int(r-q)
	for i in range(1,n1):
		l[i] = a[p+i-1]
	for j in range(1,n2):
		r[j] = a[q+j]
	l[n1+1] = 100000
	r[n2+1] = 100000
	i = 1
	j = 1
	for k in range(p,r):
		if l[i]<=r[j]:
			a[k] = l[i]		
			i = i+1
		else:
			a[k] = r[j]
			j = j+1



def merge_sort(a,p,r):
	if p<r:
		q = math.floor((p+r)/2)
		merge_sort(a,p,q)
		merge_sort(a,q+1,r)
		merge(a,p,q,r)

a = [4,6,3,7,2,8,1,9]
merge_sort(a,1,len(a))
