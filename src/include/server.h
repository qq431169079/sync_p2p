#ifndef SERVER_H_
#define SERVER_H_

#include <netinet/in.h> //uint16_t
#include "sessions.h"

// Extras
#define BACKLOG 10 // Cuantas conexiones permitimos en la cola de pendientes

int server_send_file_info(Session *session, char *filename);
int server_send_file_segment(Session *session, char *filename);
void handle_message(int sd, uint16_t message_code, char * message);
int server_init_stack(void);


#endif /* SERVER_H_ */
