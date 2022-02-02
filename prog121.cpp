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
    int i=0;
    uint iMask1=0,iAns=iNo;
 
 //-------------------------------------------------------------//

//fisrt option 


  iMask1=0x00000001;
  iMask1=iMask1<<(iMin-1);
  for(i=iMin;i<=iMax;i++)
  {
  iAns=iAns|iMask1;
  iMask1=iMask1<<1;
  }


//-----------------------------------------------------------------//


// second option


/*

UINT imask1=0xffffffff,imask2=0xffffffff,imask=0;
imask1=imask1<<(min-1);
imask2=imask2>>(32-max);
imask=imask1&imask2;
ians=imask|iNo;

*/

//--------------------------------------------------------------------//
return iAns;

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