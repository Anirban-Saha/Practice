#include <stdio.h>
#include <stdlib.h>
#define max 20
int adj[max][max];      // Stores the adjacency matrix
int q[max] = {0};       // Stores the elements in the queue
int visited[max] = {0}; // Stores the elements after they are visited
int n, front = 0, rear = -1;
/*
n--------> The number of nodes
n--------> The number of nodes
n--------> The number of nodes

*/
void bfs(int v)
{
    for (int i = 0; i < n; i++)
        if (adj[v][i] == 1 && visited[i] == 0)
            q[++rear] = i;
    if (front <= rear)
    {
        visited[q[front]] = 1;
        bfs(q[front++]);
    }
}

int main(void)
{
    int v;
    printf("Enter the number of Vertices\n");
    scanf("%d", &n);
    int adj[n][n];
    printf("\nEnter the graph data in matrix form:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &adj[i][j]);
        }
    }
    printf("Enter the starting node:\n");
    scanf("%d", &v);
    bfs(v);
    printf("The traversed elements are: \n");
    for (int i = 0; i < n; i++)
    {
        if (visited[i] == 1)
            printf("%d\t", i);
        else
        {
            printf("BFS NOT POSSIBLE!");
            break;
        }
    }
}
