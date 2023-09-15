#include <bits/stdc++.h>
using namespace std;

int favsinger( long long int A[], int n)
{
	int res=0,i,max=0;
	unordered_map<int,int> mp;

	for(i=0;i<n;i++)
	{
		mp[A[i]]++;	
	}
    //find the max frequency singer
    for (auto i : mp) 
    {
        if (max < i.second) 
        {
            max = i.second;
        }
    }
    //cout<<" The maximum value is "<<max<<endl;

    for(auto i: mp)
    {
        cout<<i.first<<i.second<<endl;
    }

    // counting the singers with maximum songs.
    for(auto i: mp)
    {
        if(i.second==max)
        {
           // cout<<i.first<<"Printing out the first element"<<endl;
            res++;
        }    
    }

return res;
	
}

int main() 
{
	int i,n,res;
	cin >>n;    //Reading input from STDIN
	long long int A[n];
	for(i=0;i<n;i++)
	{
		cin>>A[i];
	}
	res= favsinger(A,n);

    //cout<<"The number of favourite singers are "<<res<<endl;
    cout<<res<<endl;
return 0;
}