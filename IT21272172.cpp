#include<iostream>
#include<cstring>
#define SIZE 20

using namespace std;

//Booking class
class Booking {
  private:
	  int bookingId;
	  string showTime;
	  int hallId;
	  Payment* pay[SIZE];
	  User* user01;
	  Movie* mov[SIZE];
	  Report* rep;
	  Ticket* Ticket1[SIZE];
public:
	Booking();
	Booking(int bID, string showT, int hID, Payment* p[SIZE],
		User* u01, Report* r);
	  void addTicket(Ticket* t1, Ticket* t2);
	  void addMovie(Movie mov1, Movie mov2);
	  void displayBooking();
	  void bookingDetails();
	  void startBooking();
	  void updateShowTime();
	  ~Booking();
};

//Main Programme
int main()
{
    Booking b1;

}