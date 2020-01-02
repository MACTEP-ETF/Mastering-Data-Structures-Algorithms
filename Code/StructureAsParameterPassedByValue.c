#include<stdio.h>

struct Rectangle
{
 int length;
 int breadth;
};

int area (struct Rectangle r1) //passed by value, because no asterisk or ampersand are written
{
 r1.length++;
 return r1.length*r1.breadth;
}

int main()
{
 struct Rectangle r={10,5};
 printf("%d\n", area(r));
 printf("%d\n", r.length*r.breadth);
}
