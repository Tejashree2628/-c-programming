//recursive function

#include<iostream>
#include<stdio.h>

using namespace std;

int countcap(char *str)
{
   static int icnt=0;
   if (*str!='\0')
   {
   if((*str>='A') && (*str<='Z'))
   {
      icnt++;
   }
     str++;
     countcap(str);
   }

   return icnt;

}



int main()
{
int ans=0;
char arr[20];
cout<<"enter string";
scanf("%[^'\n']s",arr);

ans=countcap(arr);
cout<<"number of capital is is"<<ans<<"\n";


return 0;
}