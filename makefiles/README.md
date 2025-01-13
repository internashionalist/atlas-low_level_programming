# C - Makefiles

## Resources

- [Makefile Tutorial](https://makefiletutorial.com/)

## General

- what is `make` and  makefiles
- when, why and how to use Makefiles
- what are rules and how to set and use them
- what are explicit and implicit rules
- what are the most common / useful rules
- what are variables and how to set and use them

## Requirements

- allowed editors: vi, vim, emacs
  - OS: `Ubuntu` 20.04 LTS
  - Version of `gcc`: 9.3.0
  - Version of `make`: GNU make 4.2.1
  
- All your files should end with a new line.
- A README.md file, at the root of the folder of the project, is mandatory.

## More Info

### Files

#### The following are very important steps

- In the following tasks, we are going to use [these](https://github.com/hs-hq/0x1B.c) files. We want to compile these only.
- You can either create the files of the repository into your project folder (makefiles) and copy paste their content from github OR you can clone the 0x1B.c repository into the makefiles folder.
- If you’re going to clone it, you should enter the makefiles folder and inside this folder delete the .git folder using this command rm -rf .git then move the files from this folder into the makefiles folder to test your work.

## Tasks

0. make -f 0-Makefile

- Create your first Makefile.

  Requirements:

    name of the executable: school
    rules: all
      - The all rule builds your executable
    variables: none

1. make -f 1-Makefile

  Requirements:

    name of the executable: school
    rules: all
      - The all rule builds your executable
    variables: CC, SRC
      - CC: the compiler to be used
      - SRC: the .c files

2. make -f 2-Makefile

- Create your first useful Makefile.

  Requirements:

    name of the executable: school
    rules: all
      - The all rule builds your executable
    variables: CC, SRC, OBJ, NAME
      - CC: the compiler to be used
      - SRC: the .c files
      - OBJ: the .o files
      - NAME: the name of the executable
    The all rule should recompile only the updated source files
    You are not allowed to have a list of all the .o files

3. make -f 3-Makefile

  Requirements:

    name of the executable: school
    rules: all, clean, oclean, fclean, re
      - all: builds your executable
      - clean: deletes all Emacs and Vim temporary files along with the executable
      - oclean: deletes the object files
      - fclean: deletes all Emacs and Vim temporary files, the executable, and the object files
      - re: forces recompilation of all source files
    variables: CC, SRC, OBJ, NAME, RM
      - CC: the compiler to be used
      - SRC: the .c files
      - OBJ: the .o files
      - NAME: the name of the executable
      - RM: the program to delete files
    The all rule should recompile only the updated source files
    The clean, oclean, fclean, re rules should never fail
    You are not allowed to have a list of all the .o files

4. A complete Makefile

  Requirements:

    name of the executable: school
    rules: all, clean, fclean, oclean, re
      - all: builds your executable
      - clean: deletes all Emacs and Vim temporary files along with the executable
      - oclean: deletes the object files
      - fclean: deletes all Emacs and Vim temporary files, the executable, and the object files
      - re: forces recompilation of all source files
    variables: CC, SRC, OBJ, NAME, RM, CFLAGS
      - CC: the compiler to be used
      - SRC: the .c files
      - OBJ: the .o files
      - NAME: the name of the executable
      - RM: the program to delete files
      - CFLAGS: your favorite compiler flags: -Wall -Werror -Wextra -pedantic
    The all rule should recompile only the updated source files
    The clean, oclean, fclean, re rules should never fail

    You are not allowed to have a list of all the .o files
