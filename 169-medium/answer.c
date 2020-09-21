#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

struct Node { 
    int data; 
    struct Node* next; 
};

struct LinkedList { 
    struct Node* start; 
    struct Node* end; 
};

void insertNode(struct LinkedList *list, int data){
    struct Node *link = (struct Node*) malloc(sizeof(struct Node));

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

void printNodes(struct LinkedList *list){
    struct Node *ptr = list->start;

    while (ptr != NULL)
    {
        printf("%d",ptr->data);
        ptr=ptr->next;
    } 

}

int main(){

    struct LinkedList *list = (struct LinkedList*) malloc(sizeof(struct LinkedList));

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

int mergeSort(struct LinkedList *list){
    struct LinkedList *left = (struct LinkedList*) malloc(sizeof(struct LinkedList));
    struct LinkedList *right = (struct LinkedList*) malloc(sizeof(struct LinkedList));

    /*mergeSort(left);
    mergeSort(right);*/

    return 1;
}

void splitList(struct LinkedList *list){

}