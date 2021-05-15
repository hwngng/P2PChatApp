#include "type.h"
#include <stdlib.h>
#include <string.h>
#include "linkedList.h"

accNode_t* createNode (account_t* acc) {
    accNode_t* p = (accNode_t*) malloc(sizeof(accNode_t));
    p->acc = acc;
    p->next = NULL;

    return p;
}

accNode_t* createLinkedList () {
    accNode_t* head = (accNode_t*) malloc(sizeof(accNode_t));
    head->acc = NULL;
    head->next = NULL;

    return head;
}

accNode_t* insertNode (accNode_t* head, accNode_t* inode) {
    accNode_t* i = head;
    while (i->next != NULL) {
        i = i->next;
    }
    i->next = inode;

    return inode;
}

accNode_t* searchAccount (accNode_t* head, const char* usr) {
    accNode_t* i = head->next;
    while (i != NULL) {
        if (i->acc != NULL && !strcasecmp(i->acc->usr, usr)) {
            return i;
        }
        i = i->next;
    }

    return NULL;
}

void freeNode (accNode_t* p) {
    if (p == NULL) return;
    free(p->acc);
    free(p);
}

// void freeNodeExAcc (accNode_t* p) {
//     free(p);
// }

void freeLinkedList (accNode_t* head) {
    accNode_t* i = head;
    while (i != NULL) {
        accNode_t* p = i->next;
        freeNode(i);
        i = p;
    }
}

int removeAccount (accNode_t* head, const char* usr) {
    accNode_t* i = head;
    while(i->next != NULL) {
        if (!strcmp(i->next->acc->usr, usr)) {
            accNode_t* p = i->next->next;
            freeNode(i->next);
            i->next = p;
            return 0;
        }
        i = i->next;
    }

    return 1;
}

int overrideAhead (accNode_t* curr, const accNode_t* nextNode) {
    accNode_t* tmp;
    if (curr == NULL) {
        return -1;
    }
    if (curr->next == NULL) {
        curr->next = nextNode;
    } else {
        tmp = curr->next->next;
        freeNode(curr->next);
        curr->next = nextNode;
    }

    return 0;
}

// int removeFromList (accNode_t* head, const char* usr) {
//     accNode_t* i = head;
//     accNode_t* p;

//     while(i->next != NULL) {
//         if (!strcmp(i->next->acc->usr, usr)) {
//             p = i->next->next;
//             freeNodeExAcc(i->next);
//             i->next = p;
//             return 0;
//         }
//         i = i->next;
//     }

//     return 1;
// }