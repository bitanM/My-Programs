: '
#Automorphic Number
echo "Enter a number: "
read num
square=`expr $num * $num`
count=0
ori=$num
div=1
rem=0
while [ $num -gt 0 ]
do
	rem = `expr $num % 10`
	num = `expr $num \* 10`
	count = `expr $count + 1`
done
for (( i=0; i<count; i++ ))
do
	div = `expr $div * 10`
done
if [ `expr $square % $div` -eq $ori ]
then
	echo "Automorphic number"
else
	echo "Not Automorphic"

'

: '
#Spy Number
echo "Enter a number: "
read num
mul=1
add=0
rem=0
while [ $num -gt 0 ]
do
	rem=`expr $num % 10`
	add=`expr $add + rem`
	mul=`expr $mul * rem`
	num=`expr $num / 10`
done
if [ $add -eq $mul ]
then
	echo "Spy Number"
else
	echo "Not Spy"
fi

'
