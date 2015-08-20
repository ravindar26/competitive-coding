
n = input("")
seq = raw_input("")
l = seq.split()
for i in range(n):
	l[i] = int(l[i])

print hash(tuple(l))
