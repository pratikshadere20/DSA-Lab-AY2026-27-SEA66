# Practical No. 3

## Title

Searching Contact Names Using Sequential Search and Binary Search


## Algorithms

### 1. Sequential Search

1. Start from the first contact in the list.
2. Compare the current contact name with the search name.
3. If both names are equal, return the position of the contact.
4. Otherwise, move to the next contact.
5. Repeat the process until the contact is found or the end of the list is reached.
6. If the contact is not found, display an appropriate message.
7. Stop.

### 2. Binary Search

1. Arrange the contact names in alphabetical order.
2. Set `low = 0` and `high = n - 1`.
3. Calculate the middle position using `mid = (low + high) / 2`.
4. Compare the middle contact name with the search name.
5. If they are equal, return the position of the contact.
6. If the search name comes before the middle name, set `high = mid - 1`.
7. If the search name comes after the middle name, set `low = mid + 1`.
8. Repeat the process until the contact is found or `low > high`.
9. If the contact is not found, display an appropriate message.
10. Stop.

