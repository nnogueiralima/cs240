# Requirements

1. Answer Part 1 questions here in this file
2. Answer Part 2 questions in the source files
3. Submit this file and the two source files on to the Gradescope

# Part1: Short Answer Questions

### 1. Called by Value (10 Points)

What it means called by value in C?
What are the values being passed when arguments are integer and char array respectively?

**Answer**: Call by value in C is a method. It is a method for passing arguments in which the value of the actual parameter is copied onto the formal parameter of the function. The two types of parameters are stored at differenet memory locations. The values are converted to pointers on the initial function when arguments are integer and char array. 

### 2. Scope (10 Points)

What is the scope of a variable in C? What's the usage of the
key word *extern* in C?

**Answer**: The scope of a variable is its lifetime in the program. It is the entire block of code of that variable through the program, such as when the variable is declared, used, and can be modified. The useage of the key word *extern* in C specifies that the function is defined elsewhere (extend visability) and uses the C-langauge calling convention. 

### 3. Static (10 Points)

What is the static key word means for an external and an internal variable?

**Answer**: The static key word for an external and an internal variable means that the function is invisable to the linker. 

### 4. Commandline Arguments (10 Points)

How to use commandline arguments in C? Give an example.

**Answer**: To use commandline arguments add them in the main() function. An example is printf("Name: %s\n", argv[0]);

# Part2: Coding  (60 Points)

Read the question in the README file and then complete the [solution] function
in the Source Code file for submission.

Coding 1: [README](coding_1.MD) and [Source Code](coding_1.c)

Coding 2: [README](Coding_2.MD) and [Source Code](coding_2.c)
