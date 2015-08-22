import textwrap
from collections import OrderedDict


for i in textwrap.wrap(raw_input(),input()):
	print "".join(OrderedDict.fromkeys(i))


