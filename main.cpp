#include<iostream>
#include <unistd.h>
#include "sort.h"
void ReadData(vector<int> &vec)
{
	int buf;
	while(cin>>buf && cin.get()!='\n')
	{
		if(buf!=' ')
			vec.push_back(buf);
	}
	vec.push_back(buf);
}
void DumpData(vector<int> &vec)
{
	for(int j=0; j<vec.size(); j++)
		cout<<vec[j]<<" ";	
	cout<<endl;
}

int main(int argc, char *argv[])
{
	int opt;
	while((opt=getopt(argc, argv, "bqcim"))!=-1)
	{
		switch(opt)
		{
			case 'b':
			{
				cout<<"Bubble sort working\n";
				vector<int> vec;
				ReadData(vec);
				Bubble_sort(vec);
				DumpData(vec);
				break;
			}
			case 'q':
			{
				cout<<"Quick sort working\n";
				vector<int> vec;
				ReadData(vec);
				Quick_sort(vec, 0, vec.size()-1);
				DumpData(vec);
				break;
			}
			case 'c':
			{
				cout<<"Choose sort working\n";
				vector<int> vec;
				ReadData(vec);
				Choose_sort(vec);
				DumpData(vec);
				break;
			}
                	case 'i':
                	{
                		cout<<"Insertion sort working\n";
                		vector<int> vec;
                		ReadData(vec);
        			Insert_sort(vec);
                		DumpData(vec);
                		break;
                	}
			case 'm':
			{
				cout<<"Merge sort working\n";
				vector<int> vec;
				ReadData(vec);
				Merge_sort(vec, 0, vec.size()-1);
				DumpData(vec);
				break;
			}
                	default:
				cout<<"Unknown options\n";
				break;
		}
			
	}
	return 0;
}
