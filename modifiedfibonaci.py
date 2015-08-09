line = raw_input().split()
n0 = int(line[0])
n1 = int(line[1])
term = int(line[2])

for i in range(2,term):
    n2 = (n1*n1) + n0
#    print n0, n1, n2
    n0 = n1
    n1 = n2
    
print n2
