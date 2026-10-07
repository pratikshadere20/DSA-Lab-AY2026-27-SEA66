// Name: Pranav Gajanan Daud
// Roll No.: SEA59
// Practical No. 1
// Program to display different patterns using numbers, alphabets, and asterisks.

#include <stdio.h>

int main()
{
    int i, j, spaces;

    // 1. Right-angle triangle with numbers
    printf("1. Right-angle Triangle with Numbers\n\n");

    for(i = 1; i <= 4; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    // 2. Diamond shape with numbers
    printf("\n2. Diamond Shape with Numbers\n\n");

    for(i = 1; i <= 4; i++)
    {
        for(spaces = 1; spaces <= 4 - i; spaces++)
        {
            printf("  ");
        }

        for(j = 1; j <= i; j++)
        {
            printf("%d   ", i);
        }

        printf("\n");
    }

    for(i = 3; i >= 1; i--)
    {
        for(spaces = 1; spaces <= 4 - i; spaces++)
        {
            printf("  ");
        }

        for(j = 1; j <= i; j++)
        {
            printf("%d   ", i);
        }

        printf("\n");
    }

    // 3. Pyramid with asterisks
    printf("\n3. Pyramid with Asterisks\n\n");

    for(i = 1; i <= 4; i++)
    {
        for(spaces = 1; spaces <= 4 - i; spaces++)
        {
            printf("  ");
        }

        for(j = 1; j <= i; j++)
        {
            printf("*   ");
        }

        printf("\n");
    }

    // 4. Pyramid using alphabets
    printf("\n4. Pyramid Using Alphabets\n\n");

    for(i = 1; i <= 4; i++)
    {
        for(spaces = 1; spaces <= 4 - i; spaces++)
        {
            printf("  ");
        }

        for(j = 1; j <= i; j++)
        {
            printf("%c ", 'A' + j - 1);
        }

        for(j = i - 1; j >= 1; j--)
        {
            printf("%c ", 'A' + j - 1);
        }

        printf("\n");
    }

    return 0;
}