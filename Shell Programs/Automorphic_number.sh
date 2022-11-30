echo "Enter a Number"
read n

temp=$n

sqrt=`expr $n \* $n`
flag=0

while [ $n -gt 0 ]
do
        flag1=`expr $n % 10`
        flag2=`expr $sqrt % 10`

        if [ $flag1 -ne $flag2 ]
        then
                flag=1
                break
        fi

        n=`expr $n / 10`
        sqrt=`expr $sqrt / 10`
done
if [ $flag -eq 1 ]
then
        echo "$temp is not an Automorphic Number"
else
        echo "$temp is an Automorphic Number"
fi
