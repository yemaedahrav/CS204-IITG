#include<bits/stdc++.h>
#include<vector>
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int nousers,queries;
        cin>>nousers>>queries;

	int distinctusers = 1;
	int oponecounter = 0;

	int users[queries];
	int rchgs[queries];
	int temp[queries];
	
        int operation;

	for (int i=0; i<queries; i++)
	{
		cin>>operation;

		if (operation==1)
		{       
                        int userid, recharge;
			cin>>userid>>recharge;
			users[i]=userid;
			temp[i]=userid;
			oponecounter++;
			rchgs[i]=recharge;
		}

		else
		{
			users[i]=-1;
		}
	}

	sort(temp, temp+oponecounter);

        int usersnew[queries];
	int rchgnew[queries]={0};

	usersnew[0] = temp[0];

	for (int i=1,count=0; i<oponecounter; i++)
	{
		if (temp[i]!=usersnew[count])
		{
			usersnew[++count]=temp[i];
			distinctusers++;
		}
	}

	int maxuser=-1, maxrchg=-1;

	for (int i=0; i<queries; i++)
	{
		if (users[i]==-1)
		{
			if (maxuser == -1)	cout<<"No data available.\n";
			else			cout<<maxuser<<"\n";
		}

		else
		{
			int pos = lower_bound(usersnew, usersnew+distinctusers, users[i]) - usersnew;
			rchgnew[pos] = rchgnew[pos] + rchgs[i];

			if (rchgnew[pos]>maxrchg)
			{
				maxrchg = rchgnew[pos];
				maxuser = users[i];
			}
		}
	}

	return 0;
}
