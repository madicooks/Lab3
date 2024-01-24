// Lab3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void foo(float A, float B)
{
    //does something
}

void printMenu(int& choice) {
cout << "Welcome to my program, please pick one:" << endl;
cout << "1. Addition" << endl;
cout << "2. Subtraction" << endl;
cout << "3. Multiplication" << endl;
cout << "4. Division" << endl;

cout << "\nYour Selction: ";
cin >> choice;
}

void getChoices(float& A, float& B) {
    cout << "This is proving the first choice ran" << endl;
}

void firstChoice(float A, float B) {
    cout << "Choice 1: Please enter the first value:";
    cin >> A;

    cout << "Choice 1: Please enter the second value:";
    cin >> B;

}

void secondChoice(float A, float B) {
    cout << "Choice 2: Please enter the first value:";
    cin >> A;

    cout << "Choice 2: Please enter the second value:";
    cin >> B;
    
}

void thirdChoice(float A, float B) {
    cout << "Choice 3: Please enter the first value:";
    cin >> A;

    cout << "Choice 3: Please enter the second value:";
    cin >> B;
    
}

void fourthChoice(float A, float B) {
    cout << "Choice 4: Please enter the first value:"; 
    cin >> A; 

    cout << "choice 4: Please enter the second value:"; 
    cin >> B;

}



    int main()
{
        int choice; 
        float A; 
        float B; 

        printMenu(choice); 
        getChoices(A, B);

        if (choice == 1) {
            firstChoice(A, B); 
            
        }

        if (choice == 2) {
            secondChoice(A, B);
        }

        if (choice == 3) {
            thirdChoice(A, B);
        }

        if (choice == 4) {
            fourthChoice(A, B);

        }
      
} 


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
