
def bubble(a):
	for i in range(0,len(a)):
		for j in range(1,len(a)-i):
			if a[j-1]>a[j]:
				temp = a[j-1]
				a[j-1] = a[j]
				a[j] = temp
	return a


a = [5,7,4,8,3,9,1]
print bubble(a)
