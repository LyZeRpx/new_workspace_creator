# Workspace creator

Welcome to the Workspace Creator

## Installation

first clone this repository **into your HOME directory**

```bash
git clone https://github.com/LyZeRpx/New_workspace_creator.git
```
### Adding commands

edit your bash/zshrc file

```bash
code ~/.bashrc
```
then add the following aliases :
```bash
alias import_lib="${HOME}/New_workspace_creator/import_lib.sh"
alias new_workspace="${HOME}/New_workspace_creator/repo_init.sh"
alias new_header="${HOME}/New_workspace_creator/header_maker.sh"
```

## Usage
```bash
new_workspace
```
Creates a new_workspace from scratch, adds folders, headers, a Makefile and other
```bash
import_lib
```
If you want (or forgot) to add one of your libraries with the previous command, use this one.
```bash
new_header
```
Self explanatory...