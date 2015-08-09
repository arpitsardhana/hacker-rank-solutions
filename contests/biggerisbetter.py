

t = int(raw_input())

for m in range(0,t):

	li = raw_input()
	inp = []
	size = len(li)
	si = size -2
        for i in range(0,size):
	        inp += [li[i]]

	flag = 0
	while si >= 0 :
		if inp[si] < inp[si+1] :
			flag = 1
			nx = inp[si+1]
			ind = si+1	
			for i in range(si+1,size):
				if inp[i] > inp[si] and inp[i] < nx :
					nx = inp[i]
					ind = i

			inp[ind] = inp[si]
			inp[si] = nx
			li1 = inp[0:si+1]
			li2 = inp[si+1:size]
			li2.sort()
			li1 +=li2
			print ''.join(li1)
			break
		si = si-1

	if flag == 0:
		print "no answer"

		
			

