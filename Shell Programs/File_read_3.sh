echo "Enter a File name: "
    read myfile
    echo “Enter the word:”
    read pattern
    ch=`cat $myfile | wc -c`
    wd=`cat $myfile | wc -w`
    l=`grep -c "." $myfile`
    g=`grep -v $pattern $myfile`
    echo "Number of characters in $myfile - $ch."
    echo "Number of words in $myfile - $wd."
    echo "Number of lines in $myfile - $l."
    echo "'$pattern' is not present at these lines: "
    echo $g
