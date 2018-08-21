#include "sort.h"
void Shell_sort(vector<int> &vec)
{
	int len=vec.size();
	int incr=0;
	while(incr<=len)
		incr=incr*3+1;
	while(incr>=1)
	{
		for(int i=incr; i<len; i++)
		{
			int key=vec[i];
			int checkidx=i-incr;
			while(checkidx>=0 && vec[checkidx]>key)
			{
				vec[checkidx+incr]=vec[checkidx];
				checkidx=checkidx-incr;
			}
			vec[checkidx+incr]=key;
		}
		incr=(incr-1)/3;
	}
	
}
