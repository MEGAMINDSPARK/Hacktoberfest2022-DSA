#include <stdio.h>  
   
//Represent a node of the singly linked list  
struct node{  
    int data;  
    struct node *next;  
};      
   
//Represent the head and tail of the singly linked list  
struct node *head, *tail = NULL;  
   
//addAtStart() will add a new node to the beginning of the list  
void addAtStart(int data) {  
    //Create a new node  
    struct node *newNode = (struct node*)malloc(sizeof(struct node));  
    newNode->data = data;  
    newNode->next = NULL;  
      
    //Checks if the list is empty  
    if(head == NULL) {  
        //If list is empty, both head and tail will point to new node  
        head = newNode;  
        tail = newNode;  
    }  
    else {  
        //Node temp will point to head  
        struct node *temp = head;  
        //newNode will become new head of the list  
        head = newNode;  
        //Node temp(previous head) will be added after new head  
        head->next = temp;  
    }  
}  
      
//display() will display all the nodes present in the list  
void display() {  
    //Node current will point to head  
    struct node *current = head;  
      
    if(head == NULL) {  
        printf("List is empty\n");  
        return;  
    }  
    printf("Adding nodes to the start of the list: \n");  
    while(current != NULL) {  
        //Prints each node by incrementing pointer  
        printf("%d ", current->data);  
        current = current->next;  
    }  
    printf("\n");  
}  
      
int main()  
{  
    //Adding 1 to the list  
    addAtStart(1);  
    display();  
      
    //Adding 2 to the list  
    addAtStart(2);  
    display();  
      
    //Adding 3 to the list  
    addAtStart(3);  
    display();  
      
    //Adding 4 to the list  
    addAtStart(4);  
    display();  
   
    return 0;  
}  
