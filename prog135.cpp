// stack

#include<iostream>
using namespace std;

typedef struct  node
{
 int data;
 struct  node *next;
}NODE,*PNODE;

class stack
{
  private:
  PNODE first;
  int size;
  public:
  stack()
  {
    first=NULL;
    size=0;
  }
  void push(int no) //insertfirst
  {
    PNODE newn=new NODE;
    newn->data=no;
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
  int pop() // deletefirst
  {
    PNODE temp=NULL;
    int data=0;
    if(first==NULL)  //(size == 0)
    {
      cout<<"stack is empty";
       return -1;
    }
    if(first->next==NULL)  //(size==1)
    {
      data=first->data;
      delete first;
      first=NULL;
    }
    else
    {
      temp=first;
      data=first->data;
      first=first->next;
      delete temp;
    }
    size--;
    return data;
  }
  void display()
  {
    PNODE temp=first;
    while(temp!=NULL)
    {
      cout<<"|"<<temp->data<<"|\t";
      temp=temp->next;
    }
  }
  int count()
  {
    return size;
  }
};
int main()
{
  stack s;
  int ichoice=1,data,ans=0;
  cout<<"\n1:push element in stack\n";
  cout<<"\n2:pop element in stack\n";
  cout<<"\n3:display stack\n";
  cout<<"\n4:count the element in stack\n";
  cout<<"\n0:exit\n";
while(ichoice!=0)
{
    cout<<"\nenter the choice:\t";
    cin>>ichoice;

switch (ichoice)
{
case 1:
        cout<<"\nenter the element for push:\t";
        cin>>data;
        s.push(data);
        break;
  case 2:
         ans=s.pop();
         cout<<"poped element is:\t"<<ans<<"\n";
         break;
  case 3:
        s.display();
        break;
  case 4:
        ans=s.count();
        cout<<"\ncount is:\t"<<ans;
        break;
  case 0:
         exit(0);
  default:
        cout<<"\nenter correct choice";
        break;
}
}


  return 0;
}