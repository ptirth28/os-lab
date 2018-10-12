echo "Count: "
(grep  -o ' t' demo.txt && grep -o 't ' demo.txt) | wc -l
# grep  '\bt\w*t\b' demo.txt
printf "\n"

echo "Count of Kernal: "
grep -o 'kernel' demo.txt | wc -l
printf "\n"

echo "All the numbers in the file are: "
grep -o [0-9] demo.txt
printf "\n"

echo "The Addition is: "
grep -o [0-9] demo.txt | paste -sd+ | bc
printf "\n"
