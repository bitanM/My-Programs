'''an = input("Name?")
print("Hello" + an)
x=int(input(""))
y=int(input(""))
sum=x+y
print(sum)
if(x>y):
	max=x
else:
	max=y
print("Max is: ")
print(max)
lst = []
for i in range(2):
	en = []
	for j in range(3):
		en.append(int(input()))
	lst.append(en)

print (lst)'''
#------------------------------------------------------------------------------------------------#
#codechef HS08TEST
'''balance=15000
amnt=int(input())
if(amnt+500<balance):
	if(amnt%5==0):
		balance=balance-(amnt+.50)
		print("Withdrawing amount:")
		print(amnt)
	else:
		print("Transaction can not be performed")
else:
	print("The account does not have the sufficient amount")
	print("The account balance is: ")
	print(balance)'''
#-------------------------------------------------------------------------------------------------#
#codechef FLOW007
'''test=int(input())
while(test>0):
	num=input();	print(int(num[::-1]));	test=test-1'''
#-------------------------------------------------------------------------------------------------#
#codechef FSQRT
'''import math
print ("The root of 25 is: ")
print (math.sqrt(25))'''
#-------------------------------------------------------------------------------------------------#
#codechef FLOW017
'''a=int(input())
b=int(input())
c=int(input())
mm=a
if(a>b):
	if(a<c):
		mm=a
	else:
		if(b>c):
			mm=b
		else:
			mm=c
else:
	if(b<c):
		mm=b
	else:
		if(a>c):
			mm=a
		else:
			mm=c
print(mm)'''
#----------------------------------------------------------------------------------------------------#
#Prime or not prime
'''num=int(input())
for i in range(2,num-1):
	if(num % i==0):
		c=1
		break
	else:
		c=0
		
if(c==1):
	print("Not Prime")
elif(c==0):
	print("Prime")'''
#----------------------------------------------------------------------------------------------------#
#codechef CHOPRT
'''test=int(input())
for i in range(test):
	a=int(input())
	b=int(input())
	
	if(a>b):
		print(">")
	elif(a<b):
		print("<")
	else:
		print("=")'''

#-----------------------------------------------------------------------------------------------------#
#codechef TLG
'''test=int(input())
d1=0
d2=0
for i in range (test):
	p1=int(input())
	p2=int(input())
	
	if(p1>p2):
		if((p1-p2)>d1):
			d1=(p1-p2)
	else:
		if((p2-p1)>d2):
			d2=(p2-p1)
		
if(d1>d2):
	m=1
	s=d1
else:
	m=2
	s=d2
			
print(m,s)'''
#-----------------------------------------------------------------------------------------------------#
#codechef HORSES
'''test=int(input())
for i in range(test):
	noh=int(input())
#lst = []
#for i in range(noh):
#	lst.append(int(input()))
	lst=list(map(int, input().split()))
	diff = []
	for i in range(noh):
		for j in range(noh):
			diff.append(lst[i]-lst[j])

	min=1000000000
	for i in range(len(diff)):
		if(diff[i]>0):
			if(min>diff[i]):
				min=diff[i]

	print(min)'''	
#-----------------------------------------------------------------------------------------------------#
'''i = int(input())
n = int(input())
q = int(input())

g=0
h=0

coin = []

for j in range(n):
	coin.append(i)
	
for j in range(n):
	a = j
	while(a>0):
		if(coin[j]==1):
			coin[j]=2
		if(coin[j]==2):
			coin[j]=1
		a=a-1
					
for j in range(n):
	if(q==1):
		if(coin[j]==1):
				g=g+1
	elif(q==2):
		if(coin[j]==2):
				h=h+1
		
if(q==1):
	print(g)
elif(q==2):
	print(h)'''
#-------------------------------------------------------------------------------------------------------#
'''word = str(input())
index = int(input())
cw = input()

word[index]=cw
print(word)
'''
#-------------------------------------------------------------------------------------------------------#
'''a = int(input())
b = int(input())
s = 0
even = 0
for i in range(1,a+1):
	for j in range(1,b+1):
		s = i+j
		if(s%2==0):
			even = even+1
print(even)'''

#Linear Search
'''numbers = ["Bitan","bishal","Ayan","Nilu"]
for i in range(len(numbers)):
	if(numbers[i]=="Janoar"):
		print("Found")
		exit(0)
print("Not Found")
exit(1)'''
			
			
			
			
			
			
			
			
			
				
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

