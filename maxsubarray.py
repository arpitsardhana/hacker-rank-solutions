
t = int(raw_input())

for x in  xrange(0, t):
	n = int(raw_input())
	arr = []
	line = raw_input().split()
	for k in range(0,n):
		arr += [int(line[k])]


	max_so_far = arr[0]
	max_end_here = arr[0]
	max_noncont = 0
	flag = 0
	if arr[0] >= 0 :
		max_noncont = arr[0] 
		flag = 1	

	for ele in arr[1:]:
		max_end_here = max(ele,max_end_here+ele)
		max_so_far = max(max_end_here,max_so_far)
		print ele,max_end_here,max_so_far

		if ele >= 0 :
			max_noncont += ele
			flag = 1


	if max_noncont < 0  or flag == 0:
		arr.sort()
		max_noncont = arr[0]


	print max_so_far,max_noncont
	print "   " 


