#include<stdio.h>

struct Rectangle
{
 int length;
 int breadth;
};

void initialize(struct Rectangle *r, int l, int b)
{
 r->length=l;
 r->breadth=b;
}

int area(struct Rectangle r)
{
 return r.length*r.breadth;
}

void changeLength(struct Rectangle *r, int l)
{
 r->length=l;
}

//START main function
int main()
{
 struct Rectangle r;
 initialize(&r,10,5);
 printf("Area 1 = %d",area(r));
 changeLength(&r,20);
 printf("Area 2 = %d",area(r));
}
