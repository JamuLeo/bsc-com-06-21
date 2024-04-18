//using while to prompt for user input

#include<iostream>
using namespace std;

int main(){

int input;
bool validinput=false;

while (!validinput){

cout<<"Enter an integer value between 5 and 10"<<endl;
    cin >>input; //getting user input
 
 //checking if user input is an integer
    if(cin.fail()){
        cin.clear();
        cin.ignore();
            
      while (cin.get() !='\n'){
         cout<<"sorry you entered an invalid number,please try again"<<endl;
        cin.clear();
        //cin.ignore();
        
      }
    }
    else if(input < 5 || input > 10){
 cout<<"you entered "<<input<<".Please enter a number between 5 and 10"<<endl;
    }
else {
    cout<<"your input value ("<<input<<") has been accepted"<<endl;
    validinput=true; //exiting the loop
    
}

  }

    return 0;
}