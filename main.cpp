#include<iostream>
#include<mysql.h>
#include<mysqld_error.h>
#include<sstream>
using namespace std;

const char* HOST = "localhost";
const char* USER = "root";
const char* PW = "root";
const char* DB = "mydb";

class Hostel{
private:
    string name;
    int bed;
    int fee;
public:
    Hostel(string Name, int Bed, int Fee){
        name = Name;
        bed = bed;
        fee = Fee;
    }

    string getName(){
        return name;
    }
    int getBed(){
        return bed;
    }
    int getFee(){
        return fee;
    }
};

int main(){
    MYSQL* conn;
    conn = mysql_init(NULL);
    if(!mysql_real_connect(conn, HOST, USER, PW,DB,3306,NULL,0)){
        cout << "ERROR :" << mysql_error(conn) << endl;
    }
    else{
        cout << "MYSQL connection success";
    }

    Hostel hostelOne("Sharavana",5,5000);

    int intBed = hostelOne.getBed();
    stringstream ss;
    ss<< intBed;

    string stringBed = ss.str();

    int intFee = hostelOne.getFee();
    stringstream ssFee;
    ssFee<< intBed;
    string stringFee = ssFee.str();


    string insert = "INSERT INTO hostel (Name, Bed, Fee) VALUES ('"+hostelOne.getName()+"','"+stringBed+"','"+intFee+"')"
}
