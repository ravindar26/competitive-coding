
dict = {}

n = input()

for i in range(n):
	name,m1,m2,m3 = map(str,raw_input().split())
	l = []
	name = str(name)
	l.append(float(m1))
	l.append(float(m2))
	l.append(float(m3))
	dict[name] = l

avg = 0

find_name  = raw_input()

for i in dict[find_name]:
	avg = avg+i

print "%.2f" %( avg/3.0)
	
