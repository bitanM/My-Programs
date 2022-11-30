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
