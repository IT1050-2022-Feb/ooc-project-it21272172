#include<iostream>
#include<cstring>
using namespace std;
#define SIZE 20

//Payment Class
class Payment{
      protected:
        int payment_id;
        float amount;
        Booking *booking01;
      public:
        Payment();
        Payment (int pID, float amt, Booking *b01);
        void paymantDetails();
        void validate();
};

//Card class
class Card:public Payment{
      private:
        int cardNo;
        string exp_date;
      public:
        Card();
        Card( int cNo, string exp);
};

//Payoneer class
class Payoneer:public Payment{
      private:
        int payoneerId;
        string payoneerType;
      public:
        Payoneer();
        Payoneer( int payoID, string payoType);
};

//Main Programme
int main()
{
    Payment p1;
    Card c1;
    Payoneer payo1;
}