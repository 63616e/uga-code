#include <iostream> 
using namespace std;

// It’s customary to place a reusable class definition in a file known as a header with a.h filename extension. these ones should have a "", not <> like iostream. #include "Account.h" for example. 
// the class name string belongs to std, like cout. 
// if you're going to get a multiline input, you can't use cin, you gotta use getline() 
/* 
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
*/ 

// class definition needs a ; at the end. 
//  A constructor in C++ is a special method that is automatically called when an object of a class is created.
// example from w3schools,


#include <iostream>
using namespace std;

class Car {        // The class
  public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    Car(string x, string y, int z); // Constructor declaration
};
// slide 8, if public is not mentioned, it's data members are private. 
// TODO: check this one. 

// slide 9:
// TODO: check data members
// methods you keep public, data members you keep private. 
// #include <string> -> is a class, needs to be imported. 
// if you then do this, you need to add using namespace std, or you'd have to do std::string 

// <> means a system file "" -> local file. 


// Constructor definition outside the class
Car::Car(string x, string y, int z) {
  brand = x;
  model = y;
  year = z;
}

int main() {
  // Create Car objects and call the constructor with different values
  Car carObj1("BMW", "X5", 1999);
  Car carObj2("Ford", "Mustang", 1969);

  // Print values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}

 
 /*
  TODO: will ask this in an exam. 
  (for i=0; i<10; i++);
 cout <<i ; (it will be nine, this will run 10 times
 */

// TODO: will ask in an exam p27 "account.h" -> const means method cannot update the object. the method cannot change the data member. 
// cannot change the data member (its value etc. )


// page 53 explicit Account(std::string) : name{AccountName} -> list initialization 

// class Student{
//   Student(int id ){
//     StudentID= id; 
//   }
// private:
//   int StudentID;
//   }

//   main() {
//     Student S1{5};
    // Student S2{'e'}; -> this will work but it's gonna be in ascii 
//   }
   // in order to prevent this, you can use the explicit keyword.
 // if there is more than one arguments, you can't use the explicit keyword to prevent the issue. 
