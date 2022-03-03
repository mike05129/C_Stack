#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Stack_Node;

/*typedef Stack_Node *Linked_Stack;

Linked_Stack top = NULL;*/

Stack_Node *top = NULL;

int isEmpty();
void push(int);
int pop();

int main(int arg ,char* argv[]){
    printf("here");
    for(int i=0;i<10;i++){
        push(i);
    }

    printf("===================");
    while(!isEmpty()){
        printf("pop num:%d\n",pop());
    }
    return 0;

}

int isEmpty(){
    if(top == NULL){
        return 1;
    }else{
        return 0;
    }
}

void push(int data){
    Stack_Node *new_link = (Stack_Node*)malloc(sizeof(Stack_Node));
    new_link->data = data;
    new_link->next = top;
    top = new_link;
}

int pop(){
    Stack_Node *ptr;
    int temp;

    if(isEmpty()){
        printf("堆疊為空\n");
	    return -1;
    }else{
        ptr = top;
        temp = ptr ->data;
        top = top->next;
        free (ptr);
        return temp;
    }
}
