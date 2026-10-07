
# Practical No. 6

## Title
Train Ticket Booking System Using Queue

## Algorithm

1. **Start**
2. Initialize the stack and set `top = -1`.
3. Enter the decimal number.
4. If the number is `0`, push `0` into the stack.
5. Otherwise, repeat the following steps until the number becomes `0`:

   * Calculate the remainder by dividing the number by `2`.
   * Push the remainder into the stack.
   * Divide the number by `2`.
6. Pop the elements from the stack one by one.
7. Display the popped elements as the binary equivalent.
8. **Stop**.
