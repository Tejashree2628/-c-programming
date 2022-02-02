//singly circular linkedlist

#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct  node
{
 int data;
 struct  node *next;
}NODE,*PNODE;
class SinglyCL
{
 private :
    PNODE first;
    PNODE last;
    int size;
  public :
 SinglyCL();
 void Display();
 int Count();
 void InsertFirst(int);
 void InsertLast(int);
void InsertATPos(int,int pos);
void DeleteFirst();
void DeleteLast();
void DeleteATPos(int pos);

};
 SinglyCL :: SinglyCL()
  {
    first=NULL;
    last=NULL;
    size=0;
  }

 void SinglyCL ::Display()
{
  PNODE temp=first;
  if((first==NULL) && (last ==NULL))
  {
    return;
  }
  else
  do
  {
    cout<<"|"<<temp->data<<"|->";
    temp=temp->next;
  }while (temp != last->next);
  cout<<"null";
  cout<<"\n";
}

int SinglyCL ::Count()
{
  return size;
}

void SinglyCL ::InsertFirst(int no)
{
  PNODE newn=new NODE;
  newn->data=no;
  newn->next=NULL;
 if((first==NULL) && (last == NULL))
 {
   first=newn;
   last=newn;
 }
 else
 {
   newn->next=first;
   first=newn;
 }
   last->next=first;
   size++;
}

void SinglyCL ::InsertLast(int no)
{
 PNODE newn=new NODE;
  newn->data=no;
  newn->next=NULL;
 if((first==NULL) && (last == NULL))
 {
   first=newn;
   last=newn;
 }
 else
 {
   last->next=newn;
   last=newn;
 }
   last->next=first;
   size++;

}

void SinglyCL ::InsertATPos(int no,int pos)
{
  int i=0;
  PNODE temp=first;
  if((pos<1) && (pos>size+1))
  {
    cout<<"enter correct position";
    return;
  }
  if(pos==1)
  {
    InsertFirst(no);
  }
  else if(pos==size+1)
  {
    InsertLast(no);
  }
  else
  {
    PNODE newn=new NODE;
    newn->data=no;
    newn->next=NULL;
    for(i=1;i<pos-1;i++)
     {
       temp=temp->next;   
     }
     newn->next=temp->next;
     temp->next=newn;
     size++;
  }

}
void SinglyCL ::DeleteFirst()
{
  if((first==NULL) && (last ==NULL))
  {
    return;
  }
  else if(first==last)
  {
    free(first);
    first=NULL;
    last=NULL;
  }
  else
  {
    first=first->next;
    delete(last->next);
    last->next=first;
  }
   size--;
}

void SinglyCL ::DeleteLast()
{
  PNODE temp=first;
  if((first==NULL) && (last ==NULL))
  {
    return;
  }
  else if(first==last)
  {
    free(first);
    first=NULL;
    last=NULL;
  }
  else
  {
    while(temp->next!=last)
    {
      temp=temp->next;
    }
    delete(last);
    last=temp;
    last->next=first;
  }
   size--;
}
void SinglyCL ::DeleteATPos(int pos)
{
  int i=0;
  PNODE temp=first;
    PNODE targeted=NULL;
  if((pos<1) && (pos>size))
  {
    cout<<"enter correct position";
    return;
  }
  if(pos==1)
  {
    DeleteFirst();
  }
  else if(pos==size)
  {
    DeleteLast();
  }
  else
  {
    for(i=1;i<pos-1;i++)
     {
       temp=temp->next;   
     }
     targeted=temp->next;
     temp->next=temp->next->next;
     delete(targeted);
     size--;
  }

}

int main()
{
  SinglyCL obj;
  int iret=0;
  obj.InsertFirst(51);
  obj.InsertFirst(21);
    obj.InsertFirst(11);

  obj.InsertLast(101);

obj.InsertATPos(55,4);

  obj.Display();

  iret=obj.Count();
  cout<<"\nnumber of element is\t"<<iret<<"\n";

  obj.DeleteATPos(4);
  obj.DeleteFirst();
  obj.DeleteLast();

 obj.Display();
  return 0;
}