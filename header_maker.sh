export REPO=${HOME}/new_workspace_creator
DIR=./include
if [ -f "$DIR" ]; then
    1
else
    echo "include directory not found, please either copy/create your own, or use the '"'new_workspace command'"'"
    exit
fi
echo "Enter header name ?"
read header_name
cp -r ${REPO}/include/project.h include/$header_name.h
sed -i "8i#ifndef ${header_name^^}_H" include/$header_name.h
sed -i "9i \ \ \ \ #define ${header_name^^}_H" include/$header_name.h
