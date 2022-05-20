#include<iostream>
#include<cstring>
#define SIZE 20

using namespace std;

//Movie class
  class Movie{

    private:
      int movieId;
      string movieDuration;
      string movieStart;
      string movieEnd;
    public:
      Movie();
      Movie( int mID, string mDue, string mStart, string mEnd);
      void movieDetails();
      void addBooking();    
};


//Ticket class
  class Ticket {
    private:
    	int ticketId;
    	Report* rep1;
    public:
    	Ticket();
    	Ticket(int tID, Report* r1);
    	void displayTicket();
    	~Ticket();
};


int main()
  {
    Movie m1;
    Ticket t1;

    return 0;
}