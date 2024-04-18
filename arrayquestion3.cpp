//question 3 
/*creating an array of string elements and 
/*out put the elements starting with letter 'B'*/
  
#include<iostream>
using namespace std;

int main(){
//an array of 8 string elements
string text[8]={"B123","C234","A345","C15","B177","G3003","C235","B197"};

for(int i=0;i<8;i++){
//checking elements starting with Letter B and output to the console
    if(text[i][0]='B'){
        cout<<text[i]<<endl;
    }


}

    return 0;
}