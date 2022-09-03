#include<stdio.h>
#include<stdlib.h>
//Welcome to the program!
#define max 5
int arr[max];
int top=-1;
void pop();
void push();
void display();
void main()
{
    system("cls"); //Clears the console output of the previously run code
    printf("Hey welcome to my program!");
    int sw;
    while(1){
        printf("\nThe following are your choices");
        printf("\n1. PUSH");
        printf("\n2. POP");
        printf("\n3. DISPLAY");
        printf("\nEXIT");
        printf("\n|| ENTER YOUR CHOICE || : ");
        scanf("%d",&sw);
        switch (sw)
        {
        case 1: push();
        break;
        case 2: pop();
        break;
        case 3: display();
        break;
        case 4: exit(1);
        break;
        }
    }
}
//Removes the first element in the stack
void pop(){
    if (top==-1)
    {
        printf("\nUNDERFLOW\n");
    }
    else
    {
        printf("\n--- ELement:\n %d", arr[top]);
        top--;
    }
    
}
//Inserts an element at the top position
void push(){
    if (top==max-1)
    {
        printf("Overflow");
    }
    else
    {
        top++;
        printf("\n+++ ELement:\n");
        scanf("%d", &arr[top]);
    }
    
}
//Displays the entire stack
void display(){
    if (top==-1)
    {
        printf("\nUNDERFLOW\n");
    }
    else{
        printf("\n");
        for (int i=top; i >= 0; i--)
        {
            printf(" | %d |", arr[i]);
        }
    }
}