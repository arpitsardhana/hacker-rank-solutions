from array import * 

N = int(raw_input());
dict = {};
#order_list=array('i',[])
order_list = []
listfraud = []
ind=0
index = 0
dict1 = {} 
for x in range(0,N):
	record = raw_input()
	token = record.split(",")
	orderid = token[0]
	dealid = token[1]
	email = token[2].lower()
	stradd = token[3].lower()
	city  = token[4].lower()
	state = token[5].lower()
	zipcode = token[6]
	creditcard = token[7]

	email = email.replace(".","")
	ind = email.find("+")
	if (ind != -1):
		ind2 = email.find("@")
		email = email[0:ind] + email[ind2:]

	
	stradd = stradd.replace("street","st.")
	stradd = stradd.replace("road","rd.")
	stradd = stradd.replace("new york","ny")
	stradd = stradd.replace("illinois","il")
	stradd = stradd.replace("california","ca")

        city = city.replace("new york","ny")
        city = city.replace("illinois","il")
        city = city.replace("california","ca")

        state = state.replace("new york","ny")
        state = state.replace("illinois","il")
        state = state.replace("california","ca")


	zipcode = zipcode.replace("-","")
	
	f1 = email+dealid
	f2 = stradd+city+state+zipcode+dealid

	#val = creditcard+" "+ ind 
	
	
	if ( dict1.has_key(f1) or  dict1.has_key(f2) ) :
		if dict1.has_key(f1):
			key =f1
		else:
			key=f2
		
		token1 = (dict1[key]).split()
		#print token1[0]
		#print creditcard 
		tok_ind = int(token1[1])
		if (token1[0] !=  creditcard):
			if "F" in listfraud[tok_ind]:
				listfraud[tok_ind] =  listfraud[tok_ind] +","+orderid
			else:
				listfraud[tok_ind] = "F," + listfraud[tok_ind] +","+orderid
		else :
			listfraud[tok_ind] = listfraud[tok_ind] +","+orderid
		
		val=creditcard+" "+token1[1]
		if (dict1.has_key(f1) and not(dict1.has_key(f2))):
			dict1.update({f2:val})
		elif (not(dict1.has_key(f1))  and dict1.has_key(f2)):
			dict1.update({f1:val})
	else:  
		ind_str = str(index)
		val = creditcard+" "+ ind_str 
		dict1.update({f1:val,f2:val});
		listfraud += [orderid]
	        index =index+1	
	
	#print dict1


order_list = sorted(set(order_list))

size = len(listfraud)

print_list = []
for i in range(0,size):
	if "F" in listfraud[i]:
		token = listfraud[i].split(",")
		for k in range(1,len(token)):
			print_list +=[int(token[k])]
					
#print listfraud[i]

print_list.sort()

len_p = len(print_list)
new_list = []

for p in range(0,len_p):
	fd = str(print_list[p])
	new_list += [fd]

print ','.join(new_list)

   
	

