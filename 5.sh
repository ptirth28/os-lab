
echo "Enter Name of File: "
read SOURCE

printf "\n"

if [ -d $SOURCE ] ; then
echo "Directory"
else
echo "File"
chmod a-w $SOURCE
fi

