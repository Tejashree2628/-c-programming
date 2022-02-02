//recursive function

#include<iostream>
#include<stdio.h>

using namespace std;

int length(char *str)
{
   static int icnt=0;
   if(*str!='\0')
   {
      icnt++;
      str++;
      length(str);
   }
   return icnt;

}



int main()
{
int ans=0;
char arr[20];
cout<<"enter string";
scanf("%[^'\n']s",arr);

ans=length(arr);
cout<<"length is"<<ans;


return 0;
}