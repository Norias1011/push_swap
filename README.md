# Push_swap

Push_swap is a sorting algorithm project from the 42 curriculum. The goal is to sort a set of integers using two stacks and a limited set of operations, minimizing the number of moves.

## Objectives
- Develop an efficient sorting algorithm.
- Understand sorting algorithm complexity.
- Improve C programming skills and adhere to coding standards.

## Rules
- The project must be written in C.
- The code must follow the 42 coding standard.
- No memory leaks, segmentation faults, or unexpected crashes are allowed.
- A Makefile must be provided with the following rules: `$(NAME)`, `all`, `clean`, `fclean`, `re`.
- No global variables are allowed.
- If no parameters are specified, the program should not output anything.
- In case of an error, the program must output `Error` followed by a newline.

## Sorting Mechanism
- The program uses two stacks: `a` (initial stack) and `b` (empty at the start).
- The goal is to sort `a` in ascending order using the allowed operations.

### Allowed Operations
- `sa` : Swap top two elements of stack `a`.
- `sb` : Swap top two elements of stack `b`.
- `ss` : Perform `sa` and `sb` simultaneously.
- `pa` : Push the top element from `b` to `a`.
- `pb` : Push the top element from `a` to `b`.
- `ra` : Rotate stack `a` upwards.
- `rb` : Rotate stack `b` upwards.
- `rr` : Perform `ra` and `rb` simultaneously.
- `rra` : Reverse rotate stack `a`.
- `rrb` : Reverse rotate stack `b`.
- `rrr` : Perform `rra` and `rrb` simultaneously.

## Compilation & Execution
Compile the project using:
```sh
make
```
Run the program:
```sh
./push_swap <list_of_numbers>
```
Example:
```sh
./push_swap 2 1 3 6 5 8
```

## Performance Requirements
- Sort 100 numbers in fewer than 700 operations.
- Sort 500 numbers in fewer than 5500 operations.

## Bonus Features
- Implement an additional checker program to verify sorting validity.
- Optimize the sorting algorithm to minimize operations further.
- Handle various edge cases efficiently.

## External Functions Allowed
- `read`, `write`, `malloc`, `free`, `exit`
- `ft_printf` (or a self-coded equivalent)
- `Libft` is allowed

## Error Handling
The program must return an error if:
- The input contains non-numeric characters.
- The input contains duplicate numbers.
- Any number exceeds the `int` range.

## License
This project follows the 42 school guidelines.


