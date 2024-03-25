export REPO=${HOME}/New_workspace_creator
DIR=./headers
if [ -f "$DIR" ]; then
    echo "$FILE exists."
else
    echo "headers directory not found, please either copy/create your own, or use the '"'new_workspace command'"'"
    exit
fi
echo "Enter header name ?"
read header_name
cp -r ${REPO}/headers/project.h headers/$header_name.h
sed -i "8i#ifndef ${header_name^^}_H" headers/$header_name.h
sed -i "9i \ \ \ \ #define ${header_name^^}_H" headers/$header_name.h
