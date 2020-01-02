#include<stdio.h>

class Rectangle
{
 private:
 int length;
 int breadth;

 public:
 Rectangle(int l, int b)
 {
  length=l;
  breadth=b;
 }

 int area()
 {
  return length*breadth;
 }

 void changeLength(int l)
 {
  length=l;
 }
}; //the end of the class

//START main function
int main()
{
 Rectangle r(10,5);
 printf("Area 1 = %d",r.area());
 r.changeLength(20);
 printf("Area 2 = %d",r.area());
}
