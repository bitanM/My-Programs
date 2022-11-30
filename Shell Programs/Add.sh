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
