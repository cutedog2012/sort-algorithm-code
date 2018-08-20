#include<iostream>
#include "sort.h"

void Insert_sort(vector<int> &vec)
{
	int len=vec.size();
	for(int i=1; i<len; i++)//vec[i] is to be inserted
	{
		int key=vec[i];
		int j;
		for(j=i-1; j>=0 && vec[j]>key; j--)
			vec[j+1]=vec[j];
		if(j<len-1)
			vec[j+1]=key;
	}
}
