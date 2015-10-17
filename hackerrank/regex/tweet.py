import re
n = input()

count = 0

for i in range(n):
    string = raw_input()
    if re.search(r'hackerrank',string,re.IGNORECASE):
        count = count + 1

print count
