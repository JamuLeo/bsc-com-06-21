        
        /*Name:Leo Jamu
        sample program to read from a text file,assign those text to a variable,count 
        number of vowels in it,number of words and reverses the text*/

        #include<iostream>
        #include<fstream>
        #include<string>
        using namespace std;

    //function prototype for vowel count,word count and word reverse
        int Vowelnum(string &str);
        int wordnum(string &wo);
        string textreverse(string & text);

        int main(){
            string fileData;
            ifstream myFile;
            myFile.open("file.txt", ios::in);
            if(!myFile){
                cout<<"File not created"<<endl;
            }
            else{


                //using while loop together with getline() function to read the file line by line 
            while(getline(myFile,fileData)){
                cout<<fileData<<endl;
            }
            myFile.close();
            }

            cout<<"Number of our string vowels is : "<<Vowelnum(fileData)<<endl; //invoking function to count number of vowels
            cout<<"Number of string words count is : "<<wordnum(fileData)<<endl; //invoking function to count number of words
            cout<<"reversing the text will look like : "<<textreverse(fileData)<<endl; //invoking reverse text function 
            return 0;
        }

        int Vowelnum(string &str){

        int count=0;
        
        for(char ch: str){
            switch(tolower(ch)){
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                count++;
                break;

                default:
                break;
            }
        }
        return count;
        }

        int wordnum(string &wo){
        int count=0;

        bool inword=false;

        for(char ch:wo){

            if(isspace(ch)){
                inword=false;
            }
            else if(!inword){
                count++;
                inword=true;
            }
        }
        return count;
        }

    string textreverse(string& text){

        string reverseText;

        //iterating over characters of the input strinin reverse order

        for(int i=text.length()-1;i>=0;i--){
            reverseText +=text[i]; //appending each text the reversed string 
        }
        return reverseText;
        
    }

                
            
        


