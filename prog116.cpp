#include<iostream>

using namespace std;
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo,int iPos)
{
    if((iPos<1)||(iPos>32))
    {
        cout<<"enter correct position";
        return 0;
    }
    uint iMask=0,iAns=0;
  iMask=0x00000001;
  iMask=iMask<<(iPos-1);
  iAns=iNo^iMask;

return iAns;

}

int main()
{
  int iValue=0,iRet=0,iBit=0;  
  cout<<"enter the number\n";
    cin>>iValue;
  
  cout<<"enter the position of bit\n";
  cin>>iBit;
  
  iRet=ToggleBit(iValue,iBit);

cout<<"updated number is:"<<iRet<<"\n";
 return 0;
}