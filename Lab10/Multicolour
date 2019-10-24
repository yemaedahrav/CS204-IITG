#include<bits/stdc++.h>

using namespace std;

int traversal(vector<vector<int>> grid,vector<vector<int>> &visited ,int i,int j,int colour);
int search(vector<vector<int>> grid,vector<vector<int>> visited );


int main()
{  
  int m,n,cl;
  cin>>m>>n>>cl;

  vector< vector<int>> visited;
  vector< vector<int>> grid;

  grid.resize(m, vector<int>(n, 0));
  visited.resize(m, vector<int>(n, 0));
  
  for(int i=0;i<m;i++)
     { for(int j=0;j<n;j++)
          { cin>>grid[i][j]; }
     }

 cout<<search(grid,visited)<<endl;


return 0;

}

int  traversal(vector<vector<int>> grid,vector<vector<int>> &visited ,int i,int j,int colour)
     {  int m=grid.size();
	int n=grid[0].size();
	int result=1;
        visited[i][j]=1;

       if(i<m-1 && grid[i+1][j]==colour && !visited[i+1][j])
         {result +=traversal(grid,visited,i+1,j,colour); }

       if(j<n-1 && grid[i][j+1]==colour && !visited[i][j+1])
         {result +=traversal(grid,visited,i,j+1,colour); }

       if(i>0 && grid[i-1][j]==colour && !visited[i-1][j])
         {result +=traversal(grid,visited,i-1,j,colour); }

       if(j>0 && grid[i][j-1]==colour && !visited[i][j-1])
         {result +=traversal(grid,visited,i,j-1,colour); }

       return result;

     }

int search(vector<vector<int>> grid,vector<vector<int>> visited )
         {  int size =0;
            int maxsize =0;

            for(int i=0;i<grid.size();i++)
              {for(int j=0;j<grid[0].size();j++)
                  { if(!visited[i][j])
                      { size = traversal(grid,visited,i,j,grid[i][j]);}
                    if(size>maxsize)
                      { maxsize =size; }
                  }
              }
           return maxsize;

         }
