# Mastering-Data-Structures-Algorithms
Learn, Analyse and Implement Data Structure using C and C++. Learn Recursion and Sorting.  
## Topics
- **Phisycal data structures are:**
  - Arrays (int A\[10\])
  - Matrices (int A\[5\]\[5\])
  - Linked Lists
- **Logical data structures are:**
  - Stack
  - Queues
  - Trees
  - Graph
  - Hashing
- **Other**
  - Recursion - **very important to resolve problems!**
  - Sorting

# CONTENTS
[Pointers](#Pointers)  
[Functions](#Functions)  

<a name="Pointers"></a>
# Pointers for structures
## Major functions
- Piekļuve pie resursiem ārpus programmas:  
  - Atmiņas apgabals *Heap*, folderi, faili, klaviatūra, monitors, internets utt.  
  - Piekļuve resursiem  
  - Parametru nodošana (*Parameter passing*)  
## Size of pointers
Always have size of an integer. 2-4 bytes.  
## Declaration & initialization
- **Regular** - struct Rectangle r=15;  
- **Pointer to struct** - struct Rectangle **\*p**=&r; //(assign an address of 'r')  
## Accessing members of the structure
### For regular variable
**r.** length=15;  
### For pointer
1. (\*p).length=20; - by using *brackets* and *point*.  
2. p -> length=20; (**->** An Arrow operator in C/C++ allows to access elements in *Structures* and *Unions*. It is used with a pointer variable pointing to a structure or union. The arrow operator is formed by using a minus sign, followed by the geater than symbol!)  
## Pointer inside heap memory (dynamic object)
Regulary the pointer is located in *stuck memory* - struct Rectangle \*p;  
For heap memory we use **malloc** function:  
```
int main()  
{  
 struct Rectangle *p;  
 p=(struct Rectangle*)malloc(sizof(struct Rectangle));  
 p->length=20;  
 p->breadth=15;  
}  
```
<a name="Functions"></a>
# Functions
## What is function & Structures
**Function** - are group of related instructions wich perform a specific tasks. Functions are also called as *modules* or *procedures*.  
**Structure** - are group of realated data.  
## Style of coding
### Monolitic Programming 
- Code is written in one monolite block. (Don't do that!)  
- Only one programmer can develop that king of coding.  
### Modular Programming (Procedured Programming)
- Break the main function in to smaller task function!  
- Better to understand and develop.  
- Group of programmers can develop the code.  
- Some of team programmers develop the small tasks, but leader of team - develop a *main* fuction.  
- Increas productivity and also reusebility.  
- Create a library of small task function.  
- Function can't use the variables in another fuction.  

## Terminology of function

```
int add (int a, int b)
{
 int c;
 c = a + b;
 return (c);
}
int main()
{
 int x, y, z;
 x=5;
 y=15;
 z=add(x, y);
 printf("Sum is %d",z);
}
```
**Where:**  
- *int add (int a, int b)* - is a **Prototype** of a function or a **header** of a function. And it is a declaration of a function.  
- *{ }* - is a body of a function. Called as a definition of a function or an elaboration of a function.  
- *z=add(x, y)* - is a fuction call.  
- (x,y) - is Actual Parameters.  
- (int a, int b) - is Formal Parameters.  
**Conclusion:**  
An *add* function can't access variables of *main* fuction, and *main* function can't access the variables of *add* fuction directly!  
## Parametrs passing
### Pass by Value  (C)
Not suitable for swapping two values! Because *void* function don't return any values.  
- The Actual Parameters don't modified by Formal Parameters in *void* function directly.  
```
void swap (int x, int y)
{
 int temp;
 temp = x;
 x = y;
 y = temp;
}
int main()
{
 int a, b;
 a=10;
 b=20;
 swap(a,b);
 printf("%d %d",a,b);
}
```

### Pass by Address (C)
- Pointers use memory and have size of **int**  
- The Actual Parameters **will be modified** by Formal Parameters in *void* function indirectly by useing a **pointers**!  
```
void swap (int \*x, int \*y)
{
 int temp;
 temp = \*x;
 \*x = \*y;
 \*y = temp;
}
int main()
{
 int a, b;
 a=10;
 b=20;
 swap(&a,&b);
 printf("%d %d",a,b);
}
```
**Where:**
- swap(**&** a,**&** b) - should be an addreses of 'a' and 'b'.  
- void swap (int **\*** x, int **\*** y) - must be a pointers. (*Also, see the code section.*)  

### Pass by Reference (C++) (File Extension for C++: *.cpp)
- References don't use any memory!  
- The programm Code is Modular, but the programm is monolitic! The **swap** fuction will be copied inside main function where it was called while running the code.  
- **Don't use** call by reference **for heavy functions**! Just for small one.  
- Use carefully, and do not use always!  

```
void swap (int &x, int &y)
{
 int temp;
 temp = x;
 x = y;
 y = temp;
}
int main()
{
 int a, b;
 a=10;
 b=20;
 swap(a,b);
 printf("%d %d",a,b);
}
```
**Where:**
- void swap (int **&** x, int **&** y) - just need to add an ampersands to variables in C++. That will create a nick name for variables 'a' and 'b'  


# Array as Parameter
- Array can pass only by address.  

**Example A:**
```
void fun(int A[], int n)
{
 int i;
 for(i=0; i<n; i++)
 printf("%d",A[i]);
}

int main()
{
 int A[5] = {2,4,6,8,10};
 fun(A,5);
}
```
**Where:**
- void fun(int A\[\], int n):
  - **int A\[\]** - has no size, because function don't know the size of array. It is a **pointer** to array in main function. Also, you can write **int \*A**, and it will be a global pointer to any integer. But wrote with brackets it will point exactly to an *array* type.   
  - **int n** - it will be show the size of array for that fuction.  

**Example B:**
```
int * fun(int n)
{
 int *p;
 p=(int *)malloc(n*sizeof(int));
 return (p);
}

int main()
{
 int *A;
 A=fun(5);
 for(int i=0; i<5; i++)
 printf("%d",A[i]);
 free(A);
 //.......
}
```
**Where:**
- **int \* fun(int n)** - that means, that function return an **pointer type**. In that example it will return an array of size of 'n'.  
- **int \[\] fun(int n)** - this is only an array type of pointer.  
# Structure as Parameter

```
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
}
```
Because, "area" is called by value, that means, that the Actual Parameter will not be changed in main function, but only in area function while calculating.  

- Array can be passed by value only if it is inside of the struct! *	*Example:**
```
struct Test
{
 int A[5];
 int n;
};

void fun(struct Test t1)
{
 t1=A[0]=10;
 t1=A[1]=9;
}

int main()
{
 struct Test t={{2,4,6,8,10},5};
 fun(t);
}

```
# Best style of coding in C
```
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
```
## Class and constructor in C++

```
class Rectangle
{
 private:
 int length;
 int breadth;

 public:
 //void initialize(int l, int b) - When we initialize values for members. There is no needs for extra initialization
 Rectangle(int l, int b) //This is constructor
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
 Rectangle r(10,5); //we call an object
 // (When we initialize values for members, see above. There is no needs for extra initialization) - r.initialize(10,5);
 printf("Area 1 = %d",r.area());
 r.changeLength(20);
 printf("Area 2 = %d",r.area());
}
```
**Where:**
- **class Rectangle** - This is a class, therefore all non-main function are inside that class.  
- **Rectangle(int l, int b)** - This is call a **constructor** in C++.  
-  **Rectangle r(10,5);** - This is an **object** we call in main fuction. (Declaration and initialization.)  
## Multiple data types templates in C++
### Single type
- This Template can work only with *int* type of data!  
```
class Arithmetic
{
 private:
   int a;
   int b;

 public:
   Arithmetic(int a, int b);
   int add();
   int sub();
}; // this is end of the class

Arithmetic::Arithmetic(int a, int b)
{
 this->a=a;
 this->b=b;
}

int Arithmetic::add(int a, int b)
{
 int c;
 c = a + b;
 return c;
}

int Arithmetic::sub(int a, int b)
{
 int c;
 c = a - b;
 return c;
}
```
### Generic class template
- For multiple data type need to use **Generic class**  
- Not always you need to change all data type to template class! **Observe carefully!**  
```
template<class T> //The effect of template is inside figure brackets - **{ };**
class Arithmetic
{
 private:
   T a;
   T b;

 public:
   Arithmetic(T a, T b);
   T add();
   T sub();
}; // this is end of the class

template<class T> //The effect of template is inside figure brackets - **{ }**
Arithmetic<T>::Arithmetic(T a, T b)
{
 this->a=a;
 this->b=b;
}

template<class T> 
T Arithmetic<T>::add(int a, int b)
{
 T c;
 c = a + b;
 return c;
}

template<class T> 
T Arithmetic<T>::sub(T a, T b)
{
 T c;
 c = a - b;
 return c;
}

int main()
{
 Arithmetic <int> ar(10,5); //Set class for template. If you write <float> everywhere 'T' will be changes to data type 'float'
 cout<<ar.add();
 Arithmetic <float> ar1(1.5,4.2);
 cout<<ar1.add();
}
```
- **template<class T>** - The effect of template is inside figure brackets - **{ };**  
- **Arithmetic <int> ar(10,5);** - Set class for template. If you write <float> everywhere **T** will be changes to data type **float**  


