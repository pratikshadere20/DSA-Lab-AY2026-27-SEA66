
# Practical No. 8

## Title
Binary Search Tree Operations for Online Directory System

## Algorithm

1. **Start**
2. Create a BST node containing the name, left pointer, and right pointer.
3. Initialize the root of the BST as `NULL`.
4. Accept names from the user and insert them into the BST.
5. For **Insertion**:

   * If the tree is empty, create a new node as the root.
   * If the name is smaller than the current node, insert it into the left subtree.
   * If the name is greater than the current node, insert it into the right subtree.
6. For **Search**:

   * Compare the required name with the current node.
   * If equal, display **"Name found"**.
   * If smaller, search the left subtree.
   * If greater, search the right subtree.
7. Perform **Inorder Traversal**: Visit left subtree, root, then right subtree.
8. Perform **Preorder Traversal**: Visit root, left subtree, then right subtree.
9. Perform **Postorder Traversal**: Visit left subtree, right subtree, then root.
10. Display the required traversal results.
11. Repeat the operations until the user selects **Exit**.
12. **Stop**.
