


n,m = map(int,raw_input().split())

a = map(int,raw_input().split())

for i in range(m):
	temp = map(int,raw_input().split())
	print a[temp[0]-1:temp[1]].count(max(a[temp[0]-1:temp[1]+1]))
	
