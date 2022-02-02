#include<iostream>

using namespace std;
typedef unsigned int UINT;

UINT ONRange(UINT iNo,int iMin,int iMax)
{
    if((iMin<1)||(iMax>32) || (iMax<iMin))
    {
        cout<<"enter correct position";
        return 0;
    }
return (iNo | ((0xffffffff<<(iMin-1)) && (0xffffffff>>(32-iMax))));

}

int main()
{
  UINT iValue=0,iRet=0,iBit1=0,iBit2=0;  
  cout<<"enter the number\n";
    cin>>iValue;
  
  cout<<"enter the minimum range\n";
  cin>>iBit1;
  cout<<"enter the maximum range\n";
  cin>>iBit2;
  
  iRet=ONRange(iValue,iBit1,iBit2);

cout<<"updated number is:"<<iRet<<"\n";
 return 0;
}