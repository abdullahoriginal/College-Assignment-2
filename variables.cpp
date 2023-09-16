#include <iostream>
#include <typeinfo>
using namespace std;

int main() {

    //You can use the typeid operator to find the character type.
    int a=3;
    char alpha[]="a";
    float pi=3.14;
    double x=3.123465;
    bool amBOY= true
    
    cout<< "The Datatype of a is " << typeid(a).name() << endl;
    cout<< "The Datatype of alpha is " << typeid(alpha).name() << endl;
    cout<< "The Datatype of pi is " << typeid(pi).name() << endl;
    cout<< "The Datatype of x is " << typeid(x).name() << endl;
    cout<< "The Datatype of amBOY is " << typeid(amBOY).name() << endl;
    return 0;

}