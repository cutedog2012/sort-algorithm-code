#include<iostream>
#include "sort.h"

void Choose_sort(vector<int> &vec)
{
	int len=vec.size();
	for(int i=0; i<len; i++)
	{
		int loc=i;
		for(int j=i; j<len; j++)
		{
			if(vec[j]<vec[loc])
				loc=j;
		}
		swap(vec, i, loc);
	}
}
