# Push_swap

## 🗣️ About The Project

This project involves sorting data on a stack, with a limited set of instructions, using the lowest possible number of actions. To succeed, you'll have to manipulate various types of algorithms and choose the most appropriate solution for optimized data sorting.

The goal is to write a program in C called `push_swap` which calculates and displays on the standard output the shortest sequence of instructions needed to sort the integer arguments received.

## 🧠 The Turk Algorithm

This project implements the **Turk Algorithm**, an efficient sorting strategy that calculates move costs to determine the optimal operations. The logic proceeds in four main phases:

### 1. Push from A to B (With Cost Calculation)
* The first two elements of Stack A are pushed directly to Stack B to serve as references.
* For the remaining elements in Stack A, the algorithm calculates the **"cost"** (number of operations) required to move each element to its correct position in Stack B.
* The **"correct position"** in Stack B is defined as being on top of the *largest number that is smaller* than the number being pushed.
* The element with the **cheapest cost** is selected.
* Both stacks are rotated (optimizing with `rr` or `rrr` where possible) to bring the selected element and its target position to the top.
* The element is pushed to Stack B (`pb`).
* This process repeats until only **three elements** remain in Stack A.

### 2. Sort Three
* The three remaining numbers in Stack A are sorted using a simple algorithm to handle the few possible permutations.

### 3. Push back from B to A
* For every element in Stack B, the algorithm calculates the "cost" to move it to its correct position in Stack A.
* The **"correct position"** in Stack A is defined as being on top of the *smallest number that is larger* than the number being pushed.
* The element with the **cheapest cost** is selected.
* Both stacks are rotated to bring the selected element and its target position to the top (using `rr` or `rrr` optimization).
* The element is pushed to Stack A (`pa`).
* This repeats until Stack B is completely empty.

### 4. Final Alignment
* Finally, Stack A is rotated until the smallest number is at the very top, completing the sort.

## 🛠️ Usage

### 1. Compilation

Clone the repository and compile the project using the Makefile:

```bash
git clone git@github.com:sdadak42/Push_Swap.git
cd Push_Swap
make
```

### 2. Running the Program

You can run the program by passing a list of integers as arguments. The first argument is at the top of the stack:

```bash
./push_swap 2 1 3 6 5 8
```

The program will output a list of instructions to sort the stack:

```text
sa
pb
pb
pb
sa
pa
pa
pa
```

### Error Management
The program displays "Error" followed by a new line on the standard error if:
* Arguments are not integers.
* Arguments are bigger than an integer.
* There are duplicates.

---

## 🔄 Rules & Operations

The project performs sorting using two stacks: **Stack A** and **Stack B**.
* **Stack A**: Contains a random number of negative and/or positive numbers which cannot be duplicated.
* **Stack B**: Initially empty.

The goal is to sort the numbers in stack A in ascending order. The allowed operations are:

| Command | Description |
| :--- | :--- |
| **sa** | **Swap A**: Swap the first 2 elements at the top of stack A. Do nothing if there is only one or no elements. |
| **sb** | **Swap B**: Swap the first 2 elements at the top of stack B. Do nothing if there is only one or no elements. |
| **ss** | `sa` and `sb` at the same time. |
| **pa** | **Push A**: Take the first element at the top of B and put it at the top of A. Do nothing if B is empty. |
| **pb** | **Push B**: Take the first element at the top of A and put it at the top of B. Do nothing if A is empty. |
| **ra** | **Rotate A**: Shift up all elements of stack A by 1. The first element becomes the last one. |
| **rb** | **Rotate B**: Shift up all elements of stack B by 1. The first element becomes the last one. |
| **rr** | `ra` and `rb` at the same time. |
| **rra** | **Reverse Rotate A**: Shift down all elements of stack A by 1. The last element becomes the first one. |
| **rrb** | **Reverse Rotate B**: Shift down all elements of stack B by 1. The last element becomes the first one. |
| **rrr** | `rra` and `rrb` at the same time. |

---

## 🎁 Bonus Part

This project includes a bonus part: the **Checker** program.

### Description
The `checker` takes the stack A as an argument (list of integers). It waits and reads instructions from the standard input. Once all instructions are read, it executes them on the stack.

* If stack A is sorted and stack B is empty: Displays **OK**.
* In any other case: Displays **KO**.
* If there is an error (non-integers, duplicates, etc.): Displays **Error**.

### Usage
Compile the bonus:
```bash
make bonus
```

Run with `push_swap` (Example usage):
```bash
ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker $ARG
```