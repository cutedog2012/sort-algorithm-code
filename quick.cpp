#include<iostream>
#include "sort.h"

int Middle(vector<int> &vec, int low, int high)
{
		
	int guard=vec[low];
	int left=low, right=high;
	while(left<right && right>=low && left<=high)
	{
		for(; left<right &&  vec[right]>=guard; right--)
			;
		if(left<right)
			vec[left]=vec[right];
		for(; left<right && vec[left]<=guard; left++)
			;
		if(left<right)
			vec[right]=vec[left];
	}
	vec[left]=guard;	
	return left;
}

void Quick_sort(vector<int> &vec, int low, int high)
{
	if(low>=high)
		return;
	int mid=Middle(vec, low, high);
	if(mid>1)
		Quick_sort(vec, low, mid);	
	if(mid<high)
		Quick_sort(vec, mid+1, high);
}
