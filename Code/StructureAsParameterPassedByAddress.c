#include<stdio.h>

struct Rectangle
{
 int length;
 int breadth;
};

int changelength(struct Rectangle *p, int l)
{
 p->length=20;
}

int main()
{
 struct Rectangle r={10,5};
 changelength(&r,20); //It is called by address. That means, that the members can be modified by another function
 printf("%d\n", r.length*r.breadth);
}
