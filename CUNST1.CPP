#include<iostream.h>
#include<conio.h>
class A
{
  int x;
public:
  A(){x=0;}
  A(int a)
  {
  x=a;
  cout<<"Value "<<x;
  }
};
void main()
{
 clrscr();
 A obj(10);
 getch();
}