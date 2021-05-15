#ifndef CONFIG_H
#define CONFIG_H

#define MAXLINE 255
#define TOKENLEN 32
#define MAXRETRY 5
#define BUFFSIZE 1024

#define UDPTRACKINGADDR "127.0.0.1"
#define UDPTRACKINGPORT 2105

#define SERVERADDR "127.0.0.1"
#define SERVERPORT 1999

#define CLIADDR "127.0.0.1"

#define MAXOFFLINE 4
#define MAINTAININTV 2
#define HIMSGINTV 2
#define ONLINELSTINTV 10

const char * const accountFilePath;

#endif // !CONFIG_H
