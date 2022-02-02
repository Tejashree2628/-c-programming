// linked list using recursion
 #include<iostream>
#include<stdlib.h>
using namespace std;

template <typename T>
struct node1
{
    T data;
    struct node1 * next;
};
 template<class T>
class SinglyLL
{
   private:
    node1<T> * first;
     int size;
      public:
      void InsertFirst(T);
      void Display();
      int Count();
};
template<class T>
    void SinglyLL<T> :: InsertFirst(T No)
    {
    node1<T> * newn=new  node1<T>;
      
      newn->data=No;
      newn->next=NULL;

      if(first==NULL)
      {
          first=newn;
      }
      else
      {
          newn->next=first;
          first=newn;
      }
      size++;
    }


     template<class T>
    void SinglyLL<T> :: Display()
    {
        if(first!=NULL)
        
       {
           static node1<T>  * temp =first;

              if(temp!=NULL)
             {
                 cout<<"|"<<temp->data<<"|->";
                 temp=temp->next;
                 Display();
              }
       }
       
    }



     template<class T>
    int SinglyLL<T> :: Count()
    {
       return size;
    }

int main()
{
   int ans=0;
  SinglyLL <int>obj;
  obj.InsertFirst(101);
  obj.InsertFirst(51);
  obj.InsertFirst(11);

  obj.Display();
  ans=obj.Count();
  cout<<"count is"<<ans;
  return 0;
}