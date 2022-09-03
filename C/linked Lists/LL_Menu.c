#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node *head=NULL;
struct node *tail=NULL;
void create();
void display();
void insert_beg();
void insert_mid();
void insert_end();
void del_beg();
void del_mid();
void del_end();
void main()
{
    printf("Welcome to the program!\n");
    int sw;
    while(1){
        printf("\n1.Create a node\n");
        printf("2.Display the List\n");
        printf("3.Insert at the front\n");
        printf("4.Insert at the middle\n");
        printf("5.Insert at the end\n");
        printf("6.Delete at the front\n");
        printf("7.Delete at the middle\n");
        printf("8.Delete at the end\n");
        printf("Enter a choice:  ");
        scanf("%d",&sw);
        switch(sw){
            case 1: create();
            break;
            case 2: display();
            break;
            case 3: insert_beg();
            break;
            case 4: insert_mid();
            break;
            case 5: insert_end();
            break;
            case 6: del_beg();
            break;
            case 7: del_mid();
            break;
            case 8: del_end();
            break;
            default: printf("\nWrong Choice!");
        }
    }
}
void create()
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node *));
    printf("Enter a value:\n");
    scanf("%d",&temp->data);
    if(head==NULL){
        temp->next=NULL;
        head=temp;
        tail=temp;
    }
    else{
        tail->next=temp;
        tail=temp;
        tail->next=NULL;

    }
}
void display(){
    struct node *ptr;
    ptr=head;
    if(head==NULL){
        printf("The List is empty\n");
    }
    else{

    while(ptr!=NULL){
        printf("%d   ",ptr->data);
        ptr=ptr->next;
    }
    }
}
void insert_beg(){
    struct node *temp;
    temp=(struct mode *)malloc(sizeof(struct node *));
    printf("\nEnter your data: ");
    scanf("%d",&temp->data);
        temp->next=head;
        head=temp;

}
void insert_mid(){
    struct node *temp, *ptr=head;
    temp=(struct mode *)malloc(sizeof(struct node *));
    int pos,i=1;
    printf("Enter the position: ");
    scanf("%d",&pos);
    printf("\nEnter your data: ");
    scanf("%d",&temp->data);
    while(pos!=i){ //pos!=i will work for insert after || pos!i+1 will work for insert before
        ptr=ptr->next;
        i++;
    }
    temp->next=ptr->next;
    ptr->next=temp;
}
void insert_end(){
    struct node *temp, *ptr=head;
    temp=(struct mode *)malloc(sizeof(struct node *));
    printf("\nEnter your data: ");
    scanf("%d",&temp->data);
    tail->next=temp;
    tail=temp;
    tail->next=NULL;
}
void del_beg(){
    struct node *ptr;
    ptr=head;
    head=head->next;
    printf("The deleted value is: %d", ptr->data);
    free(ptr);
}
void del_mid(){
    struct node *temp, *ptr=head;
    int i=1, pos;
    printf("Enter the position:");
    scanf("%d",&pos);
    while(pos!=i+1){
        ptr=ptr->next;
        i++;
    }
    temp=ptr->next;
    ptr->next=temp->next;
    printf("The deleted element is: %d", temp->data);
    free(temp);
}
void del_end(){
    struct node *ptr, *temp;
    ptr=head;
    while(ptr->next->next!=NULL)
    ptr=ptr->next;
    if(ptr->next->next==NULL){
        temp=ptr->next;
        ptr->next=NULL;
        tail=ptr;
    }
}