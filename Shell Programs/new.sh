X: '
# Write a shell script to add the digits of a number
echo "Enter a number:"
read num
sum=0
while [ $num -gt 0 ]
do
nm=`expr $num % 10`
sum=`expr $sum + $nm`
num=`expr $num / 10`
done
echo $sum

# Write a shell script to check if a given number is palindrome or not.
echo "Enter a number:"
read num
ori=$num
revnum=0
while [ $num -gt 0 ]
do
	nm=`expr $num % 10`
	revnum=`expr $revnum \* 10`
	revnum=`expr $revnum + $nm`
	num=`expr $num / 10`
done
if [ $ori -eq $revnum ]
then 
	echo "The given number is a paliondrome"
else
	echo "The number is not a paliondrome"
fi



for (( i=1 ; i<=5 ; i++ ))
do
	echo $i
done

# Write a shell script to check if a given number is prime or not
echo "Enter a number:"
read num
for (( i=2 ; i<num ; i++ ))
do
if [ `expr $num % $i` -eq 0 ]
then
	echo "Not Prime"
	exit
fi
done
echo "prime"
'

# Write a shell program to find the perfect square 
echo "Enter a number:"
read num
for (( i=2 ; i<num ; i++ ))
do
	if [ `expr $i \* $i` -eq $num ]
	then
		echo "Perfect Square"
		echo "Root is $i"
		exit
	fi
done
echo "Not Perfect"

# Automorphic Number
# Spy Number





