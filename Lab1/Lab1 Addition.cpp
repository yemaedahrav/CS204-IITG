#include <bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
int count;
cin>>count;
    
while(count--)
{
string a,b,sum;
char carry;
cin>>a>>b;
reverse(a.begin(),a.end());
reverse(b.begin(),b.end());
int x,y;
x=max(a.length(),b.length());
y=min(a.length(),b.length());

int p,q;
int rem=0;
for(int i=0;i<x;i++){
    if(i<y){
        p=a[i]-'0';
        q=b[i]-'0';
        carry=('0'+((p+q+rem)%10));
        sum=sum+carry;
        rem=(p+q+rem)/10;
    }else{
        if(a.length()==x){
            p=a[i]-'0';
        }else{
            p=b[i]-'0';
        }
        carrry=('0'+((p+rem)%10));
        sum=sum+carry;
        rem=(p+rem)/10;
    }
}
if(rem==1){
    sum=sum+'1';
}
reverse(sum.begin(),sum.end());
cout<<sum<<endl;
}
    
return 0;
}

    
