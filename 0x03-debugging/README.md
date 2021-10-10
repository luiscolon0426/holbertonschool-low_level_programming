0. In most projects, we often give you only one main file to test with. For example, this main faile is a test for a *positive_or_negative()* function similar to the one you worked with in an earlier C project:


     Based on the main.c file above, create a file named 0-main.c. This file must test that the function positive_or_negative() gives the correct output when given a case of 0.

   You are not coding the solution / function, you’re just testing it! However, you can adapt your function from 0x01. C - Variables, if, else, while - Task #0 to compile with this main file to test locally.

    You only need to upload *0-main.c* and *main.h* for this task. We will provide our own *positive_or_negative()* function.

    **You are not allowed to add or remove lines of code, you may change only one line in this task.**


1. Copy this main file. Comment out (dont delete it!) the part code that is causing the output to go into an infinite loop.

 - Don't add or remove any lines of code, as we will be checking your line count. You are only allowed to comment out existing code.
 - You do not have to compile with -Wall -Werror -Wextra -Pendantic for this task. Your output should look likes this:

' ' ' 'ruby

carrie@ubuntu:/debugging$ gcc -std=gnu89 1-main.c -o 1-main
carrie@ubuntu:/debugging$ ./1-main
Infinite loop incoming :(
Infinite loop avoided! \o/
carrie@ubuntu:/debugging$ wc -l 1-main.c
24 1-main.c
carrie@ubuntu:/debugging$

' ' ' '
