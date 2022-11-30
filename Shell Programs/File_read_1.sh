echo "Enter a filename"
read myfile	
ch=`cat $myfile | wc -c`
wd=`cat $myfile | wc -w`
l=`grep -c "." $myfile`
echo "Number of characters in $myfile - $ch."
echo "Number of words in $myfile - $wd."
echo "Number of lines in $myfile - $l."
