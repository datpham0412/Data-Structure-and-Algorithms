// Demonstrates declaration of a class and
// definition of an object of the class

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Cat // declare the Cat class
{
private:           // members that follow are public
    int itsAge;    // member variable
    int itsWeight; // member variable
public:
    int ItsAge()
    {
        return itsAge;
    }
    void SetAge(int itsAge)
    {
        if (itsAge > 20) {
            this->itsAge = itsAge;
        }
        else{
        }
    }
};

int main()
{
    Cat myCat;        // create an object of the Cat class
    myCat.itsAge = 5; // set the age of the cat
    myCat.itsWeight = 50;
    cout << "The cat is " << myCat.itsAge << " years old" << endl;
    cout << "The cat is " << myCat.itsWeight << " kg heavy" << endl;
    return 0;
}