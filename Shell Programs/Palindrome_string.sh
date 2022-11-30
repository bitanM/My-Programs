echo "Enter your string"
read str
len=`echo $str | wc -c`
len=`expr $len - 1`
i=1
flag=0
while [ $i -lt $len ]
do
f=`echo $str | cut -c $i`
l=`echo $str | cut -c $len`
if [ $f != $l ]
then
flag=1
break
fi
i=`expr $i + 1`
len=`expr $len - 1`
done
if [ $flag -eq 0 ]
then
echo "palindrome"
else
echo "not palindrome"
fi
