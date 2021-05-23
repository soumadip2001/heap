#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

void heapify(int v[],int n,int i)
{
	int parent=i;
	int l=2*i+1;
	int r=2*i+2;
	if(l<n && v[l]>v[parent] )
	{
		parent=l;
	}
	if(r<n && v[r]>v[parent])
	{
		parent=r;
	}
	if(parent!=i)
	{
		swap(v[i],v[parent]);
     	heapify(v,n,parent);
    }

}
void build_heap(int v[],int n)
{
	int s=(n-2)/2;
	for(int i=s;i>=0;i--)
	{
		heapify(v,n,i);
	}
}
int main()
{
	int n=0;
	cout<<"no of element  ";
	cin>>n;
	int v[n];
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	build_heap(v,n);
	for(int i=0;i<n;i++)
	{
		cout<<v[i]<<" ";
	}
	return 0;
}
