#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Name: Pranav Gajanan Daud
Roll No.: SEA59
Practical No. 8
*/

struct Node
{
    char name[50];
    struct Node *left;
    struct Node *right;
};

// Create node
struct Node* createNode(char name[])
{
    struct Node *newNode;

    newNode = (struct Node*)malloc(sizeof(struct Node));

    strcpy(newNode->name, name);
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

// Insert
struct Node* insert(struct Node *root, char name[])
{
    if (root == NULL)
        return createNode(name);

    if (strcmp(name, root->name) < 0)
        root->left = insert(root->left, name);

    else if (strcmp(name, root->name) > 0)
        root->right = insert(root->right, name);

    else
        printf("Name already exists!\n");

    return root;
}

// Search
struct Node* search(struct Node *root, char name[])
{
    if (root == NULL)
        return NULL;

    if (strcmp(name, root->name) == 0)
        return root;

    if (strcmp(name, root->name) < 0)
        return search(root->left, name);

    return search(root->right, name);
}

// Inorder: Left -> Root -> Right
void inorder(struct Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%s  ", root->name);
        inorder(root->right);
    }
}

// Preorder: Root -> Left -> Right
void preorder(struct Node *root)
{
    if (root != NULL)
    {
        printf("%s  ", root->name);
        preorder(root->left);
        preorder(root->right);
    }
}

// Postorder: Left -> Right -> Root
void postorder(struct Node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%s  ", root->name);
    }
}

// Display all traversals
void display(struct Node *root)
{
    if (root == NULL)
    {
        printf("Directory is empty!\n");
        return;
    }

    printf("\nInorder   : ");
    inorder(root);

    printf("\nPreorder  : ");
    preorder(root);

    printf("\nPostorder : ");
    postorder(root);

    printf("\n");
}

int main()
{
    struct Node *root = NULL;
    char name[50];
    int choice;

    do
    {
        printf("\n===== ONLINE DIRECTORY =====\n");
        printf("1. Insert Name\n");
        printf("2. Search Name\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter name: ");
                scanf(" %[^\n]", name);

                root = insert(root, name);
                printf("Name inserted successfully.\n");
                break;

            case 2:
                printf("Enter name to search: ");
                scanf(" %[^\n]", name);

                if (search(root, name) != NULL)
                    printf("Name found.\n");
                else
                    printf("Name not found.\n");

                break;

            case 3:
                display(root);
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 4);

    return 0;
}