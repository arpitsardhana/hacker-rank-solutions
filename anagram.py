

T = int(raw_input())

for i in range(0,T):
 
	string = raw_input()
	size = len(string)
	if (size%2 == 1):
		print "-1"
		continue

	

	str1 = string[0:size/2] 
	str2 = string[size/2:size]

	dict1 ={}
	dict2 = {}

	size1 = len(str1)
	size2 = len(str2)
	for i in range(0,size1):
    		if dict1.has_key(str1[i]) :
        		c = str1[i]
        		dict1[c] += 1
    		else:
        		c = str1[i]
        		dict1.update({c:1})
  
	for j in range(0,size2):
    		if dict2.has_key(str2[j]) :
        		c = str2[j]
        		dict2[c] += 1
    		else:
        		c = str2[j]
        		dict2.update({ c:1 })

        
	no_del = 0

	for key in dict1 :
    		if dict2.has_key(key):
        		no_del += abs(dict1[key] - dict2[key])
        		del dict2[key]
    		else :
        		no_del += dict1[key]
            
	for key in dict2:
    		no_del += dict2[key]
    
	new = no_del/2
	print new
