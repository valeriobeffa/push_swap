# Push_swap

The project is composed of 2 programs: push_swap and checker.

The push_swap program will receive as an argument the stack a formatted as a list of integers. The first argument should be at the top of the stack.
• The game is composed of 2 stacks named a and b.
• To start with:
  ◦ a contains a random number of either positive or negative numbers without any duplicates.
  ◦ b is empty
• The goal is to sort in ascending order numbers into stack a.
• To do this you have the following operations at your disposal:
sa : swap a - swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements).
sb : swap b - swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements).
ss : sa and sb at the same time.
pa : push a - take the first element at the top of b and put it at the top of a. Do nothing if b is empty.
pb : push b - take the first element at the top of a and put it at the top of b. Do nothing if a is empty.
ra : rotate a - shift up all elements of stack a by 1. The first element becomes the last one.
rb : rotate b - shift up all elements of stack b by 1. The first element becomes the last one.
rr : ra and rb at the same time.
rra : reverse rotate a - shift down all elements of stack a by 1. The last element becomes the first one.
rrb : reverse rotate b - shift down all elements of stack b by 1. The last element becomes the first one.
rrr : rra and rrb at the same time.
The program must display the smallest list of instructions possible to sort the stack a, the smallest number being at the top.

The checker program  will get as an argument the stack a formatted as a list of integers. The first argument should be at the top of the stack.
If no argument is given checker stops and displays nothing.
• checker will then wait and read instructions on the standard input, each instruction will be followed by ’\n’.
  Once all the instructions have been read, checker will execute them on the stack received as an argument.
• If after executing those instructions, stack a is actually sorted and b is empty, then checker must display "OK" followed by a ’\n’ on the standard output.
  In every other case, checker must display "KO" followed by a ’\n’ on the standard output.
