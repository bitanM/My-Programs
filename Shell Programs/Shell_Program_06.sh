# Write a shell script to check if a given number is prime or not.
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
