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

<a>Pointers</a>
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
<a>Functions</a>
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
## Terminology of fuction

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
An *add* function can't access variables of *main* fuction, and *main* function can't access the variables of *add* fuction!  
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
- swap(**&**a,**&**b) - should be an addreses of 'a' and 'b'.  
- void swap (int **\***x, int **\***y) - must be a pointers. (*Also, see the code section.*)  

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

