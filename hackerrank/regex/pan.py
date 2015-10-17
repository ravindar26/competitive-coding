import re

n = input()

for i in range(n):
	string = raw_input()
	match = re.search(r'[A-Z]{5}[0-9]{4}[A-Z]',string)
	if match:
		print "YES"
	else:
		print "NO"
