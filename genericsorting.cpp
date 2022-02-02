#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

template <typename T>
 class Arrayx
{

  public:
  T *arr;
  int size;
     Arrayx(int);
  void display();
   void accept();
};

template <typename T>
class Sorting
{
   private:
   T *arr;
   int size;
   public:
   Sorting(T *,int);
   void bubblesort();
   void SelectionSort();
   void InsertionSort();
   
};

template <typename T>
class Searching
{
   private:
   T *arr;
   int size;
   public:
   Searching(T *,int);
   int LinearSearch(T no);
   int BinarySearch(T no);   
};

template <class T>
Arrayx<T>::Arrayx(int length)
{
  this->size=length;
  arr=new T[size];
}


template <class T>
void Arrayx<T>::display()
{
  int k=0;
  cout<<"data:\t";
      for(k=0;k<size;k++)
       {
         cout<<"\t"<<arr[k];
       }
       cout<<"\n";
}

template <class T>
void Arrayx<T>::accept()
{
  int k=0;
  cout<<"enter the element";
      for(k=0;k<size;k++)
       {
         cin>>arr[k];
       }
}

template <class T>
Sorting<T>::Sorting(T *a,int s)
{
  this->arr=a;
  this->size=s;
}

template <class T>
  void Sorting<T>::bubblesort()
   {
     bool flag=false;
     T temp;    
     for(int i=0;i<size;i++)
     {
       flag=false;
     
      for(int j=0;j<size-1;j++)
      {
         if(arr[j]>arr[j+1])
         {
           flag=true;
           temp=arr[j];
           arr[j]=arr[j+1];
           arr[j+1]=temp;
         }
      }
      if(flag==false)
      break;
      
    }
   }

   template <class T>
  void Sorting<T>::SelectionSort()
  {
     int i=0,j=0,minindex=0,temp=0;
     for(i=0;i<size;i++)
     {
       minindex=i;
       for(j=i;j<size-1;j++)
       {
         if(arr[minindex]>arr[j])
         {
         minindex=j;
         }
      }
        temp=arr[i];
        arr[i]=arr[minindex];
        arr[minindex]=temp;
     }
  }

  template <class T1>
 void  Sorting<T1>::InsertionSort()
  {
     int i=0,j=0,key=0;
     for(i=0;i<size;i++)
     {
       key=arr[i];
       for(j=i-1;(j>=0) && (arr[j]>key);j--)
       {
          arr[j+1]=arr[j];
       }
       arr[j+1]=key;
     }
  }


template<class T>
Searching<T>::Searching(T *a,int s)
{
   this->arr=a;
   this->size=s;
}
template<class T>
int Searching<T>::LinearSearch(T no)
{
   int k=0,pos=1;
      for(k=0;k<size;k++)
       {
         if(arr[k]==no)
         break;
         pos++;
       }
       if(pos>size)
       {
         return -1;
       }
       else
       {
         return pos;
       }

}
template<class T>
int Searching<T>::BinarySearch(T no)
{
   
   int start,end,mid;
     start=0;
     end=size-1;
     mid=(start+end)/2;

     while(start<=end)
     {
       if(arr[mid]==no)
       {
         break;
       }
       else if(no>arr[mid])
       {
          start=mid+1;
       }
       else if(no<arr[mid])
       {
         end=mid-1;
       }
       mid=(start+end)/2;
     }
     if(arr[mid]==no)
     {
       return mid+1;
     }
     else
     {
       return -1;
     }
   
}

int main()
{
  int size=0,iret=0;
  char ch;
  cout<<"enter the size of array";
  cin>>size;
   Arrayx <char>obj(size);
 
 obj.accept();
 obj.display();
 Sorting<char>obj1(obj.arr,size);
 /*obj1.bubblesort();
 obj.display();
 obj1.SelectionSort();
 obj.display();
 obj1.InsertionSort();
 obj.display();*/
 Searching<char>obj2(obj.arr,size);
  cout<<"enter the element to search";
  cin>>ch;
 iret=obj2.LinearSearch(ch);
 if(iret==-1)
 {
   cout<<"not found\n";
 }
 else
 {
  cout<<"found at  "<<iret<<"  postition\n";
 }

 iret=obj2.BinarySearch(ch);
 if(iret==-1)
 {
   cout<<"not found\n";
 }
 else
 {
  cout<<"found at  "<<iret<<"  postition\n";
 }
  return 0;
}