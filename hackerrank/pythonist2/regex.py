import re

n = input()

for i in range(n):
	a = raw_input()
	a = a.split(' ',1)
	if (len(a)>1):
		a = a[1]

		match = re.findall(r'#[a-f A-F 0-9]{6}|#[a-f A-F 0-9]{3}',a)

		for j in match:
			print j

