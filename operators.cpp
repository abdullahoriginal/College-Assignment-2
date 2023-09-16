//Student Name: Abdullah Adil
//Roll No: 133
//Class: BS-CS 2nd Semester (Morning)

#include<iostream>
using namespace std;

int main() {
    int x=4;
    int y=5;

    // All Arithmetic Operators
    cout<<"The output of using Addition operator on two variables is ";
    cout<< x+y << endl;
    cout<<"The output of using Subtraction operator on two variables is ";
    cout<< x-y << endl;
    cout<<"The output of using Multiplication operator on two variables is ";
    cout<< x*y << endl;
    cout<<"The output of using Divisional operator on two variables is ";
    cout<< x/y << endl;
    cout<<"The output of using Modulus operator on two variables is ";
    cout<< x%y << endl;

    // Increment & Decrement Operators
    cout<<"The Output of using post increment operator is ";
    cout<< x++ << endl;
    cout<<"The Output of using pre increment operator is ";
    cout<< ++x << endl;
    cout<<"The Output of using post decrement operator is ";
    cout<< x-- << endl;
    cout<<"The Output of using post decrement operator is ";
    cout<< --x << endl;

    // All Assignment Operators
    int a=10;
    cout<<"The output of using Assignment operator is "<< a << endl;

    // Compound Assignment Operators
    cout<<"The Outputs of Compound Assignment operators are:"<< endl ;
    a += 3;
    a -= 2;
    a *= 2;
    a /= 2;
    a %= 2;
    cout<<"************************"<< endl;

    // Comparison Operators
    cout<< "The Outputs of Comparison Operators are:"<< endl;
    cout<< (x > y) << endl;
    cout<< (x < y) << endl;
    cout<< (x >= y) << endl;
    cout<< (x <= y) << endl;
    cout<< (x != y) << endl;
    cout<< (x == y) << endl;

    //Logical Operators
    cout<<"The Outputs of Logical Operators are:"<< endl;
    cout<< (x>1 && x>2)<< endl;
    cout<< (x>10 || x>5)<< endl;
    cout<< !(x<5 && x>1)<< endl;
}
