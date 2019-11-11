#include <bits/stdc++.h> 

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

      int possible = 1;

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
				possible = 0;
                                return 0;
				break;
			}
			if(visited[graph[frontq][i]]==0)
                        {
				nodes.push(graph[frontq][i]);
				
				colour[graph[frontq][i]]=3-pickcolour;
         		}
                 }

		if(!possible)
                {      
			break;
		}
		
          }
 
    possible = 1;
    return possible;

      }


int main()
{
	int n,m,a,b,weight;
	cin>>n>>m;

	vector<vector<int>> graph;
	set<int> vertices; 
	graph.resize(2*(n+1), vector<int>(0));
	int count=1;
	for(int i=0;i<m;i++){
		cin>>a>>b>>weight;
		a++;
		b++;
		if(weight%2==0){
			graph[n+count].push_back(a);
			graph[n+count].push_back(b);
			graph[a].push_back(n+count);
			graph[b].push_back(n+count);
			vertices.insert(a);
			vertices.insert(b);
			vertices.insert(n+count);
			
			count++;
		}
		else{
			graph[a].push_back(b);
			graph[b].push_back(a);
			vertices.insert(a);
			vertices.insert(b);
		}

	}
	
	int check=1;
	while(vertices.size()!=0){
		if(colouring(graph,vertices,*vertices.begin(),n)==0){
			cout<<"YES"<<endl;
			check=0;
			break;
		}
	}
	if(check==1) cout<<"NO"<<endl;

}
