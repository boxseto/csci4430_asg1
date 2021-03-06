# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <errno.h>
# include <sys/socket.h>
# include <sys/types.h>
# include <netinet/in.h>
# include <netdb.h>
# include <arpa/inet.h>

struct message_s {
	unsigned char protocol[5];       /* protocol string (5 bytes) */
	unsigned char type;              /* type (1 byte) */
	unsigned int length;             /* length (header + payload) (4 bytes) */
} __attribute__ ((packed));

int socket_create();

void getHostByName(char * hostname);

int send_socket(int sd, void * buff, int buf_len);

int recv_socket(int sd, void * buff, int buf_len);
