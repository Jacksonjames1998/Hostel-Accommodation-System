#include<iostream>
#include<mysql.h>
#include<mysqld_error.h>
using namespace std;

const char* HOST = "localhost";
const char* USER = "root";
const char* PW = "root";
const char* DB = "mydb";

int main(){
    MYSQL* conn;
    conn = mysql_init(NULL);
    if(!mysql_real_connect(conn, HOST, USER, PW,DB,3306,NULL,0)){
        cout << "MYSQL connection failed";
    }
    else{
        cout << "MYSQL connection success";
    }
}
