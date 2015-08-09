T=int(raw_input())

for i in range(0,T):
    N=int(raw_input())
    count_5 = N
    count_3 = 0
    flag = 0
    num = ""
    for h in range(0,N+1):
	print (count_5,count_3) 
        if (count_5%3 == 0 and count_3%5 == 0):
            flag = 1
            break
        else:
            count_5 = count_5-1
            count_3 = count_3+1
            
    if flag == 0:
        print "-1"
    else:
        for c5 in range(0,count_5):
            num += '5'
        
        for c3 in range(0,count_3):
            num += '3'
            
        print num
   
