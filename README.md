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

## Example of use:
```
holberton@holberton-ThinkPad-X1-Carbon-Gen-9:~/projects/holbertonschool-monty$ cat 01
push 45
push 2
push 5
pall
nop
push 7
pall
add
pall
swap
pall
pint
push 3
pop
pall
holberton@holberton-ThinkPad-X1-Carbon-Gen-9:~/projects/holbertonschool-monty$ ./monty 01
5
2
45
7
5
2
45
12
2
45
2
12
45
2
2
12
45
```

## Commands and usage:
- <strong>push</strong>: this command push an element to the stack.
  - <strong>Usage:</strong> push \<int\> 
  
- <strong>pall</strong>: this command print all the stack. 
  - <strong>Usage: </strong> pall

- <strong>pint</strong>: this command print only the first element in the stack.
  - <strong>Usage:</strong> pint
    
- <strong>pop</strong>: Remove the top element of the stack.
    - <strong>Usage:</strong> pop
      
- <strong>swap</strong>: Swap the top two elements of the stack.
  - <strong>Usage:</strong> swap
    
- <strong>add</strong>: Add the top two elements.
  - <strong>Usage:</strong> add
    
- <strong>nop</strong>: This command don't do anything.
    - <strong>Usage:</strong> nop
   
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
