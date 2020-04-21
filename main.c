#include "main.h"

int main(int count, char* parameters[])
{
   printf(PROGRAM_STARTED);
   int database_connection;
   
   database_connection = database_connect_instance(DB_SERVER_IP, DB_SERVER_PORT, DB_DATABASE_NAME, DB_DATABASE_USER, DB_DATABASE_PASSWORD);
   database_connection = database_disconnect_instance(database_connection);

   printf(PROGRAM_TERMINATED);
   return 0;
}