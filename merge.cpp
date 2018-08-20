#include "sort.h"
void Merge_sort(vector<int> &vec, int low, int high)
{
	if(low>=high)
		return;
	int mid=(low+high)/2;
	Merge_sort(vec, low, mid);
	Merge_sort(vec, mid+1, high);
	int left=low, right=mid+1;
	int *tmp=new int[high-low+1];
	int idx=0;
	while(left<=mid && right<=high)
	{
		if(vec[left]<=vec[right])
			tmp[idx++]=vec[left++];
		else
			tmp[idx++]=vec[right++];
	}
	while(left<=mid)
		tmp[idx++]=vec[left++];
	while(right<=high)
		tmp[idx++]=vec[right++];
	for(idx=0; idx<(high-low+1); idx++)
		vec[low+idx]=tmp[idx];
	delete tmp;
}
