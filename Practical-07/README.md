# Practical No. 7

## Title
Dynamic Text Editor Using Singly Linked List

## Algorithm

1. **Start**
2. Create a singly linked list where each node stores a line of text and a pointer to the next node.
3. Initialize `head = NULL`.
4. Display the menu:

   * Insert line
   * Delete line
   * Display text
   * Display text in reverse order
   * Reverse the linked list
   * Exit
5. For **Insert**, create a new node, enter the text, and insert it at the required position.
6. For **Delete**, enter the position, find the corresponding node, and remove it from the list.
7. For **Display**, traverse the list from `head` to `NULL` and display all lines.
8. For **Reverse Display**, traverse the list recursively and print the lines in reverse order.
9. For **Reverse List**, change the links of all nodes so that the last node becomes the first node.
10. Repeat the operations until the user selects **Exit**.
11. **Stop**.
