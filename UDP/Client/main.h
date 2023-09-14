
#include <stdio.h>
#include <string.h>

#include <unistd.h>

#include <arpa/inet.h>
#include <sys/socket.h>

#define SERVER "127.0.0.1"
#define BUFLEN 512	//Max length of buffer
#define DESTINATION_PORT 8888	//The port on which to send data
#define SOURCE_PORT 56657	//The port on which to send data

