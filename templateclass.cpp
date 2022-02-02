#include<iostream>

using namespace std;

template <class T>
class Array
{
  public:
  T *Arr;
  int size;
  Array(int);
  ~Array();
  void Accept();
  void display();
  T Maximum();
};

template <class T>
Array<T> :: Array(int Length)
  {
            size=Length;
            Arr=new T[size];
  }

template <class T>
 Array<T> :: ~Array()
  {
            delete []Arr;
  }

template <class T>
void Array<T> :: Accept()
  {
         int i;
            cout<<"enter the element";
            for(i=0;i<size;i++)
            {
                      cin>>Arr[i];
            }
  }

  template <class T>
 void Array<T> :: display()
  {
          int i;
            cout<<"element are";
            for(i=0;i<size;i++)
            {
                      cout<<Arr[i]<<"\n";
            }
  }

template <class T>
T Array<T> :: Maximum()
  {
         int i;
            T max=Arr[0];
            for(i=0;i<size;i++)
            {
                      if(Arr[i]>max)
                      {
                        max=Arr[i];
                      }
            }
            return max;

  }


int main()
{
  Array <int>obj(5);
  obj.Accept();
  obj.display();
  int ians=obj.Maximum();
  cout<<"max is"<<ians<<"\n";

  Array <char>obj2(5);
  obj2.Accept();
  obj2.display();
  char cans=obj2.Maximum();
  cout<<"max is"<<cans<<"\n";
return 0;
}