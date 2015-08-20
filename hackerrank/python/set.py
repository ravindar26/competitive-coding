M = set()
N = set()

m = input("")

st = raw_input()
for x in st.split():
	M.add(int(x))

n = input("")

s = raw_input()
for x in s.split():
	N.add(int(x))	

for i in sorted((M.union(N)).difference(M.intersection(N))):
	print i

