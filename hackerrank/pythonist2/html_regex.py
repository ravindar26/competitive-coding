import re


n = input()

for i in range(n):
	s = raw_input()
	match = re.findall(r'<.*|\n|\t>',s)
	for j in match:
		print j

	
