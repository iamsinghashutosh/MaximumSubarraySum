#include<bits/stdc++.h>
using namespace std;
int max_sum_subarray(int a[],int n)
{
	int max_so_far=0,max_ending_here=0;
	for(int i=0;i<n;i++)
	{
		max_ending_here+=a[i];
		if(max_ending_here<0)
		max_ending_here=0;
		if(max_so_far<max_ending_here)
		max_so_far=max_ending_here;
	}
	return max_so_far;
}
int main()
{
	int n,a[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int x=max_sum_subarray(a,n);
	printf("%d",x);
}
