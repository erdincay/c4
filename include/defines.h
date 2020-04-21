#ifndef _DEFINES_H_
#define _DEFINES_H_

#define PROGRAM_STARTED "Program started!\n"
#define PROGRAM_TERMINATED "Program has been terminated!\n"

#define DB_SERVER_IP "127.0.0.1"
#define DB_SERVER_PORT 4444
#define DB_DATABASE_NAME "database"
#define DB_DATABASE_USER "username"
#define DB_DATABASE_PASSWORD "password"

#define DB_CONNECT_FAILED "%s [%d]: cci_connect fail\n"
#define DB_PREPARE_FAILED "%s [%d]: cci_prepare fail [%d]\n"
#define DB_DISCONNECT_FAILED "%s [%d]: cci_disconnect fail [%d, %s]\n"

#define SQL_READ_DEMODB "select name from demodb where id=1"


#endif /* _DEFINES_H_ */