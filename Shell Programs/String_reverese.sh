#Write a shell script to reverse a string. The string will be accept as command line argument.
str=$1
len=`echo $str | wc -c`

for((i=len; i>0; i--))
do
	c1=`echo $str | cut -c $i`
	echo -n $c1
done
echo ""
