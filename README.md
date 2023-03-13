# Push_swap - @Codam
A sorting algorithm to sort a doubly linked list with positive and negative numbers as input. The subject specifies certain rules that must be followed. We can only;
- sa (swap a): Swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements.
- sb (swap b): Swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements.
- ss: sa and sb at the same time.
- pa (push a): Take the first element at the top of b and put it at the top of a. Do nothing if b is empty.
- pb (push b): Take the first element at the top of a and put it at the top of b. Do nothing if a is empty.
- ra (rotate a): Shift up all elements of stack a by 1. The first element becomes the last one.
- rb (rotate b): Shift up all elements of stack b by 1. The first element becomes the last one.
- rr: ra and rb at the same time.
- rra (reverse rotate a): Shift down all elements of stack a by 1. The last element becomes the first one.
- rrb (reverse rotate b): Shift down all elements of stack b by 1. The last element becomes the first one.
- rrr: rra and rrb at the same time.

## How does it work?

```bash
git clone https://github.com/WriteSomeStuff/Push_swap.git
cd Push_swap
make
to see the instructions used: ./push_swap 2 -1 6 244 100
or
bash
ARGS="$(ruby -e "puts (1..500).to_a.shuffle.join(' ')")"; ./push_swap $ARGS | ./checker_OS $ARGS; ./push_swap $ARGS | wc -l
```
