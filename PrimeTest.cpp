#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{ long long int n,sqr;
  while(1)
  {cout<<"Enter the number to be checked \n";
   cin>>n;
   if(n==0) break;
   sqr=sqrtl(n);
  
  int i,k;
  k=0;
  for(i=2;i<=sqr;i++)
  { if(n%i==0) 
    {cout<<"The number is not prime \n";
    k+=1;
    break;
    }
  }
  

if(k==0) cout<<"The number is prime \n";
 }
     

return 0;
