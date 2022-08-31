# Spy number
print("Enter a number: ")
num = int(input())
#ori = num
#square = num*num
#count = 0
#div = 1
mul = 1
add = 0
while(num>0):
	rem = num%10
	add = add + rem
	mul = mul * rem
	num = num - rem
	num = num/10
	#count = count + 1
#print(count)
#print(add)
#print(mul)
if(mul == add):
	print("Spy number")
else:
	print("Not Spy")
