#include <stdio.h>
#include <string.h>

int main()
{
    char name[50][20], search[20], temp[20];
    int n, i, j;
    int seqIterations = 0;
    int binIterations = 0;
    int seqPosition = -1;
    int binPosition = -1;

    printf("============================================\n");
    printf("     SEARCHING TECHNIQUES COMPARISON\n");
    printf("============================================\n");

    printf("\nEnter number of contacts: ");
    scanf("%d", &n);

    printf("\nEnter contact names:\n");

    for(i = 0; i < n; i++)
    {
        printf("Contact %d: ", i + 1);
        scanf("%s", name[i]);
    }

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(strcmp(name[j], name[j + 1]) > 0)
            {
                strcpy(temp, name[j]);
                strcpy(name[j], name[j + 1]);
                strcpy(name[j + 1], temp);
            }
        }
    }

    printf("\n--------------------------------------------\n");
    printf("        SORTED CONTACT LIST\n");
    printf("--------------------------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("%d. %s\n", i + 1, name[i]);
    }

    printf("\nEnter name to search: ");
    scanf("%s", search);

    // SEQUENTIAL SEARCH

    printf("\n--------------------------------------------\n");
    printf("          SEQUENTIAL SEARCH\n");
    printf("--------------------------------------------\n");

    for(i = 0; i < n; i++)
    {
        seqIterations++;

        if(strcmp(name[i], search) == 0)
        {
            seqPosition = i;
            break;
        }
    }

    if(seqPosition != -1)
    {
        printf("Contact found at position: %d\n",
               seqPosition + 1);

        printf("Number of comparisons: %d\n",
               seqIterations);
    }
    else
    {
        printf("Contact not found.\n");

        printf("Number of comparisons: %d\n",
               seqIterations);
    }

    // BINARY SEARCH

    printf("\n--------------------------------------------\n");
    printf("             BINARY SEARCH\n");
    printf("--------------------------------------------\n");

    int low = 0;
    int high = n - 1;
    int mid;

    while(low <= high)
    {
        binIterations++;

        mid = (low + high) / 2;

        if(strcmp(name[mid], search) == 0)
        {
            binPosition = mid;
            break;
        }
        else if(strcmp(name[mid], search) < 0)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if(binPosition != -1)
    {
        printf("Contact found at position: %d\n",
               binPosition + 1);

        printf("Number of comparisons: %d\n",
               binIterations);
    }
    else
    {
        printf("Contact not found.\n");

        printf("Number of comparisons: %d\n",
               binIterations);
    }


    printf("\n============================================\n");
    printf("             SEARCH COMPARISON\n");
    printf("============================================\n");

    printf("\nTechnique              Comparisons\n");
    printf("--------------------------------------------\n");
    printf("Sequential Search          %d\n", seqIterations);
    printf("Binary Search              %d\n", binIterations);

    printf("--------------------------------------------\n");

    if(seqIterations > binIterations)
    {
        printf("Binary Search required fewer comparisons.\n");
    }
    else if(seqIterations < binIterations)
    {
        printf("Sequential Search required fewer comparisons.\n");
    }
    else
    {
        printf("Both required the same number of comparisons.\n");
    }

    printf("============================================\n");

    return 0;
}