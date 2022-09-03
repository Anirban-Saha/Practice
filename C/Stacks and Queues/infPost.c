#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define max 20
int top;
char exp[max];
int i;
char temp[2],symbol;
char stack[max][max];
void push(char *str)
{
if(top > max)
{
printf("\nStack overflow\n");
 exit(1);
}
else
{
 top=top+1;
 strcpy( stack[top], str);
}
}

char *pop()
{
if(top == -1 )
{
printf("\nStack underflow \n");
exit(2);
}
else
return (stack[top--]);
}
void postfix_infix(){
char op1[max];
char op2[max];
char strin[max];
char x[2] ={"("};
char y[2]={")"};
for(i=0;i<strlen(exp);i++){
symbol=exp[i];
temp[0]=symbol;
temp[1]='\0';
if(symbol!='\0'){
switch(symbol){
case '+':
case '-':
case '*':
case '/':
case '%':
case '^':
strcpy(op1,pop());
strcpy(op2,pop());
strcpy(strin,x);
strcat(strin,op2);
strcat(strin,temp);
strcat(strin,op1);
strcat(strin,y); 
push(strin);
break;
default:
push(temp);
}
}
}
printf("the equivalent infix equation is: ");
puts(stack[0]);
}
int main(){
top=-1;
printf("Enter the postfix equation : ");
gets(exp);
postfix_infix();
}