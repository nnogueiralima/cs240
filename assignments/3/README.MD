# Requirements

1. Answer Part 1 questions here in this file
2. Answer Part 2 questions in the source files
3. Submit this file and the two source files on to the Gradescope

# Part1: Short Answer Questions

### 1. How to add custom search path for header files and libraries file for gcc compiling (10 Points)

**Answer**: To add a custom search path for header files for gcc compiling. One option is to use -Idir, and another option is to us env variable, such as CPATH 
or C\_INCLUDE\_PATH. An example is CPATH=/home/haoyu/headers gcc -c foo.c -o foo.c. For a custom path for library files for gcc compiling there are also two options. 
One option is -L<dir_path> or the env variable such as LIBRARY_PATH. An example is LIBRARY_PATH=/home/haoyu/lib gcc -c foo.c -o foo.c. 

### 2. How to create a int array of length 100 using heap memory (10 Points)

**Answer**: To create an int array of length 100 using heap memory. Create an int pointer such as "int *p;" then allocate the space of int 100 times with malloc 
"p = (int*)malloc(100*sizeof(int));). This will create an array in heap memory: *p = p[0], *(p+1) = p[1], ..., *(p+99) = p[99].

### 3. Give each an example of dangling pointer and wild pointer (10 Points)

**Answer**: A example of a dangling pointer is if int dp and alloacted ("int *dp = (int*)malloc(sizeof(int);") then it is freed with ("free(dp)") and the dp is called again after. A wild pointer is called before malloc so it is created ("int *wp;") and then (*wp = 1). 

### 4. What are the four different segments of a C program runtime memory layout and what are they used of? (10 Points)

**Answer**: The four different segments of a C program runtime memory layout are text segment, data segment, heap, and stack. Text segment is used for machine instructions of the program. Data segmnet is used for global variables, constants, and local constant varibales. Heap is a dynamically allocated space, which can be done with malloc(). Stack is the runtime call stack used for storing return address, actual call values, local (automatic) variables, and returned value. 

# Part2: Coding  (60 Points)

Read the question in the README file and then complete the [solution] function
in the Source Code file for submission.

Coding 1: [README](coding_1.MD) and [Source Code](coding_1.c)

Coding 2: [README](coding_2.MD) and [Source Code](coding_2.c)
