*This project has been created as part of the 42 curriculum by oabu-awa, yomar.*

# Push_swap

A 42 project focused on sorting data on a stack using a limited set of operations with the minimum number of moves.

---

## Description

**Push_swap** calculates and displays the smallest sequence of operations to sort a stack of integers in ascending order. 

The project uses two stacks, **a** and **b**:
- **Stack a**: starts with a list of random unique integers.
- **Stack b**: starts empty.
- **Goal**: sort all numbers into stack **a** in ascending order with stack **b** empty.

### Available Operations

| Operation | Description |
| :--- | :--- |
| `sa` / `sb` / `ss` | Swap top two elements of stack `a`, stack `b`, or both |
| `pa` / `pb` | Push the top element from one stack to another |
| `ra` / `rb` / `rr` | Rotate stack upwards (first element becomes last) |
| `rra` / `rrb` / `rrr` | Reverse rotate stack downwards (last element becomes first) |

---

## Algorithms

The program implements sorting strategies to handle different input sizes and degrees of disorder:

* **Disorder Metric:** Evaluates how disordered the stack is ($mistakes / total\_pairs$), giving a value between `0.0` (sorted) and `1.0` (reversed).
* **Simple ($O(n^2)$):** Selection sort extracting minimum/maximum elements to stack `b`.
* **Medium ($O(n\sqrt{n})$):** Chunk-based sorting using $\sqrt{n}$ partitions.
* **Complex ($O(n \log n)$):** Radix sort on normalized indices.
* **Adaptive (Default):** Chooses the best strategy based on the initial disorder:
  - `Disorder < 0.2`: Simple / local sort.
  - `0.2 <= Disorder < 0.5`: Medium chunk sort.
  - `Disorder >= 0.5`: Complex $O(n \log n)$ sort.

---

## Instructions

### Compilation

```bash
make        # Compile push_swap
make clean  # Remove object files
make fclean # Remove object files and binary
make re     # Recompile
make bonus  # Compile checker (bonus)
```

### Usage

```bash
# Basic sorting
./push_swap 2 1 3 6 5 8

# With flags
./push_swap --simple 5 4 3 2 1
./push_swap --medium 4 67 3 87 23
./push_swap --complex 4 67 3 87 23
./push_swap --adaptive 4 67 3 87 23

# Benchmark mode (metrics to stderr)
./push_swap --bench 4 67 3 87 23
```

---

## Bonus: Checker

The `checker` program verifies if a given sequence of instructions sorts stack `a` correctly:

```bash
ARG="3 2 1 0"; ./push_swap $ARG | ./checker $ARG
# Prints "OK" if sorted, "KO" otherwise, or "Error" on invalid input.
```

---

## Team Contributions

* **oabu-awa**: Stack structure design, core stack operations (`sa`, `sb`, `pa`, `pb`, `ra`, `rra`, etc.), and sorting algorithms.
* **yomar**: Argument parsing, error handling, disorder calculation, and benchmark output.

---

## Resources & AI Usage

### Resources
- General sorting algorithms and Big-O complexity guides.
- Data structures (linked lists and stacks in C).

### AI Usage
- Brainstorming edge cases (overflows, duplicates, sorted lists).
- Code formatting and documentation review according to 42 guidelines.
