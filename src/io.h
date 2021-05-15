#ifndef IO_H
#define IO_H

#include "type.h"
#include "linkedList.h"

accNode_t* readAccountList (accNode_t* head, char* filePath);

int saveAccountList (accNode_t* head, char* filePath);

int sendBuffer (int sockfd, const char* buffer, int bufferLen);

int recvBuffer (int sockfd, char* buffer, int msgLen);

int sendMsg (int sockfd, const net_msg_t* msg);

int recvMsg (int sockfd, net_msg_t* msg);

#endif // !IO_H
