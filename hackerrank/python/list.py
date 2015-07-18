command = ['append','insert','remove','pop','index','count','sort','reverse']

zero_arg = ['reverse','sort','pop','print']
one_arg = ['count','index','remove','append']
two_arg = ['insert']


l = []

n = input("")
for i in range(n):
	cmd = raw_input("")
	words = cmd.split()
	
	if words[0] in zero_arg:
		if words[0] == "reverse":
			l.reverse()
		elif words[0] == "sort":
			l.sort()
		elif words[0]=="pop":
			l.pop()
		elif words[0] == "print":
			print l
	elif words[0] in one_arg:
		words[1] = int(words[1])
		if words[0] =="count":
			l.count(words[1])
		elif words[0]=="index":
			l.index(words[1])
		elif words[0]=="remove":
			l.remove(words[1])
		elif words[0]=="append":
			l.append(words[1])
		
	elif words[0] in two_arg:
		words[1] = int(words[1])
		words[2] = int(words[2])
		if words[0]=="insert":
			l.insert(words[1],words[2])

