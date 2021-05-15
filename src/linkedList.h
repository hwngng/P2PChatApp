#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "type.h"


typedef struct Node {
    account_t* acc;
    struct Node* next;
} accNode_t;

accNode_t* createNode (account_t* acc);

accNode_t* createLinkedList ();

accNode_t* insertNode (accNode_t* head, accNode_t* inode);

accNode_t* searchAccount (accNode_t* head, const char* usr);

void freeNode (accNode_t* p);

void freeLinkedList (accNode_t* head);

int removeAccount (accNode_t* head, const char* usr);

int overrideAhead (accNode_t* curr, const accNode_t* nextNode);

// int removeFromList (accNode_t* head, const char* usr);

// void freeNodeExAcc (accNode_t* p);

#endif // !LINKEDLIST_H
