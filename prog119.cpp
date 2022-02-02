#include<iostream>

using namespace std;
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    uint iMask=0,iAns=0;
  iMask=0xf000000f;
  iAns=iNo^iMask;
return iAns;

}

int main()
{
UINT iValue=0,iRet=0;  
  
cout<<"enter the number\n";
cin>>iValue;

iRet=ToggleBit(iValue);

cout<<"updated number is:"<<iRet<<"\n";
 
return 0;
}