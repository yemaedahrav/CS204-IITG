#include<stdio.h>
#include<cmath>
#include<iostream>
#include<bits/stdc++.h>
#include<string>

using namespace std;

int comparison(string a,string b)
    { string ab = a.append(b);
      string ba = b.append(a);
      return ab.compare(ba) > 0 ? 1: 0;
    }

string concatenate(vector <string> inp)
    { sort(inp.begin(),inp.end(), comparison);
  
      string oup ="";
      for(int i=0;i<inp.size();i++)
         { oup+=inp[i];}

      return oup;

    }


int main()
{  long long int tc;
   cin>>tc;
   string output[tc];

  for(int j=0;j<tc;j++)
       {    long long int q;
            cin>>q; 
            vector <string> inp;
            
            for(int k=0;k<q;k++)
               {  
                  string str;
                  cin>>str;
                  inp.push_back(str);
                  
               }
        
            output[j] = concatenate(inp);
        
       }

 for(int j=0;j<tc;j++)
    { cout<<output[j]<<"\n"<<endl; }

return 0;

}
