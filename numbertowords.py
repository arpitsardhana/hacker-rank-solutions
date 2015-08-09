# Enter your code here. Read input from STDIN. Print output to STDOUT
dict1 ={"1":"one","2":"two","3":"three","4":"four","5":"five","6":"six","7":"seven","8":"eight","9":"nine","10":"ten","11":"eleven","12":"twelve","13":"thirteen","14":"fourteen","15":"fifteen","16":"sixteen","17":"seventeen","18":"eighteen","19":"nineteen","20":"twenty","21":"twenty one","22":"twenty two","23":"twenty three","24":"twenty four","25":"twenty five","26":"twenty six","27":"twenty seven","28":"twenty eight","29":"twenty nine","30":"thirty"}

hr = int(raw_input())
mi = int(raw_input())
hr_str = str(hr)
if mi > 30 :
        mi_str = str(60-mi)
else :
        mi_str = str(mi)

if (mi == 0) :
        hr_str = str(hr)
        print dict1[hr_str] + " o' clock"
elif (mi < 30):
        if mi == 1 :
                minu = " minute"
        else:
                minu = " minutes"

        print dict1[mi_str] + minu +" past " + dict1[hr_str]
elif (mi == 15):
        print "quarter past " + dict1[hr_str]
elif (mi == 30):
        print "half past "+dict1[hr_str]
elif (mi == 45):
        hr = hr+1
        hr_str = str(hr)
        print "quarter to " + dict1[hr_str]
elif (mi > 30):
        if mi == 59 :
                minu = " minute"
        else:
                minu = " minutes"

        hr = hr+1
        hr_str = str(hr)
        print dict1[mi_str] + minu +" to " + dict1[hr_str]



