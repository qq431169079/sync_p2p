#ifndef CLIENT_H_
#define CLIENT_H_
#include "tasks.h"

void downloader_download(Task *task);
void downloader_worker_thread(void *worker_data);
void client_broadcast_nodes();
void downloader_init_stack(void);


#endif /* CLIENT_H_ */
