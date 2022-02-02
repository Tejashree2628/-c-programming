//Doubly circular linkedlist

#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct  node
{
 int data;
 struct  node *next;
 struct  node *prev;
}NODE,*PNODE;
class DoublyCL
{
 private :
    PNODE first;
    PNODE last;
    int size;
  public :
  DoublyCL()
  {
    first=NULL;
    last=NULL;
    size=0;
  }

void Display();
int Count();
void InsertFirst(int no);
void InsertLast(int no);
void InsertATPos(int no,int pos);
void DeleteFirst();
void DeleteLast();
void DeleteATPos(int pos);
}; 
void DoublyCL::Display()
{
  PNODE temp=first;
   if((first== NULL)  &&   (last==NULL))
   {
     return;
   }
   do
   {
     cout<<"|"<<temp->data<<"|->";
    temp=temp->next;
   } while (temp!=last->next);
   cout<<"null";
   cout<<"\n";
}

int DoublyCL :: Count()
{
  return size;
}
void DoublyCL::InsertFirst(int no)
{
 PNODE newn=new NODE;
 newn->data=no;
 newn->next=NULL;
 newn->prev=NULL;
 if((first== NULL)  &&   (last==NULL))
   {
     first=newn;
     last=newn;
   }
   else
   {
     newn->next=first;
     first->prev=newn;
     first=newn;
   }
   last->next=first;
   first->prev=last;
   size++;
}

void DoublyCL::InsertLast(int no)
{
 PNODE newn=new NODE;
 newn->data=no;
 newn->next=NULL;
 newn->prev=NULL;
 if((first== NULL)  &&   (last==NULL))
   {
     first=newn;
     last=newn;
   }
   else
   {
     last->next=newn;
     newn->prev=last;
     last=newn;   
   }
   last->next=first;
   first->prev=last;
   size++;
}

void DoublyCL::InsertATPos(int no,int pos)
{
 PNODE newn=new NODE;
 PNODE temp=first;
 newn->data=no;
 newn->next=NULL;
 newn->prev=NULL;
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
     for(int i=1;i<pos-1;i++)
     {
       temp=temp->next;
     }
     newn->next=temp->next;
     temp->next->prev=newn;
     temp->next=newn;
     newn->prev=temp;
     size++;
   }
}

void DoublyCL :: DeleteFirst()
{
  if(first==NULL && last==NULL)
  {
    return;
  }
  else if(first==last)
  {
   delete first;
    first=NULL;
    last=NULL;
  }
  else
  {
    first=first->next;
    delete first->prev;
    first->prev=last;
    last->next=first;
  }
    size--;
}
void DoublyCL :: DeleteLast()
{
  if(first==NULL && last==NULL)
  {
    return;
  }
  else if(first==last)
  {
    delete first;
    first=NULL;
    last=NULL;
  }
  else
  {
    last=last->prev;
    delete last->next;
    first->prev=last;
    last->next=first;
  }
    size--;
}
void DoublyCL::DeleteATPos(int pos)
{
 PNODE temp=first;
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
     for(int i=1;i<pos-1;i++)
     {
       temp=temp->next;
     }
       temp->next=temp->next->next;
       delete(temp->next->prev);
       temp->next->prev=temp;

       size--;     
   }
}

int main()
{
  DoublyCL obj;
  int iRet=0,ichoice=1,ipos=0,ivalue=0;

    while(ichoice!=0)
    {
        cout<<"\n********************************************\n";
        cout<<"0 : Terminate the application \n";
        cout<<"1 : Insert the Node at first position \n";
        cout<<"2 : Insert the node at last position \n";
        cout<<"3 : Insert the node at desired position \n";
        cout<<"4 : Delete the first node\n";
        cout<<"5 : Delete the last node\n";
        cout<<"6 : Delete the node at desired position \n";
        cout<<"7 : Display the linkedlist \n";
        cout<<"8 : Count the nodes int the linked list \n";
        cin>>ichoice;
        cout<<"\n********************************************\n";



        switch(ichoice)
        {

            case 0 : 
                    cout<<"Thank You for using th linked list\n";
                    break;

            case 1 : 
                    cout<<"enter data to insert into the node\n";
                    cin>>ivalue;
                    obj.InsertFirst(ivalue);
                    break;

            case 2 : 
                    cout<<"enter data to insert into the node\n";
                    cin>>ivalue;
                    obj.InsertLast(ivalue);
                    break;

            case 3 : 
                    cout<<"enter data to insert into the node\n";
                    cin>>ivalue;
                    cout<<"enter the poistion \n";
                    cin>>ipos;
                    obj.InsertATPos(ivalue,ipos);
                    break;                       

            case 4 : 
                    obj.DeleteFirst();
                    break;

            case 5 : 
                    obj.DeleteLast();
                    break;   

            case 6 : 
                    cout<<"Insert the position \n";
                    cin>>ipos;
                    obj.DeleteATPos(ipos);
                    break;    

            case 7 : 
                    obj.Display();
                    break;     

            case 8 : 
                    iRet = obj.Count();
                    cout<<"Number of nodes in Linkedlist : "<<iRet<<"\n";
                    break;                    

            default : 
                 printf("wrong choice\n");
                  break;     

        }
    }



  return 0;
}