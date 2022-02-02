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
 int x=0,y=0;
 cout<<"enter first number\n";
 cin>>x;
  cout<<"enter second number\n";
 cin>>y;

swap(&x,&y);
cout<<"value of x:"<<x<<"\n";
cout<<"value of y:"<<y<<"\n";

  return 0;
}