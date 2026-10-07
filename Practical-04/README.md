# Practical No. 4

## Title

Decimal to Binary Conversion Using Stack

## Algorithm

1. **Start**
2. Declare a stack and initialize `top = -1`.
3. Accept a decimal number from the user.
4. Check whether the number is `0`.
5. If the number is `0`, push `0` into the stack.
6. Otherwise, repeat until the decimal number becomes `0`:

   * Find the remainder by dividing the number by `2`.
   * Push the remainder into the stack.
   * Divide the number by `2`.
7. Pop the elements from the stack one by one.
8. Display each popped element to obtain the binary equivalent.
9. **Stop**.
