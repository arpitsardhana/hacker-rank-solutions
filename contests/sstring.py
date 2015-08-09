# Enter your code here. Read input from STDIN. Print output to STDOUT
string = raw_input();
dict1 = {}
ma_val = 0


size = len(string)

for i in range(0,size):
    if dict1.has_key(string[i]):
        dict1[string[i]] += 1
    else :
        dict1.update({string[i]:1})
  

print dict1
for key in dict1:
    if dict1[key] > ma_val :
        ma_val = dict1[key]
        ma_char = key
    
    if dict1[key] == ma_val:
	print key
        if ord(ma_char) < ord(key):
            ma_char = key
        
    
    
print ma_char
