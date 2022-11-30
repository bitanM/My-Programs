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
