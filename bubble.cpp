#include "sort.h"
void Bubble_sort(vector<int> &vec)
{
	int len=vec.size();
	int cycle=len-1;
	while(cycle>0)
	{
		for(int i=0; i<cycle; i++)
		{
			if(vec[i]>vec[i+1])
			{
				int buf=vec[i+1];
				vec[i+1]=vec[i];
				vec[i]=buf;
			}
		}
		cycle--;
	}	
}
