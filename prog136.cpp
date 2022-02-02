// queue

#include<iostream>
using namespace std;

typedef struct  node
{
 int data;
 struct  node *next;
}NODE,*PNODE;

class queue
{
  private:
  PNODE first;
  int size;
  public:
  queue()
  {
    first=NULL;
    size=0;
  }
  void Enqueue(int no) //insertLast
  {
    PNODE newn=new NODE;
    PNODE temp=first;
    newn->data=no;
    newn->next=NULL;
    if(first==NULL)   //(size==0)
    {
      first=newn;
    }
    else
    {
      while(temp->next!=NULL)
      {
        temp=temp->next;
      }
      temp->next=newn;

    }
    size++;

  }
  int Dequeue() // deletefirst
  {
    PNODE temp=NULL;
    int data=0;
    if(first==NULL)
    {
      cout<<"queue is empty";
       return 0;
    }
    else if(first->next==NULL)
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
queue q;
  int ichoice=1,data,ans=0;
  cout<<"\n1:insert element in queue\n";
  cout<<"\n2:delete element in queue\n";
  cout<<"\n3:display queue\n";
  cout<<"\n4:count the element in queue\n";
  cout<<"\n0:exit\n";
while(ichoice!=0)
{
    cout<<"\nenter the choice:\t";
    cin>>ichoice;

switch (ichoice)
{
case 1:
        cout<<"\nenter the element for insert:\t";
        cin>>data;
        q.Enqueue(data);
        break;
  case 2:
         ans=q.Dequeue();
         cout<<"deleted element is:\t"<<ans<<"\n";
         break;
  case 3:
        q.display();
        break;
  case 4:
        ans=q.count();
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