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
    
    switch(daysUntilExpiration){
    
    case 0:
    cout << "Your subscription has expired." <<endl;
    break;

    case 1:
    cout << "Your subscription expires within a day!" <<endl;
    break;
    case 2:
    case 3:

    case 4:
    case 5:
    cout << "Your subscription expires in " << daysUntilExpiration << " days" <<endl;
    cout << "Renew now and save 10%!" <<endl;

    break;
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    cout << "Your subscription will expire soon. Renew now!" <<endl;

    break;
    default:
    cout << "You have an active subscription." <<endl;
    }


return 0;
}