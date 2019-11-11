#include <bits/stdc++.h>

using namespace std; 

typedef long long lli;
#define mod 1000000007

const int N=1e6+100;

vector<lli> parent(N);
vector<lli> ranks(N);
vector<lli> value(N);

struct edge{
	lli x,y;
	lli w;
};

bool compare(edge e1,edge e2)
{
	return e1.w > e2.w;
}

lli findset(lli val)
{	
	vector<lli> A;
	while(val != parent[val])
	{
	    A.push_back(val);
	    val = parent[val];
	}
	for(lli i=0; i < A.size(); i++) 
		parent[A[i]] = val;
	return val;
}

lli makeset(lli val)
{
	parent[val]=val;
	ranks[val]=0;
}

bool matching(lli a, lli b)
{
	if(findset(a)==findset(b)) return true;
	return false;
}

void unionsets(lli a ,lli b){
	a=findset(a);
	b=findset(b);
	if(ranks[a] > ranks[b])
	{
	    parent[b] = a;
	}
	else if(ranks[a] < ranks[b])
	{
	    parent[a] = b;
	} 
	else 
	{    
	    parent[b] = a;
	    ranks[a] += 1;
	}
	
}

int main(){

	lli n,m;
	lli a,b,c;
	cin>>n>>m;
	vector<edge> graph(m);
	
	for(lli i=0;i<m;i++){
		cin>>a>>b>>c;
		
		graph[i].x=a;
		graph[i].y=b;
		graph[i].w=c;

	}
	
	sort(graph.begin(),graph.end(),compare);
	
	
	lli product=1;
	for(lli i=0;i<n;i++)
        {
		makeset(i);
	}

	for(lli i=0;i<m;i++)
        {
		if(!matching(graph[i].x,graph[i].y)){
			product=((product)%mod*(graph[i].w)%mod)%mod;
			unionsets(graph[i].x,graph[i].y);	
		}
	}

	cout<<product<<endl;

return 0;

}
