
l1_x,l1_y,r1_x,r1_y = map(int,raw_input().split())
l2_x,l2_y,r2_x,r2_y = map(int,raw_input().split())

if ((l1_x > r2_x or l2_x > r1_x) or (l1_y < r2_y or l2_y < r1_y)):
	print "no overlap"
else:
	print "overlap"
