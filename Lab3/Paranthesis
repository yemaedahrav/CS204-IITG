#include<bits/stdc++.h> 
#include<iostream>
#include<string>
#include<cmath>

using namespace std; 
  
bool Matching(string ex) 
{ 
    stack<char> s; 
    char x;  
    int n;
    n=ex.length();

    
    for (int i=0; i<n; i++) 
    { 
        if (ex[i]=='('||ex[i]=='['||ex[i]=='{'||ex[i]=='<') 
        {   
            s.push(ex[i]); 
            continue; 
        } 

        if(ex[i]=='|')
        { if(s.empty())
	  {
            s.push(ex[i]);
	    continue;
          }
	  else
	{
	  x=s.top();
	  if(x==ex[i])
	  {
	   s.pop();
	  }
	  else
	  {
	    s.push(ex[i]);
	  }
	}
			
          continue;
        }
  
        if (s.empty()) 
           return false; 

  
        switch (ex[i]) 
        { 
        case ')': 
  
            x = s.top(); 
            s.pop(); 
            if (x=='{' || x=='['||x=='<') 
                return false; 
            break; 
  
        case '}': 
  
            
            x = s.top(); 
            s.pop(); 
            if (x=='(' || x=='['||x=='<') 
                return false; 
            break; 
  
        case ']': 
  
           
            x = s.top(); 
            s.pop(); 
            if (x =='(' || x == '{'||x=='<') 
                return false; 
            break; 

        case '>': 
  
           
            x = s.top(); 
            s.pop(); 
            if (x =='(' || x == '{'||x=='[') 
                return false; 
            break; 
        } 
    } 
  
    return (s.empty()); 
} 
  

int main() 
{   
    int tc;
    cout<<"Enter the number of testcases\n";
    cin>>tc;
   
    while(tc)
    { 
    cout<<"Enter the Expression\n";

    string str;
    cin>>str;

    if(Matching(str)==true) 
        cout << "YES\n"; 
    else
        cout << "NO\n"; 
    tc--;

    }

    return 0; 
} 
