#include<iostream>

using namespace std;
typedef unsigned int UINT;

void DisplayByte(UINT iNo)
{
  UINT byte1=iNo & 0x000000ff;
  UINT byte2=iNo & 0x0000ff00;
  byte2=byte2>>8;
  UINT byte3=iNo & 0x00ff0000;
  byte3=byte3>>16;
    UINT byte4=iNo & 0xff000000;
  byte4=byte4>>24;
  cout<<"byte1="<<byte1<<"\n";
  cout<<"byte2="<<byte2<<"\n";
  cout<<"byte3="<<byte3<<"\n";
  cout<<"byte4="<<byte4<<"\n";

}


int main()
{
  UINT iValue=0;
  cout<<"enter the number\n";
    cin>>iValue;
  DisplayByte(iValue);

 return 0;
}