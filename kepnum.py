p = int(raw_input())
q = int(raw_input())

kap_list=[]
for i in range(p,q+1):
    sq = i*i
    num = str(i)
    sq_str =str(sq)
    d = len(num)
    dsq = len(str(sq))
   # print str(dsq)+ " " +str(d)
    if i == 1 :
	kap_list += [str(i)]
	continue
    if i == 2 or i == 3 :
	continue
    if (dsq == 2*d) :
        sub1 = sq_str[0:d]
        d1 = int(sub1)
        sub2 = sq_str[d:2*d]
        d2 = int(sub2)
	#print str(d1) + " " +str(d2)
        if (d1+d2 == i and d1 > 0 and d2 > 0):
            kap_list += [str(i)]
        continue
    
    if (dsq == 2*d+1):
        sub1 = sq_str[0:d]
        sub2 = sq_str[d:2*d+1]
        sub3 = sq_str[0:d+1]
        sub4 = sq_str[d+1:2*d+1]
        d1 = int(sub1)
        d2 = int(sub2)
        d3 = int(sub3)
        d4 = int(sub4)
        if (d1+d2 == i and d1 > 0 and d2 > 0) or (d3+d4 == i and d3 > 0 and d4 > 0) :
            kap_list += [str(i)]
        continue
    
    if (dsq == 2*d-1):
        sub1 = sq_str[0:d]
        sub2 = sq_str[d:2*d-1]
        sub3 = sq_str[0:d-1]
        sub4 = sq_str[d-1:2*d-1]
        d1 = int(sub1)
        d2 = int(sub2)
        d3 = int(sub3)
        d4 = int(sub4)
	if (d1+d2 == i and d1 > 0 and d2 > 0) or (d3+d4 == i and d3 > 0 and d4 > 0) :
            kap_list += [str(i)]
        continue
    else :
        continue

if len(kap_list) > 0 :        
	print ' '.join(kap_list)
else :
	print "INVALID RANGE"
    
    
    

