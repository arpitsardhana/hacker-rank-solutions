# Enter your code here. Read input from STDIN. Print output to STDOUT
size = int(raw_input())

list1 = map(int,raw_input().split())
list2 = map(int,raw_input().split())

current_sum=0
current_indices = 0
running_sum=0
running_indices=0
target_sum = 0
for i in range(0,size):
    if (running_sum + list1[i] >= target_sum+list2[i]):
        running_sum = running_sum+list1[i]
        running_indices += 1
        target_sum += list2[i]
    else :
        running_sum = 0
        running_indices = 0
        target_sum = 0
        if list1[i] >= list2[i] :
            running_sum = list1[i]
            running_indices += 1
            target_sum = list2[i]

    if current_sum < running_sum :
        current_sum = running_sum
        current_indices = running_indices

        
print current_indices
