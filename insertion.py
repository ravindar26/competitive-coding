#input : An array A, of N numbers
#output: An array in increasing or decreasig order.

def insertion(a):
	for j in  range(1,len(a)):
		key = a[j];
		i = j-1;
		while i>=0 and a[i]>key:
			a[i+1] = a[i]
			i = i-1
		a[i+1] = key
	print a


b = [8,9,5,6,7,3]
insertion(b)

