

## About The Project

Ar&ElShell is a project submission in course Operating Systems at International Burch University. Project is done by Arnela Ombasa and Elma Sarajlic. Project is consisted out of three parts: shell.c is a solution to 1.1, 1.2. and 1.4 tasks, task3.c is a solution to task 1.3 and also implements 1.4. Task5.txt has answers to questions given in 1.5. 

shell.c has implementations for the following commands:
* uptime
* mkdir
* help
* sl
* ls

task3.c has implementations for the following system calls:
* fork()
* vfork()
* exec() - executes shell script from tasks 1.1 and 1.2
* execl() - executing ls -lh /home
* forkbomb - crashing PC using fork()

Task5.txt has answers for the following questions:
Q1: The following actions, do they require the OS to use kernel mode or user mode is sufficient? Explain. Starting a new process. Multiplying two floating numbers stored in an application’s memory.Writing the results of the multiplication to a temporary log file on disk.
Q2: Explain the purpose of a system call. Describe how control passes to the kernel when executing a system call.

 

This is an explanation of how to download and run this your project locally.
To get a local copy and run them follow these simple example steps.

### Installation

1. Clone the repo
 
   git clone https://github.com/ArnelaOmbasa/OS_Shell.git
 
2. Compile shell.c using gcc compiler
  
   gcc shell.c -o shell
  
3. Compile task3.c using gcc compiler

   gcc task3.c -o task3

4. Run using ./shell for shell or ./task3 for task3



## Usage

Shell part provides you with help command:

   help - gives list of all available commands
   help[command] - gives explanation how given command is used
 
Task3 part provides you with interactive menu that is navigated through using standard keyboard input.


## Resources 

Below are the resources we used during project implementation: 

https://www.programiz.com/c-programming/c-file-input-output/

https://www.geeksforgeeks.org/exec-family-of-functions-in-c/

https://www.geeksforgeeks.org/fork-system-call/



## Project files that are submitted:

1. Folder - headers ---> contain following files:<br />
<b>colors.h; command_handler.h; command_handler_task3.h; execexample.h; forkbomb.h; forkexample.h; help.h; ls.h; mkdir.h; sl.h; timer.h; uptime.h; vforkexample.h; waitexample.h </b> <br />
2. README.md <br />
3. Task5.txt ---> contains answers to the questions of task 1.5 <br />
4. shell.c <br />
5. task3.c file <br/>
6. mydirectory ---> directory made by us with mkdir command




