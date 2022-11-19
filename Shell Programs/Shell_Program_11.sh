echo "Enter a filename"
read myfile
echo "Enter the word of the line you want to print"
read word
l=`grep -i $word $myfile`
echo $l
