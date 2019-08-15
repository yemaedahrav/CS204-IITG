#include<iostream>
#include<cmath>
#include<cstdlib>
#include <bits/stdc++.h>

using namespace std;

struct node{
int a,b;
struct node* ptr;
};

struct node* start;
  
void AddFirst( int x,int y )
{  
   node* newnode = (node*) malloc(sizeof(struct node));
   newnode->a=x;
   newnode->b=y;
   newnode->ptr= (start);
   (start)=newnode;
}


void DelFirst()
{
    struct node* temp = start; 
    if(start==NULL)
    {cout<<-1<<'\n';
     return; }
    if(start!=NULL)
    start = start->ptr; 
    free(temp);
} 

void search(int x,int y)  
{  
    node* current = start;
   
    while (current != NULL)  
    {   int p,q;
        p=current->a;
        q=current->b;
        if (p == x && q == y) 
           {cout<<"True:The given point exists \n";
            break;
           }
        current = current->ptr;
    }  
    if(current==NULL) 
    cout<<"False:The required point doesn't exist \n";
}  

void deleteNode(int x,int y) 
{  
   node* current;

   if(current == NULL) 
   {
    return; 
   }
   
   
   node* prev =NULL;
   current = start;
  
    while (current != NULL)  
    {   int p,q;
        p=current->a;
        q=current->b;
        if(p==x && q==y)
        {
        if(prev==NULL)
        { DelFirst();}
        else
        {prev->ptr=current->ptr;
        free(current);
        }
        break;
        }
                prev=current;
		current=current->ptr;
     }

        if(current==NULL)
         {
           cout<<-1<<'\n';
         }	

 cout<<"Node does not exist or cannot be deleted \n";
return;
}

int length()
{   int count = 0;
    node* current = start;
    while (current != NULL)  
    {   count++;  
        current = current->ptr;  
    }  
    return count;
}

void distance(int d)
{   node* current = start;
    int counter = 0;

    while (current != NULL)  
    {   int p,q;
        
        p=current->a;
        q=current->b;
        if ((p*p+q*q) <= d*d) 
        {cout<<"A point satisfying the condition is: \n"<<"("<<p<<","<<q<<")"<<"\n";
         counter++;
         current = current->ptr;
        }
    } 

   if(counter==0)
        { cout<<"No such point exists \n";}
        else
        { cout<<"Number of points in the given distance is:"<<counter<<"\n"; }
} 


int main()
{ 
  start=NULL;

  cout<<"Enter the number of times you want to test:\n";

  int testcase;
  cin>>testcase;
  
  int func;
  

  while(testcase)
 {
  cin>>func;

  if(func==1) 
  {  int m,n;
     cin>>m>>n;
     AddFirst(m,n) ;
  }

  else if(func==2) 
  {DelFirst() ;}

  else if(func==3)
  {  int m,n;
     cin>>m>>n;
     deleteNode(m,n);
  }

  else if(func==4)
  {  int d;
     cin>>d;
     distance(d);
  }

  else if(func==5)
  {  int m,n;
     cin>>m>>n;
     search(m,n);
  }

  else
  { int l;
    l=length();
  cout<<"The length of the LinkedList is:"<<l<<"\n"<<endl;
  }

  testcase--;
  }

return 0;

}


