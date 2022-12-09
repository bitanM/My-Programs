 Automorphic number
print("Enter a number: ")
num = int(input())
ori = num
square = num*num
count = 0
div = 1
while(num>0):
	rem = num%10
	num = num - rem
	num = num/10
	count = count + 1
#print(count)
for i in range(0,count):
	div = div * 10
if(square%div == ori):
	print("Automorphic")
else:
	print("Not Automorphic")
