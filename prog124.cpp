#include<iostream>

using namespace std;
typedef unsigned int UINT;

UINT SwapByte(UINT iNo)
{
  UINT iMask=0x00ffff00;
  UINT iTemp=iNo&iMask;
  
  UINT byte1=iNo<<24;
  UINT byte4=iNo>>24;
 
 UINT iResult=iTemp | byte1 | byte4;

}


int main()
{
  UINT iValue=0,iRet=0;
  cout<<"enter the number\n";
    cin>>iValue;

  iRet=SwapByte(iValue);
cout<<"updated number is"<<iRet<<"\n";
 return 0;
}