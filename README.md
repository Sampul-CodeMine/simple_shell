# SIMPLE SHELL &copy; ALX SOFTWARE ENGINEERING PROGRAMME

Have you made use of a Computer System? Do you have access to a Computer System? If yes then you may have used the Shell program without having a clue to what you actually are using. Every Computer hardware becomes functional with the installation of a software known as the **Operating System**.

The **Operating System** is a low-level software that supports a computer's basic functions, such as, scheduling tasks and controlling peripherals, creating interrupts and handling requests, file management, process management, batch processing and OS monitoring/configuration utilities.

An **Operating System** *(OS)* is the program that, after being initially loaded into the computer by a boot program, manages all of the other application programs in a computer. The application programs make use of the operating system by making requests for services through a defined application program interface (API).

With that little justling around, what is a *SHELL*? A shell is the outmost layer of an **OS** which serves as an interface to the **OS**. The Shell is a computer program which helps to control processes and files, start and control other programs (application software and utility programs).

The shell manages the interaction between the user of a PC and the Operating system itself by prompting for an input from the user through a *console/command line/terminal*, interpretes the input for the **OS**, renders any resulting output from the **OS**.

The Shell provides a way of communicating with the Operating System. This communication could be carried out in different ways

- interactive communication with the user of the PC through a keyboard or any input device which is acted upon immediately.
- scheduled communication through the use of shell scripts *(a shell script is a file containing a sequence of command known to the Operating System)*.

SHELL is an environment where we can run our commands, programs and shell scripts. They provide us with a **CLI** *(Command Line Interface)* and a prompt alerting the user for a need to issue a command. When the instruction or command is typed and the return key is pressed, the command is sent to the Operating system and it is executed. If there be a resulting output, this is displayed on the CLI and the prompt appears for the next command or instruction to be issued.
  
We have two (2) major types of shells:

- **Bourne Shell**: The Bourne shell is an interactive command interpreter and command programming language. It uses the **$** character as its default prompt. Examples include
  - Bourne Shell - *(.sh)*
  - Korn Shell - *(.ksh)* - backwardly compatible with the Bourne shell and contains most of its features
  - Bourne Again Shell - *(.bash)*
  - POSIX Shell - *(.sh)*
 
- **C Shell**: This is an interactive command interpreter and a command programming language. It uses syntax that is similar to the C programming language. It uses the **%** character as its default prompt. Examples include
  - C Shell - *(.csh)*
  - TENEX/TOPS C Shell - *(.tcsh)*
 
## HOW SHELL WORKS

Knowing that the Shell is a **CLI** (Command Line Interface) that gives you an interface to communicate with the Kernel of the Operating System, these are the way it works.
- It gives you a prompt showing that it is ready to accept inputs of commands from the user. The prompt could be the **`$`** or the **`%`** symbol depending on the type of shell you are using.
- Once the return key is pressed after typing in your commands, the input is split into token (a term called **tokenization**). In this process, commands, arguments and flags are distinguised.
- The commands are then checked to see if it is a built-in shell executable command or a system call to external command file located in the file systtem.
- if the command is a built-in command, the command is executed and returns the prompt to the shell to get more commands
- if the command is a system call to an external command, shell searches the **$PATH** environment variable to check if the if the executable file exists. It it exists, a new proceses is created with a *processID* and executes the command then returns prompt to the shell for new input. If the executable file is not found in the **$PATH** environment variable or in the path specified, then an error is thrown and returns to the shell with a prompt for inputs of commands from the user.

**Advanced task that a SHELL could also perform includes:**

- **Redirections: ( `>>, >, <<, <` )** In this operation, outputs from processes of commands could be redirected to a the standard output device, a file or to another ouput device or could serve as an input to a new process. Inputs could come from the standard input device, or from a file or from the result of a preevious command.
- **Pipes: ( `|` )** Piping is running a chain of commands at the sametime, where the result from one process is used as an input for the next process. 
- **Scripting:** This is a process where you use your shell to run or execute bash scripts 

### Simple Shell: How it works:

`list the files and directories in the working directory.`
```bash
simple_shell $ ls
1.first/                  cgpa_calculator/  crash_course/  keylogger/
Persons/                  class_polymorph/  exercises/     orphan_files/
advanced_gpa_calculator/  classes/          first/         simple_calculator/
```

`creating a file called touch.sh.`
```bash
simple_shell $ touch first.sh
```

`list the files and directories in the working directory.`
```bash
simple_shell $ ls
1.first/                  class_polymorph/  first/         simple_calculator/
Persons/                  classes/          first.sh
advanced_gpa_calculator/  crash_course/     keylogger/
cgpa_calculator/          exercises/        orphan_files/
```

`list the files and directories in the working directory, then rename a file then list files and directories`
```bash
simple_shell $ ls && mv first.sh sample.sh && ls
1.first/                  class_polymorph/  first/         simple_calculator/
Persons/                  classes/          first.sh
advanced_gpa_calculator/  crash_course/     keylogger/
cgpa_calculator/          exercises/        orphan_files/

1.first/                  class_polymorph/  first/         simple_calculator/
Persons/                  classes/          keylogger/
advanced_gpa_calculator/  crash_course/     orphan_files/
cgpa_calculator/          exercises/        sample.sh
```

---
> Designed by **Ufuoma Egbetamah** *ufosky58@gmail.com* and **Dukeson Ehigboria O.** *dukesonehigboria@gmail.com*
