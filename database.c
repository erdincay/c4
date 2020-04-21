#include "database.h"

int database_connect_instance(char* server_ip, int server_port, char* database_name, char* database_user, char* database_password)
{
   int connection_handle = -1;
   if ((connection_handle = cci_connect(server_ip, server_port, database_name, database_user, database_password)) < 0) {
      printf(DB_CONNECT_FAILED, __FILE__, __LINE__);
   }
   return connection_handle;
}

int database_disconnect_instance(int connection_handle)
{
   int connection_result = -1;
   T_CCI_ERROR error_message;
   if ((connection_result = cci_disconnect(connection_handle, &error_message)) < 0) {
      printf(DB_DISCONNECT_FAILED, __FILE__, __LINE__, error_message.err_code, error_message.err_msg);
   }
   return connection_result;
}

int database_prepare_statement()
{
   /*
   int con = 0, req = 0, rowCount = 0, res = 0;

   T_CCI_ERROR error;
   T_CCI_QUERY_RESULT *queryResult;
   
   if ((req=cci_prepare(con, SQL_READ_DEMODB, 0,&error)) < 0) {
      printf(DB_PREPARE_FAILED, __FILE__, __LINE__, error.err_code);

      // disconnect
      return -1;
   }
   */
  return 0;
}

int database_initialize_structure()
{
   // connect to database
   // create the users
   // create the tables
   // create the indexes
   // create the procedures
   // create the triggers
   // create the views

   return 0;
}