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
