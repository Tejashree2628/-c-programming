#include<iostream>
using namespace std;


int Sum(int arr[],int size)
{
   static int sum=0,i=0;
   if(i<size)
   {
    sum=sum+arr[i];
    i++;
    Sum(arr,size);
   }
   return sum;
}
int main()
{
 int length=0,i=0,ans=0;
 int *p=NULL;

 cout<<"enter number of element\t";
 cin>>length;

 p=new int[length];

cout<<"enter the element\n";

for(i=0;i<length;i++)
{
   cin>>p[i];
}

ans=Sum(p,length);
cout<<"addition is"<<ans<<"\n";

delete[]p;
return 0;
}