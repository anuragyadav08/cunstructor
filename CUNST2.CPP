//cunstructor overloading
#include<iostream.h>
#include<conio.h>
class A
{
  int x,y;
public:
  A(){x=0;}
  A(int a)
  {
  x=a;
  cout<<"Value "<<x<<endl;
  }
  A(int m,int n)
  {
   x=m;
   y=n;
   cout<<"Values "<<x<<" & "<<y<<endl;
  }
};
void main()
{
 clrscr();
 A obj(10);
 A obj1(20,25);
 getch();
}