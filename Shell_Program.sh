# Write a shell program to check a given program is odd or even.
echo "Enter a number:"
read num
nm=`expr $num % 2`
if [ $nm -eq 0 ]
then
        echo "The given number is Even"
else
        echo "The given number is Odd"
fi
~ 
# Write a shell script to find the greatest among 3 numbers.
echo "Enter 3 number:"
read a
read b
read c
if [ $a -gt $b -a $a -gt $c ]
then
        echo $a "is the greatest"
elif [ $b -gt $c -a $b -gt $c ]
then
        echo $b "is the greatest"
elif [ $c -gt $a -a $c -gt $b ]
then
        echo $c "is the greatest"
fi
~  
# Loop
i=1
while [ $i -le 5 ]
do
        echo $i
        i=`expr $i + 1`
done
