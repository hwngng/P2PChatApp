CFLAGS = -Wall -g -pthread
CC = gcc

all: init clean serverBuild clientBuild

.PHONY: client server

server: init cleanServer serverBuild

client: init cleanClient clientBuild

init:
	mkdir -p ../bin

serverBuild:
	${CC} server.c utility.c config.c io.c linkedList.c ${CFLAGS} -o ../bin/server

clientBuild:
	${CC} client.c utility.c config.c io.c linkedList.c ${CFLAGS} -o ../bin/client

cleanServer:
	rm -f ../bin/server

cleanClient:
	rm -f ../bin/client

clean:
	rm -f ../bin/*