
s = raw_input()
new = ""

for i in s:
	if i.isupper():
		new = new + i.lower()
	else:
		new = new + i.upper()

print new
	
