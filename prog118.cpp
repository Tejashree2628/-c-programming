#include<iostream>

using namespace std;
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo,int iPos1,int iPos2)
{
    if((iPos1<1)||(iPos1>32) || (iPos2<1)||(iPos2>32))
    {
        cout<<"enter correct position";
        return 0;
    }
    uint iMask1=0,iMask2=0,iAns=0;
  iMask1=0x00000001;
   iMask2=0x00000001;
  iMask1=iMask1<<(iPos1-1);
  iMask2=iMask2<<(iPos2-1);
  iMask1=iMask1|iMask2;
  iAns=iNo^iMask1;
return iAns;

}

int main()
{
  int iValue=0,iRet=0,iBit1=0,iBit2=0;  
  cout<<"enter the number\n";
    cin>>iValue;
  
  cout<<"enter the position of bit\n";
  cin>>iBit1;
  cout<<"enter the position of bit\n";
  cin>>iBit2;
  
  iRet=ToggleBit(iValue,iBit1,iBit2);

cout<<"updated number is:"<<iRet<<"\n";
 return 0;
}