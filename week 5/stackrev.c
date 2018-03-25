// Reversal of string using stack
#include<stdio.h>
#include<string.h>
#define MAX_SIZE 100
char A[MAX_SIZE];
int top = -1;
void push(char c){
    A[++top] = c;
}
char Top(){
    if(top==-1)
        return;
    else
        return A[top];
}
void pop(){
    if(top==-1)
        printf("Stack Empty:\n");
    else{
        top = top-1;
    }
}
void reverse(char *c ,int n){
    int i;
    for(i=0;i<n;i++){
        push(c[i]);
    }
   for(i=0;i<n;i++){
        c[i]= Top();
        pop();
    }
}
int main(){
    char c[100];
    int l;
    printf("Enter the string:\n");
    gets(c);
    l = strlen(c);
    reverse(c,l);
    printf("%s",c);
}
