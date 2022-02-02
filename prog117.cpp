#include<iostream>

using namespace std;
typedef unsigned int UINT;

UINT CountBit(UINT iNo)
{
    uint iMask=0,iAns=0,icnt=0,i=0;
  iMask=0x00000001;
  for(i=1;i<32;i++)
  {
  iAns=iNo&iMask;
  if(iAns==iMask)    //if(iAns!=0)
  {
    icnt++;
  }
  iMask=iMask<<1;
  } 
return icnt;

}

int main()
{
  int iValue=0,iRet=0;  
  cout<<"enter the number\n";
    cin>>iValue;
  
  iRet=CountBit(iValue);

cout<<"count of 1 bit is:"<<iRet<<"\n";
 return 0;
}