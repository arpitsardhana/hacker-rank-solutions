
import sys

str1 = raw_input()
token = str1.split()
N = int(token[0])
P = int(token[1])
X= int(token[2])

max_val = 0
max_id = 0 

arr = raw_input()
token1 = arr.split()

if (N != len(token1)):
	print "Wrong no of enteries"
	sys.exit()
for i in range(0,N):
	A = int(token1[i]) * P
	if (A >= max_val):
		max_val = A
		max_id = i+1

	P = P-X


print max_id





