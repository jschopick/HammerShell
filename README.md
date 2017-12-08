# Hammer Shell Program
## Authors: Justin Schopick and Neal Goyal

## Project Description
This program will mimic a linux or unix terminal. The program will run by allowing the user to take in a command. The program will parse each command into different vectors based on commands and connectors. Then, we use system calls to give each command functionality.
**For example:**
```c++
 $ ls -a
 $ echo hello
 $ mkdir test
```
**Is Equal To**
```c++
 $ ls -a; echo hello; mkdir test
```
## Requirements
Need to install the boost library to run the program. To get instructions on how to install, follow the website here: https://www.pyimagesearch.com/2015/04/27/installing-boost-and-boost-python-on-osx-with-homebrew/. Also, you need to compile using C++11. In order to compile, you can either run our makefile or use the command
```c++
  $ g++ *.cpp -std=c++11
```
## Features
* "||" executes the next command if the previous command fails.
* "&&" executes the next command if the previous command succeeds.
* ";" always executes the next command.
* "#" turns everything following it into a comment.
* "<" Has a command read in input from a file instead of the command prompt.
* ">" Outputs the result of a command into a file instead of the command prompt(replaces file contents).
* ">>" Appends the result of a command into a file instead of the command prompt.
* "|" Takes the output from a command and reads it in as input for the command on the other side of the pipe.

*The test command can be executed using "test" or "[]". This will print (True) if the input exists and (False) if it does not exist. The following flags can be specified for the Test Command:*
* No flag: treat as if -e flag.
* -e flag: test if the input is a directory or regular file.
* -d flag: test if the input is a directory.
* -f flag: test if the input is a regular file.

## Scripts
In this lab, we used scripts to thoroughly test all the commands.
```c++
  single_command.sh        #tests single commands
  multi_command.sh         #tests commands with ;, &&, or ||
  commented_command.sh     #tests commands with comments
  test_test.sh             #tests the Test command
  precedence_test.sh       #tests if precedence is accounted for ()
  exit.sh                  #tests the Exit command
  input_redirect_test.sh   #tests input redirection (<)
  output_redirect_test.sh  #tests single output redirection (>)
  append_redirect_test.sh  #tests double output redirection (>>)
  pipe_test.sh			          #tests piping (|)
```

## Running Hammer Shell
```c++
$ git clone  https://github.com/cs100/rshell-just-kneel.git
$ cd rshell-just-kneel
$ git checkout assn3
$ make
$ bin/rshell
```

## Known Bugs
- We currently cannot account for non bin items, such as commands like "cd"
- Issues with shell scripts running accordingly to each test
- Cannot account for quotations within the commands
- Will run with a connector at the end of the program
- Cannot account for multiple parenthesis
