# Write a shell program to find the perfect square.
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
