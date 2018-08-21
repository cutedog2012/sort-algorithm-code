#include "sort.h"
static void adjustHeap(vector<int> &vec, int idx, int len)
{
	int key=vec[idx];
	//for node i, left child is 2*i+1 and right child is 2*i+2
	for(int child=2*idx+1; child<len; child=child*2+1)
	{
		if(child<len-1 && vec[child]<vec[child+1])//left child < right child
			child++;
		if(vec[child]>key)//child move up to the parent node
		{
			vec[idx]=vec[child];
			idx=child;//adjust down from the child node
		}
	}
	vec[idx]=key;
}

void Heap_sort(vector<int> &vec)
{
	for(int i=vec.size()/2-1; i>=0; i--)
		adjustHeap(vec, i, vec.size());
	//swap and adjust
	for(int i=vec.size()-1; i>=0; i--)
	{
		swap(vec, 0, i);
		adjustHeap(vec, 0, i);	
	}	
}

