
d = { }
s = raw_input()

for i in s:
	if d.has_key(i):
		v = d.get(i)
		d[i] = v + 1
	else:
		d[i] = 1

li = sorted(d.items(), key=lambda x:x[1], reverse=True)

if li[0][1]==li[1][1] and li[0][1]==li[2][1]:
	x = d.keys()
	x.sort()
	for i in x:
		print i, d[i]

elif li[0][1]==li[1][1]:
	y =[]
	y.append(li[0][0])
	y.append(li[1][0])
	y.sort()
        for i in y:
                print i, d[i]
		
	print li[2][0], li[2][1]

elif li[1][1]==li[2][1]:
	print li[0][0], li[0][1]

	z = []
	z.append(li[1][0])
	z.append(li[2][0])
	z.sort()
	for i in z:
		print i, d[i]
else:
	for i in range(3):
		print li[i][0], li[i][1]
