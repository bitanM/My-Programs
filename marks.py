'''s=0
name = input()
for i in range(4):
	m = float(input())
	s=s+m
print(s/4)'''

a = []
number = int(input("Please Enter the Total Elements : "))
for i in range(number):
    value = float(input())
    a.append(value)

for i in range(number -1):
    for j in range(number - i - 1):
        if(a[j] > a[j + 1]):
             temp = a[j]
             a[j] = a[j + 1]
             a[j + 1] = temp

print("The Result in Ascending Order : ", a)
