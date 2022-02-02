#include<iostream>

using namespace std;

template <class T>
T Max(T x,T y)
{

if(x>y)
{ return x; }

else
{ return y; }

}

int main()
{
 int i=10,j=10,Ans=0;
 double a=3.10,b=6.10,dRet=0;
 Ans=Max(i,j);
 cout<<"Max is"<<Ans<<"\n";

Ans=Max(a,b);
cout<<"Max is"<<Ans<<"\n";

}