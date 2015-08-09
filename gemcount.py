

T = int(raw_input())

all_rock = [] 
rock1 = []
for i in range(0,T):
    rock1 = raw_input()
    rock1 = set(rock1) 
    all_rock += rock1
    #print all_rock
   
 
index=0
count=1
gem_count=0
all_rock = sorted(all_rock)
print all_rock
size_r = len(all_rock)
count_arr = []
ch_ar = []
print size_r
for j in range(1,size_r):
    if(all_rock[j] == all_rock[j-1]) :
         count= count+1
    else :
	count_arr += [count]
	ch_ar +=[all_rock[j-1]]
        if (count >= T):
            gem_count= gem_count+1
            count = 1
        else :
            count = 1

if count >= T :
	gem_count +=1
	
print j
print count_arr
print ch_ar
all_rock = sorted(set(all_rock))
print all_rock
print gem_count
         
