//generic programming

#include<iostream>
using namespace  std;

template <class T>
void swap(T *p,T *q)
{
 T temp;
 temp=*p;
 *p=*q;
 *q=temp;
 
}
int main()
{
 char x='A',y='Z';

swap(&x,&y);
cout<<"value of x:"<<x<<"\n";
cout<<"value of y:"<<y<<"\n";
  return 0;
}