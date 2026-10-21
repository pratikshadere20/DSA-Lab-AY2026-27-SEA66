


#include <stdio.h>

#define MAX 20

int graph[MAX][MAX];
int visited[MAX];
int n;

/* BFS Traversal */
void BFS(int start)
{
    int queue[MAX];
    int front = 0, rear = 0;
    int i, current;

    // Reset visited array
    for (i = 0; i < n; i++)
        visited[i] = 0;

    queue[rear++] = start;
    visited[start] = 1;

    printf("\nBFS Traversal: ");

    while (front < rear)
    {
        current = queue[front++];
        printf("%d ", current);

        for (i = 0; i < n; i++)
        {
            if (graph[current][i] == 1 &&
                visited[i] == 0)
            {
                queue[rear++] = i;
                visited[i] = 1;
            }
        }
    }

    printf("\n");
}

/* DFS Traversal */
void DFS(int current)
{
    int i;

    visited[current] = 1;
    printf("%d ", current);

    for (i = 0; i < n; i++)
    {
        if (graph[current][i] == 1 &&
            visited[i] == 0)
        {
            DFS(i);
        }
    }
}

int main()
{
    int edges;
    int u, v;
    int start;
    int i, j;

    printf("===== CAMPUS NAVIGATION SYSTEM =====\n");

    printf("\nEnter number of buildings: ");
    scanf("%d", &n);

    if (n < 1 || n > MAX)
    {
        printf("Invalid number of buildings.\n");
        return 1;
    }

    // Initialize adjacency matrix
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            graph[i][j] = 0;
        }
    }

    printf("Enter number of paths between buildings: ");
    scanf("%d", &edges);

    if (edges < 0 || edges > n * (n - 1) / 2)
    {
        printf("Invalid number of paths.\n");
        return 1;
    }

    printf("\nEnter paths between buildings (building1 building2):\n");

    for (i = 0; i < edges; i++)
    {
        scanf("%d %d", &u, &v);

        if (u < 0 || u >= n || v < 0 || v >= n || u == v)
        {
            printf("Invalid path. Enter valid building numbers.\n");
            return 1;
        }

        graph[u][v] = 1;
        graph[v][u] = 1;  // Undirected graph
    }

    // Display adjacency matrix
    printf("\nAdjacency Matrix:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter starting building: ");
    scanf("%d", &start);

    if (start < 0 || start >= n)
    {
        printf("Invalid starting building.\n");
        return 1;
    }

    // BFS Traversal
    BFS(start);

    // Reset visited array for DFS
    for (i = 0; i < n; i++)
        visited[i] = 0;

    // DFS Traversal
    printf("DFS Traversal: ");
    DFS(start);
    printf("\n");

    return 0;
}
