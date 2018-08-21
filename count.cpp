#include "sort.h"
void Count_sort(vector<int> &vec, int range)
{
	vector<int> count(range+1, 0);
	for(int i=0; i<vec.size(); i++)
	{
		if(vec[i]<0 || vec[i]>range)
		{
			errPtr=new err("Count sort error report: max number is wrong");
			return;
		}
		count[vec[i]]++;
	}
	int idx=0;
	for(int i=0; i<count.size(); i++)
	{
		while(count[i]>0)
		{
			vec[idx++]=i;
			count[i]--;
		}
	}
}
