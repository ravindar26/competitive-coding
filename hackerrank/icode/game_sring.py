n = input()

for i in range(n):
	count = 0
	s = raw_input()
	for i in range(len(s)):
		count = count + (ord(s[i])-ord('a'))
	if count%2 == 0:
		print "Bob"
	else:	
		print "Alice"
		
