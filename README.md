# Monty 
[![](https://img.shields.io/badge/linkedin-%23000000?style=for-the-badge&logoColor=white)](https://www.linkedin.com/in/abigail-castro-b997b6266/)

## Brief introduction 
I'm part of the cohort 18 (PT) of the Holberton Coding School. I was learning C programming when I develope this project, this was one of many challenges. This is the start of what I hope, a more creative and better life. 

## Brief description of the project

This project was intended to put in practice what we learned about stack and queues. During the process of the project we have to develope our version of a scripting language called Monty following some guidelines as help. As part of the guidelines, they gives us a the name of the command given, a brief description of what should do and how it's suppose to be used. 

## Requirements
- Allowed editors: vi, vim, emacs.
- The use of a maximum of one global variable is allowed.
- No more than 5 functions per file.
- The use of the C standard library is allowed.
- The prototypes of all the functions should be included in the header file
  under the filename of monty.h.
- The header file should be include guarded.
- All the files should be compiled on Ubuntu 20.04 LTS using gcc (GNU compiler
  Collection) as follow:
  > gcc -Wall -Werror -Wextra -pedantic \*.c -o monty

## Commands and usage:
- <strong>push</strong>: this command push an element to the stack.
  - <strong>Usage: push \<int\> 
  - In case that the user only provide the command push, an error message is print as follow.
    ```
    holberton@holberton-ThinkPad-X1-Carbon-Gen-9:~/projects/holbertonschool-monty$ cat 01
    push
    holberton@holberton-ThinkPad-X1-Carbon-Gen-9:~/projects/holbertonschool-monty$ ./monty 01
    L1: usage: push integer
    ```
- <strong>pall</strong>: this command print all the stack. 
  - <strong>Usage: </strong> pall

  - Example of simple test including both (push and pall) commands:
    ```
    holberton@holberton-ThinkPad-X1-Carbon-Gen-9:~/projects/holbertonschool-monty$ cat 01
    push 3
    push 4
    push 1
    pall
    holberton@holberton-ThinkPad-X1-Carbon-Gen-9:~/projects/holbertonschool-monty$ ./monty 01
    1
    4
    3
    ```
- <strong>pint</strong>: this command print only the first element in the stack.
  - <strong>Usage:</strong> pint, in case that only the command is provided an error message should be printed as follow.
    ```
    holberton@holberton-ThinkPad-X1-Carbon-Gen-9:~/projects/holbertonschool-monty$ cat 01
    pint
    holberton@holberton-ThinkPad-X1-Carbon-Gen-9:~/projects/holbertonschool-monty$ ./monty 01
    L1: can't pint, stack empty.
    ```
  - Example of a simple test:
    ```
    holberton@holberton-ThinkPad-X1-Carbon-Gen-9:~/projects/holbertonschool-monty$ cat 01
    push 1
    pint
    push 2
    pint
    push 3
    pint
    pall
    holberton@holberton-ThinkPad-X1-Carbon-Gen-9:~/projects/holbertonschool-monty$ ./monty 01
    1
    2
    3
    3
    2
    1
    ```
- <strong>pop</strong>: Remove the top element of the stack.
    - <strong>Usage:</strong> pop, in case that a empty stack is given an error message should print as follow.
      ```
      holberton@holberton-ThinkPad-X1-Carbon-Gen-9:~/projects/holbertonschool-monty$ cat 01
      pop
      holberton@holberton-ThinkPad-X1-Carbon-Gen-9:~/projects/holbertonschool-monty$ ./monty 01
      L1: can't pop an empty stack
      ```
    - Example of a simple test:
      ```
      holberton@holberton-ThinkPad-X1-Carbon-Gen-9:~/projects/holbertonschool-monty$ cat 01
      push 3
      push 1
      push 5
      pall
      pop
      pall
      holberton@holberton-ThinkPad-X1-Carbon-Gen-9:~/projects/holbertonschool-monty$ ./monty 01
      5
      1
      3
      1
      3
      ```
- <strong>swap</strong>: Swap the top two elements of the stack.
  - <strong>Usage:</strong> swap, in case that the stack size is less than 2, an error message should be print.
    ```
    holberton@holberton-ThinkPad-X1-Carbon-Gen-9:~/projects/holbertonschool-monty$ cat 01
    push 1
    swap
    holberton@holberton-ThinkPad-X1-Carbon-Gen-9:~/projects/holbertonschool-monty$ ./monty 01
    L2: can't swap, stack too short.
    ```
  - Example of a simple test:
    ```
    holberton@holberton-ThinkPad-X1-Carbon-Gen-9:~/projects/holbertonschool-monty$ cat 01
    push 1
    push 47
    push 3
    pall
    swap
    pall
    holberton@holberton-ThinkPad-X1-Carbon-Gen-9:~/projects/holbertonschool-monty$ ./monty 01
    3
    47
    1
    47
    3
    1
    ```
- <strong>add</strong>: Add the top two elements.
  - <strong>Usage:</strong> add, if the stack is less than two elements, a error message should be printed.
    ```
    holberton@holberton-ThinkPad-X1-Carbon-Gen-9:~/projects/holbertonschool-monty$ cat 01
    push 3
    add
    holberton@holberton-ThinkPad-X1-Carbon-Gen-9:~/projects/holbertonschool-monty$ ./monty 01
    L2: can't add, stack too short.
    ```
  - Example of a simple test:
    ```
    holberton@holberton-ThinkPad-X1-Carbon-Gen-9:~/projects/holbertonschool-monty$ cat 01
    push 3
    push 47
    pall
    add
    pall
    holberton@holberton-ThinkPad-X1-Carbon-Gen-9:~/projects/holbertonschool-monty$ ./monty 01
    47
    3
    50
    ```
- <strong>nop</strong>: This command don't do anything.
    - <strong>Usage:<\strong> nop
    - A few examples:
      ```
      holberton@holberton-ThinkPad-X1-Carbon-Gen-9:~/projects/holbertonschool-monty$ cat 01
      push 1
      push 3
      nop
      push 4
      pall
      holberton@holberton-ThinkPad-X1-Carbon-Gen-9:~/projects/holbertonschool-monty$ ./monty 01
      4
      3
      1
      ```
      ```
      holberton@holberton-ThinkPad-X1-Carbon-Gen-9:~/projects/holbertonschool-monty$ cat 01
      nop
      holberton@holberton-ThinkPad-X1-Carbon-Gen-9:~/projects/holbertonschool-monty$ ./monty 01
      holberton@holberton-ThinkPad-X1-Carbon-Gen-9:~/projects/holbertonschool-monty$
      ```

## My experience through the project
As someone really new to this field, is easy to deal with simple programs or just doing some function and tested. Some of the challenges, well...understand the whole idea of how my program should flow generally speaking. How to break that general idea or concept in smaller pieces, then put everything together and test looking for conflicts or leaks, to start a debugging process and test again.

## Features
Most of the features of this project are related to stack than queue. I focus to just the mandatory tasks in this project. Features not implemented, the advanced part of this project, this include rotation of the stack, switch between stack and queue data structure behaviors, print a character or a string depending of the command given.

## Some of the challenges I encounter
  - Time management 
  - Memory leaks
  - Not being fluid in C
  - Write clean code (choosing good variable names, not just letters)
  - Documentation process.
