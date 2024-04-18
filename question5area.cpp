//Name: Leo Jamu
//alculating area of shapes based on user choices

#include<iostream>
using namespace std;

double triangle(int b, int c);

int rectangle(int l, int w);

int square(int length);

int main() {
bool inputValid = false;

    do {
        cout << "\nPlease select the area of the shape to calculate:" << endl;
        cout << "1. Square" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Triangle" << endl;
        cout << "4. Quit program" << endl;

        int choice;
        cin >> choice;
        int length, width, base, height;

        switch (choice) {
            case 1:
                cout << "Enter the length: ";
                cin >> length;
                cout << "The area of the Square is: " << square(length);
                inputValid = true;
                break;

            case 2:
                cout << "Enter the length: ";
                cin >> length;
                cout << "Enter the width: ";
                cin >> height;
                cout << "The area of the Rectangle is: " << rectangle(length, height);
                inputValid = true; //terminates after calculation
                break;

            case 3:
                cout << "Enter the base length: ";
                cin >> length;
                cout << "Enter the height: ";
                cin >> height;
                cout << "The area of the Triangle is: " << triangle(length, height);
                inputValid = true; //terminates after calculation
                break;

            case 4:
                exit(0); //quit for the program
                break;

            default:
                cout << "Your input was: "<<choice<<" which is invalid input"<<"\nPlease enter a valid input";
                inputValid = false; //re runs the program  
                break;
        }

    } while (!inputValid);

    return 0;
}

int square(int length) {
    return length * length;
}

int rectangle(int length, int width) {
    return length * width;
}

double triangle(int base, int height) {
    return (base * height) / 2.0;
}
