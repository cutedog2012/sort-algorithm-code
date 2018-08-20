#include "sort.h"
void swap(vector<int> &vec, int idx1, int idx2)
{
	int tmp=vec[idx1];
	vec[idx1]=vec[idx2];
	vec[idx2]=tmp;
}
