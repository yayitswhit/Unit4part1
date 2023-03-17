//
//  main.cpp
//  Unit4part1
//  This program demonstrates the functionality of if, if else statements and logical operators
//  Created by Gilbert W. Sanborn Jr on 3/16/23.
//

#include <iostream>

using namespace std;
int main() {
    int age = 0;
    int ageDifference = 0;
    bool val;
    cout << "Enter your age: ";
    cin >> age;
    
    if(age >= 21) {
        cout << "Cognratulations! You can buy alcohol!" << endl;
    }
    else if(age < 21) {
        ageDifference = 21 - age;
        cout << "You have " << ageDifference << " years until you can buy alcohol." << endl;
    }
    
    
    //use of logical operator
    char letter;
    cout << "Type a letter: ";
    cin >> letter;
    if(letter == 'A' || letter == 'a' || letter == 'E' || letter == 'e' || letter == 'I' || letter == 'i' || letter == 'O' || letter == 'o' || letter == 'U' || letter == 'u') {
        val = true;
    }
    else{
        val = false;
    }
    if(val) {
        cout << "The letter you entered is a vowel." << endl;
    }
    else {
        cout << "The letter you entered is a consonant." << endl;
    }
    return 0;
}
