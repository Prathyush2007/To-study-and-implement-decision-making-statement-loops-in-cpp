**Name**: Prathyush Nimmagadda
**PRN**: 24070123064
**Batch**: ENTC A3

# C++ Programs: Decision Control and Loop Statements

This document outlines basic C++ programs focusing on decision control and loop statements, essential in understanding program flow and iteration.

---

## 1. Code Name: Print Numbers from 1 to 20 Using While Loop

**Logic**:
A variable `i` is initialized to 0. The `while` loop checks if `i` is less than 20. If the condition is true, it prints `i + 1` and increments `i` by 1. This continues until `i` reaches 20.

**Theory**:
The `while` loop is an entry-controlled loop that evaluates the condition before executing the loop body. It is best used when the number of iterations is not fixed or known in advance.

**Concepts Covered**:

* Looping constructs
* Entry-controlled loop
* Counter-based iteration

**Output**:

```
1
2
3
...
20
```

---

## 2. Code Name: Faulty Code

**Logic**:
The code attempts to print a right-angled triangle using nested loops, but a misplaced `endl` and a missing closing brace result in a syntax error.

**Theory**:
Correct syntax and matching braces are critical in structured programming. A small mistake like a missing `}` can halt compilation.

**Concepts Covered**:

* Nested loops
* Syntax errors
* Debugging in C++

**Output**:

```
Error: expected '}' at end of input
```

---

## 3. Code Name: Print "SIT" 5 Times Using For Loop

**Logic**:
A `for` loop runs from 0 to 5 and prints the string "SIT" in each iteration. The loop executes exactly 6 times.

**Theory**:
The `for` loop is ideal for fixed-count iterations. It consists of initialization, condition checking, and updating.

**Concepts Covered**:

* For loop structure
* Fixed iteration
* Output repetition

**Output**:

```
SIT
SIT
SIT
SIT
SIT
SIT
```

---

## 4. Code Name: Print Even Numbers from 0 to 10 Using For Loop

**Logic**:
A loop from 0 to 10 prints numbers only if they satisfy the even condition using modulus operator `i % 2 == 0`.

**Theory**:
The modulo operation is used to find divisibility. Conditional logic inside loops enables filtering desired values.

**Concepts Covered**:

* Conditional checks inside loop
* Modulus operation
* Filtering output

**Output**:

```
0
2
4
6
8
10
```

---

## 5. Code Name: Reverse a 5-Digit Number

**Logic**:
A number is reversed by extracting its digits one by one using `% 10`, building the reverse using multiplication and addition, and reducing the original number using `/ 10`.

**Theory**:
Arithmetic operations like modulo and integer division allow precise control over digit manipulation. This logic is foundational for number-based algorithms.

**Concepts Covered**:

* Modulo and integer division
* Reversing digits
* Arithmetic manipulation

**Output**:

```
Reversed number: 56032
```

---

## 6. Code Name: Limited Attempts for System Lock and Unlock

**Logic**:
The user gets three attempts to input the correct password. Each failed attempt reduces the counter. On correct input, access is granted and loop breaks; otherwise, access is denied.

**Theory**:
Combining loops with conditionals allows implementing basic user authentication. This simulates security systems.

**Concepts Covered**:

* While loop
* Authentication logic
* Loop termination

**Output**:

```
Welcome to Secure Login

Enter the password (Attempts left:3): 345
Incorrect password, Pls try again

Enter the password (Attempts left:2): 345
Incorrect password, Pls try again

Enter the password (Attempts left:1): 123
Access Granted, Welcome!
```

---

## 7. Code Name: Increment Star Pattern (Left)

**Logic**:
Outer loop controls rows. Inner loop prints `*` as many times as the current row number. Number of stars increases with each row.

**Theory**:
Nested loops generate structured patterns. This example is a basic incremental left-aligned triangle.

**Concepts Covered**:

* Nested loops
* Pattern building
* Output formatting

**Output**:

```
*
**
***
****
*****
```

---

## 8. Code Name: Mirror Image Star Pattern

**Logic**:
The outer loop handles rows. The first inner loop prints spaces to shift stars right. The second inner loop prints `*` incrementally.

**Theory**:
Right-aligned patterns combine both spacing and symbol control. They reinforce index manipulation.

**Concepts Covered**:

* Alignment logic
* Nested for loops
* Visual formatting

**Output**:

```
    *
   **
  ***
 ****
*****
```

---

## 9. Code Name: Floyd’s Series (User Input)

**Logic**:
The program accepts row input and fills values in Floyd's triangle format, increasing the number of elements per row.

**Theory**:
Floyd’s triangle is a sequential number triangle. It helps reinforce nested loops and controlled increments.

**Concepts Covered**:

* Nested loop growth
* Mathematical patterns
* User interaction

**Output**:

```
Enter number of rows: 4
1
2 3
4 5 6
7 8 9 10
```

---

## 10. Code Name: Hourglass Star Pattern

**Logic**:
Divides the hourglass into two triangle parts: inverted and upright. Uses spacing and decreasing/increasing stars to create symmetry.

**Theory**:
Symmetrical patterns teach loop manipulation in both ascending and descending order.

**Concepts Covered**:

* Loop symmetry
* Pattern reflection
* Precise spacing

**Output**:

```
Enter the number of rows for the upper half: 3
*****
 ***
  *
 ***
*****
```

---

## 11. Code Name: Inner and Outer Loops

**Logic**:
Two levels of iteration are used. The outer loop prints its index, and for each iteration, the inner loop runs completely.

**Theory**:
Demonstrates nested loops and control flow where each outer iteration triggers multiple inner iterations.

**Concepts Covered**:

* Loop hierarchy
* Sequence generation
* Nested behavior

**Output**:

```
Outer:1
Inner:1
Inner:2
Inner:3
Outer:2
Inner:1
Inner:2
Inner:3
```
