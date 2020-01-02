#include<iostream>
using namespace std;

class Rectangle
{
 private: //declare data members
   int length;
   int breadth;

 public: //members function inside a public block
   // two below are the constructors
   Rectangle() //Constructor
   {length=breadth=1;}
   Rectangle(int l, int b); //prototype of signature of the function
   

   // two below are facilitators
   int area();
   int perimeter();

   int getLength() //Call accesser
   {return length;}

   void setLength(int l){length=l;} //This is mutator
   ~Rectangle(); //This is destructor 	
};

//need to use a scope resolution ::, because it is a part of a Rectangle class
Rectangle::Rectangle(int l, int b)
{
 length=l;
 breadth=b;
}

int Rectangle::area()
{
 return length*breadth;
}

int Rectangle::perimeter()
{
 return 2*(length+breadth);
}

Rectangle::~Rectangle()
{
}

//START of main function
int main()
{
 Rectangle r(10,5);
 cout<<r.area(); //This will display the result of function
 cout<<r.perimeter();
 r.setLength(20);
 cout<<r.getLength();
}
//At the end of the main function the ~Rectangle will destroy code and free the memory
 
