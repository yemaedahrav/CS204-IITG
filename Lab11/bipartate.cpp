#include<bits/stdc++.h>

using namespace std;


int colouring(vector<vector<int>> graph, set<int> &vertices,int first, int size)
    { 
      vector<int> colour(size+1,0);
      vector<int> visited(size+1,0);

      queue<int> nodes;
      nodes.push(first);
      visited[first]=1;


      int frontq;
      int pickcolour = 1;
      colour[first] = pickcolour;

      int bipartate = 1;

     while(!(nodes.empty()))
          {     frontq=nodes.front();
		nodes.pop();
		visited[frontq]=1;
		vertices.erase(frontq);
		pickcolour=colour[frontq];

              for(int i=0;i<graph[frontq].size();i++)
                 {    
                     if(colour[graph[frontq][i]]==pickcolour)
                        {
				bipartate = 0;
                                return bipartate;
				break;
			}
			if(visited[graph[frontq][i]]==0)
                        {
				nodes.push(graph[frontq][i]);
				
				colour[graph[frontq][i]]=3-pickcolour;
         		}
                 }

		if(!bipartate)
                {      
			break;
		}
		
          }
 
    bipartate = 1;
    return bipartate;

      }


int main()
{  
   int m,n;
   cin>>m>>n;

   vector<vector<int>> adj;
   adj.resize(n+1, vector<int>(0));
   set<int> nodes;

  
   for(int i=0;i<m;i++)
      { 
        int v1,v2;
        cin>>v1>>v2;

        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
        nodes.insert(v1);
        nodes.insert(v2);
      
      }


     int flag=1;
	while(nodes.size()!=0)
             {
                int answer = colouring(adj,nodes,*nodes.begin(),n);        
      		if(answer==0)
                  {
			cout<<"NO"<<endl;
			flag=0;
			break;
		  }
	     }
     if(flag==1) cout<<"YES"<<endl;
   
   return 0;

}
