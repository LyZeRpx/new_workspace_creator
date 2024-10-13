#!/bin/bash
echo What shell are you using ?
read SHELL
RCPATH=${HOME}/.${SHELL}rc

if [ -f "$RCPATH" ]; then
    echo 'alias import_lib="${HOME}/new_workspace_creator/import_lib.sh"' >> ${RCPATH}
    echo 'alias new_workspace="${HOME}/new_workspace_creator/repo_init.sh"' >> ${RCPATH}
    echo 'alias new_header="${HOME}/new_workspace_creator/header_maker.sh"' >> ${RCPATH}
    ${SHELL}
else
    echo "shell config not found."
fi