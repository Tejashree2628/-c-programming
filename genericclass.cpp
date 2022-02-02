#include<iostream>

using namespace std;

class Array
{
  public:
  int *Arr;
  int size,i;
  Array(int);
  ~Array();
  void Accept();
  void display();
};
Array :: Array(int Length=10)
  {
            size=Length;
            Arr=new int[size];
  }

 Array :: ~Array()
  {
            delete []Arr;
  }

void Array :: Accept()
  {
            cout<<"enter the element";
            for(i=0;i<size;i++)
            {
                      cin>>Arr[i];
            }
  }
 void Array :: display()
  {
            cout<<"element are";
            for(i=0;i<size;i++)
            {
                      cout<<Arr[i]<<"\n";
            }
  }



int main()
{
  Array obj(5);
  obj.Accept();
  obj.display();

return 0;
}