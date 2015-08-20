from operator import itemgetter
n = input()

dic = {}

for i in range(0,n,1):
	name = raw_input()
	mark = input()
	dic[name] = mark

sorted(dic.items(),key=itemgetter(1))

print dic.items()
	
	
