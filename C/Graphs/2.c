#include <stdio.h>
#define max 20
int adj[max][max], visited[max] = {0};
int q[max] = {0};
void bfs(int val)
{
    int rear = -1, front = -1, i = 0, queue[max];
    queue[++rear] = val;
    visited[val] = 1;
    while (rear != front)
    {
        val = queue[++front];
        if (val == 4)
            printf("5\t");
        else
            printf("%c\t", val + 65);
        for (i = 0; i < max; i++)
        {
            if (adj[val][i] == i && visited[i] == 0)
            {
                queue[++rear] = i;
                visited[i] = 1;
            }
        }
    }
}
int main()
{
    printf("\nEnter the graph data in matrix form:\n");
    for (int i = 0; i < max; i++)
    {
        for (int j = 0; j < max; j++)
        {
            scanf("%d", &adj[i][j]);
        }
    }
    bfs(0);
    return 0;
}