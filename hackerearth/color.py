matrix = []


def func(x,y,d,color,n,m):
	static count = 0
	print color,count,x,y,d

	if (((x-1)>=0 and x<n) and ((y-1)>0 and y<m) and(color[x-1][y-1]==0) and(abs(matrix[x-1][y-1] - d)>=0)):
		color[x-1][y-1] = 1
		count = count + 1
		func(x-1,y-1,d,color,n,m)
	
	if ((x>=0 and x<n) and ((y-1)>=0 and y-1<m) and (color[x][y-1]==0) and(abs(matrix[x][y-1] - d)>=0) ):
		color[x][y-1] =1
		count = count + 1	
		func(x,y-1,d,color,n,m)

	if (((x-1)>=0 and (x-1)<n) and (y>=0 and y<m) and(color[x-1][y]==0) and(abs(matrix[x-1][y] - d)>=0)):
                color[x-1][y] =1
                count = count + 1
                func(x-1,y,d,color,n,m)
	
	if (((x-2)>=0 and (x-2)<n) and ((y-1)>=0 and (y-1)<m) and(color[x-2][y-1]==0) and(abs(matrix[x-2][y-1] - d)>=0)):
		color[x-2][y-1] =1
		count = count + 1
		func(x-2,y-1,d,color,n,m)
	if (((x-1)>=0 and (x-1)<n) and ((y-2)>0 and (y-2)<m) and (color[x-1][y-2]==0) and(abs(matrix[x-1][y-2] - d)>=0)):
		color[x-1][y-2]=1
		count = count +1
		func(x-1,y-2,d,color,n,m)


	return count
	


n,m,q =map(int,raw_input().split())

for i in range(n):
	matrix.append(map(int,raw_input().split()))

for i in range(q):
	count = 0
	color = [[0 for col in range(m)] for row in range(n)]
	x,y,d = map(int,raw_input().split())
	print func(x,y,d,color,n,m)




	

	



	


