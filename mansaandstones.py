T = int(raw_input())

for i in range(0,T):
    num_list=[]
    n=int(raw_input())
    a=int(raw_input())
    b=int(raw_input())
    
    a1=n-1
    b1=0
    sum1 = 0 
    for j in range(0,n):
        sum1 = a1*a+b1*b
        a1=a1-1
        b1=b1+1
        num_list +=[sum1]
        
    num_list = sorted(set(num_list))

    print num_list
    new_list=[]
    for l in range(0,len(num_list)):
        new_list += [str(num_list[l])]
        
    print ' '.join(new_list)
    
