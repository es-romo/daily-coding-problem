/*
    TODO Unfinished!! 😬
*/
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct { 
    int data; 
    Node* next; 
} Node;

typedef struct { 
    Node* start; 
    Node* end; 
}  LinkedList;

void insertNode(LinkedList *list, int data){
    Node *link = ( Node*) malloc(sizeof(Node));

    link->data = data;

    if (list->start == NULL)
    {
        list->start = link;
        list->end = list->start;
    } else
    {
        list->end->next = link;
        list->end = link;
    }
};

void printNodes(LinkedList *list){
    Node *ptr = list->start;

    while (ptr != NULL)
    {
        printf("%d",ptr->data);
        ptr=ptr->next;
    } 

}

int main(){

    LinkedList *list = (LinkedList*) malloc(sizeof(LinkedList));

    insertNode(list,2);
    insertNode(list,6);
    insertNode(list,3);
    insertNode(list,9);
    insertNode(list,4);
    insertNode(list,8);
    insertNode(list,10);
    insertNode(list,5);

    printNodes(list);

    return 1;
}

void split(LinkedList *list, LinkedList *left, LinkedList *right){
    Node *fast = list->start;
    Node *slow = list->start;

    if (list->start==NULL) //if list is empty return
        return;
    if (list->start->next==NULL) //if list has single item return;
        return;
    //Crawl
    while (fast->next != NULL)
    {
        fast = fast->next;
        if (fast->next != NULL)
        {
            fast = fast->next; //advance fast twice
            slow = slow->next; //advance slow once
        }   
    }
}

int mergeSort(struct LinkedList *list){
    
    LinkedList *left = NULL;
    LinkedList *right = NULL;

    split(list,left,right);

    sortedMerge(left,right);    

    return 1;
}

void sortedMerge(struct LinkedList *left,struct LinkedList *right){
    
}