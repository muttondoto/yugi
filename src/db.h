#include <iostream>
#include <sqlite3.h>
#include <string>
#include <format>
#include <stdio.h>

static int callback(void *NotUsed, int argc, char **argv, char **azColName) {
   int i;
   for(i = 0; i<argc; i++) {
      printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
   }
   printf("\n");
   return 0;
}

int dbInit(){
const char* database = "/tmp/yugi.db";
      sqlite3 *db;
   char *zErrMsg = 0;
   int rc;

   rc = sqlite3_open(database, &db);

   if( rc ) {
      fprintf(stderr, "Can't open database: %s\n");
      return(0);
   } else {
      fprintf(stderr, "Opened database successfully\n");
   }
   sqlite3_close(db);
   return 1;
}
int Tcreate(){
const char* database = "/tmp/yugi.db";
      sqlite3 *db;
   char *zErrMsg = 0;
   int rc;
   const char* sql;
rc = sqlite3_open(database, &db);
   
   if( rc ) {
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
      return(0);
   } else {
      fprintf(stdout, "Opened database successfully\n");
   }

   /* Create SQL statement */
   /* sql = "CREATE TABLE COMPANY(""ID INT PRIMARY KEY     NOT NULL,"  "NAME           TEXT    NOT NULL,"  "AGE            INT     NOT NULL,"  "ADDRESS        CHAR(50)," "SALARY         REAL );"; */

      sql = "CREATE TABLE COMPANY("  \
      "ID INT PRIMARY KEY     NOT NULL," \
      "NAME           TEXT    NOT NULL," \
      "AGE            INT     NOT NULL," \
      "ADDRESS        CHAR(50)," \
      "SALARY         REAL );";

   /* Execute SQL statement */
   rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
   
   if( rc != SQLITE_OK ){
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   } else {
      fprintf(stdout, "Table created successfully\n");
   }
   sqlite3_close(db);

   return 0;
}
