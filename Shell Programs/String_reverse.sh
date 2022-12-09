str=$1
len=`echo $str | wc -c`
echo "Reversed string is:"
for (( i=len; i>0; i-- ))
do
    rev=`echo $str | cut -c $i`
    echo -n $rev
done
