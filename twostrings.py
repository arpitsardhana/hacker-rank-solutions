

T = int(raw_input())

for i in range(0,T):
	str1 = raw_input()
	str2 = raw_input() 

	str1.replace(" ","")
	str2.replace(" ","")

	str1_l = sorted(set(str1))
	str2_l = sorted(set(str2))

	len1 = len(str1_l)
	len2 = len(str2_l)

	flag = 0
	if (len1 <= len2):
		for val in str1_l:
			if val in str2_l:
				flag = 1
				break
	else :
                for val in str2_l:
                        if val in str1_l:
                                flag = 1
                                break

	if flag == 1:
		print "YES"
	else:
		print "NO"
