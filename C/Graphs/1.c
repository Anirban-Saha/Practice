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
void bfs(int v);


int main(void){
     printf("Enter the number of Vertices\n");
     scanf("%d",&n);
     int adj[n][n];
     printf("\nEnter the graph data in matrix form:\n");
     for(int i=0; i<n; i++){
        for(int j=0;j<n;j++){
            scanf("%d",&adj[i][j]);
        }
     }
    

}
