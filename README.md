# Push_swap Project

## Table of Contents
- [Introduction](#introduction)
- [Objectives](#objectives)
- [Common Instructions](#common-instructions)
- [Mandatory Part](#mandatory-part)
  - [Rules](#rules)
  - [Example](#example)
  - ["push_swap" Program](#push_swap-program)
- [Bonus Part](#bonus-part)
  - ["checker" Program](#checker-program)

## Introduction
The Push_swap project is a sorting algorithm challenge where you need to write a program in C called push_swap. The goal is to calculate and display the smallest program, made of Push swap language instructions, that sorts a set of integers in ascending order.

## Objectives
The project aims to develop sorting algorithms, emphasizing the importance of rigor, C programming, and understanding basic algorithms and their complexities.

## Common Instructions
- Your project must be written in C.
- Follow the Norm rules.
- Handle errors gracefully, and no unexpected program termination.
- Free all heap-allocated memory.
- Include a Makefile with necessary rules.
- Encouraged to create test programs.
- Submit your work to the assigned Git repository.

## Mandatory Part

### Rules
- You have 2 stacks named a and b.
- The goal is to sort in ascending order numbers into stack a.
- Operations include: sa, sb, ss, pa, pb, ra, rb, rr, rra, rrb, rrr.

### Example
(Include an example similar to the one in your document.)

### "push_swap" Program
- Program Name: push_swap
- Files: Makefile, *.h, *.c
- Arguments: stack a (list of integers)
- Instructions separated by '\n'.
- Display the smallest list of instructions to sort the stack a.
- Error handling: "Error" on stderr for invalid input.
  
## Bonus Part

### "checker" Program
- Program Name: checker
- Files: *.h, *.c, Makefile (bonus)
- Arguments: stack a (list of integers)
- Read instructions from standard input, execute on stack a.
- Display "OK" if stack a is sorted and stack b is empty; otherwise, display "KO".
- Error handling: "Error" on stderr for invalid input.
