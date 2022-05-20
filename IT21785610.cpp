#include<iostream>
#include<cstring>
#define SIZE 20

using namespace std;

//User class
class User{
private:
int userId;
string username;
string emailAddress;
Booking *booking02;
public:
User();
User( int uID, string uname, string email, Booking *b02);
void registerUser();
void editUser();
void login();
};


//Report class
class Report{
private:
int reportId;
Admin *admin1;
public:
Report();
Report( int rID, Admin *ad1);
void displayReport();
};


//Main Programme
int main()
{

User u1;
Report r1;

return 0;
}