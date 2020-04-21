#ifndef _DATABASE_H_
#define _DATABASE_H_

#include <stdio.h>
#include "defines.h"
#include "cas_cci.h"

int database_connect_instance(char* server_ip, int server_port, char* database_name, char* database_user, char* database_password);
int database_disconnect_instance(int connection_handle);
int database_prepare_statement();
int database_initialize_structure();

#endif /* _DATABASE_H_ */