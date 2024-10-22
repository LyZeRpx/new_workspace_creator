# Workspace creator

Welcome to the Workspace Creator

## Installation

first clone this repository **into your HOME directory**

```bash
git clone https://github.com/LyZeRpx/new_workspace_creator.git
```
### Adding commands

edit your bash/zshrc file

```bash
code ~/.bashrc
```
then run the installation script:
```bash
chmod +x INSTALL.sh
./INSTALL.sh
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
Executes the header_maker.sh script and creates a proper header with the name of your choice.