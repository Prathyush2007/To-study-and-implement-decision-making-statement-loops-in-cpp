Name: Prathyush Nimmagadda
PRN: 24070123064
Batch: ENTC A3

C++ Programs: Decision Control and Loop Statements
Explore foundational examples in C++ covering conditions and loops. Each section explains the logic, relevant theory, and typical output for learning program flow and structured iteration.

1. Code: Display Numbers 1 to 20 with a While Loop
Logic:
Start with a variable i at 0. Utilize a while loop: as long as i is less than 20, print i+1 then increase i by 1. Continue until 20 numbers have been shown.

Theory:
A while loop checks its condition before executing the body, making it suited for scenarios where the iteration count isn't set from the start.

Concepts:

Loop basics

Entry-controlled repetition

Simple counter

Sample Output:

text
1
2
3
...
20
2. Code: Debugging Faulty Nested Loops
Logic:
This snippet aims to print a right-angled triangle using nested loops, but it fails to compile due to a misplaced endl and a missing closing brace.

Theory:
In C++, well-matched braces and correct syntax are essential; a single omission like a missing } triggers compilation errors.

Concepts:

Nested iteration

Syntax validation

C++ troubleshooting

Expected Output:

text
Error: expected '}' at end of input
3. Code: Print "SIT" Multiple Times with a For Loop
Logic:
A for loop runs from 0 to 5, each time outputting "SIT". The loop ensures the message gets printed a fixed number of times (here, 6).

Theory:
The for loop structure enables predictable, fixed-number repetition, ideal for outputting repeated information.

Concepts:

For loop construction

Counting iterations

Output repetition

Sample Output:

text
SIT
SIT
SIT
SIT
SIT
SIT
4. Code: Show Even Numbers 0 to 10 Using For Loop
Logic:
For numbers from 0 to 10, print only if divisible by 2 (i % 2 == 0 checks this). All even values in range are displayed.

Theory:
Conditional statements within loops allow targeted outputs, while modulus operator helps recognize even/odd numbers.

Concepts:

Using conditions in loops

Modulo operator

Selective printing

Sample Output:

text
0
2
4
6
8
10
5. Code: Reverse a Five-Digit Number
Logic:
Take a number, then reverse its digits: repeatedly get the last digit (% 10), build the new number (* 10 + digit), then chop off the digit (/ 10).

Theory:
Combining modulo and integer division allows programmers to break down and reconstruct numbers in algorithmic ways.

Concepts:

Integer digit handling

Reverse logic

Arithmetic manipulations

Sample Output:

text
Reversed number: 56032
6. Code: Secure Login with Limited Attempts
Logic:
Grants a user up to three tries to enter the correct password. Each failed attempt reduces the count. If correct, it grants access; if not, access is denied after three tries.

Theory:
Looping structures paired with conditionals form the basis for basic login and authentication systems.

Concepts:

While loops

Access control

Conditional break

Sample Output:

text
Welcome to Secure Login

Enter the password (Attempts left:3): 345
Incorrect password, Pls try again

Enter the password (Attempts left:2): 345
Incorrect password, Pls try again

Enter the password (Attempts left:1): 123
Access Granted, Welcome!
7. Code: Left-Aligned Incremental Star Triangle
Logic:
The outer loop runs for each row. For each row, the inner loop prints stars equal to the row number (growing with each line).

Theory:
This pattern demonstrates how nested iteration builds up growing shapes, like a left-sided triangle.

Concepts:

Nested looping

Pattern formation

Line-by-line output variation

Sample Output:

text
*
**
***
****
*****
8. Code: Right-Aligned Star Pattern (Mirror)
Logic:
For each row, two inner loops: one prints initial spaces for right-alignment, the next outputs the stars, building a right-angled triangle mirrored horizontally.

Theory:
Careful management of indices and spacing allows for the creation of aligned pattern outputs.

Concepts:

Indentation techniques

Nested for loops

Formatting with spaces

Sample Output:

text
    *
   **
  ***
 ****
*****
9. Code: Floyd’s Triangle (User Input Rows)
Logic:
Takes a user-defined row count and builds Floyd’s triangle, filling rows with numbers incrementing sequentially.

Theory:
Patterns like Floyd’s triangle are built with controlled increments in nested structures and reinforce handling user inputs.

Concepts:

User-driven logic

Growing nested loops

Patterned numeric output

Sample Output:

text
Enter number of rows: 4
1
2 3
4 5 6
7 8 9 10
10. Code: Hourglass Pattern with Stars
Logic:
Splits the output into two symmetrical halves. Uses loops to control both spacing and star count, producing a visual hourglass shape.

Theory:
Pattern symmetry requires handling both increasing and decreasing elements and spaces for reflection.

Concepts:

Symmetrical looping

Visual design logic

Nested construction

Sample Output:

text
Enter the number of rows for the upper half: 3
*****
 ***
  *
 ***
*****
11. Code: Outer vs Inner Loop Demonstration
Logic:
An outer loop prints its index each time, and for every outer loop step, the inner loop iterates through its full range, displaying its value.

Theory:
This illustrates classic nested loop control, where outer events trigger full sequences of inner ones.

Concepts:

Loop nesting

Hierarchical output

Sequence relationships

Sample Output:

text
Outer:1
Inner:1
Inner:2
Inner:3
Outer:2
Inner:1
Inner:2
Inner:3
