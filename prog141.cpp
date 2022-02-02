

#include<iostream>
using namespace  std;

void swap(char *p,char *q)
{
 char temp='\0';
 temp=*p;
 *p=*q;
 *q=temp;
 
}
int main()
{
 char x='\0',y='\0';
 cout<<"enter first number\n";
 cin>>x;
  cout<<"enter second number\n";
 cin>>y;

swap(&x,&y);
cout<<"value of x:"<<x<<"\n";
cout<<"value of y:"<<y<<"\n";

  return 0;
}