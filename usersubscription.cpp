
 /*including  the library for the input and output, and the library for the random number generator, and the library
 for the time */
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    ////generating random number, and assigning it to our variable, and 
    srand(static_cast<unsigned int>(time(nullptr)));  
    int daysUntilExpiration=rand()%12; //generating random number and assigning it to our variable
    

    //if statement to check if the days until expiration is less than or equal to 1,10,5,..
      if (daysUntilExpiration <= 1) {
        cout << "Your subscription expires within a day!" <<endl;
        cout << "Renew now and save 20%!" <<endl;
    } else if (daysUntilExpiration <= 5) {
        cout << "Your subscription expires in " << daysUntilExpiration << " days" <<endl;
        cout << "Renew now and save 10%!" <<endl;
    } else if (daysUntilExpiration <= 10) {
        cout << "Your subscription will expire soon. Renew now!" <<endl;
    } else if (daysUntilExpiration == 0) {
        cout << "Your subscription has expired." <<endl;
    } else {
        cout << "You have an active subscription." <<endl;
    }
    return 0;

         }


