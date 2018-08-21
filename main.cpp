#include<iostream>
#include <unistd.h>
#include "sort.h"
err *errPtr=NULL;
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
	while((opt=getopt(argc, argv, "bqcimhsn"))!=-1)
	{
		vector<int> vec;
		ReadData(vec);
		
		switch(opt)
		{
			case 'b':
			{
				cout<<"Bubble sort working\n";
				Bubble_sort(vec);
				break;
			}
			case 'q':
			{
				cout<<"Quick sort working\n";
				Quick_sort(vec, 0, vec.size()-1);
				break;
			}
			case 'c':
			{
				cout<<"Choose sort working\n";
				Choose_sort(vec);
				break;
			}
                	case 'i':
                	{
                		cout<<"Insertion sort working\n";
        			Insert_sort(vec);
                		break;
                	}
			case 'm':
			{
				cout<<"Merge sort working\n";
				Merge_sort(vec, 0, vec.size()-1);
				break;
			}
			case 'h':
			{
				cout<<"Heap sort working\n";
				Heap_sort(vec);
				break;
			}
			case 's':
			{
				cout<<"Shell sort working\n";
				Shell_sort(vec);
				break;
			}
			case 'n':
			{
				cout<<"Count sort working\n";
				cout<<"Please input the max number:\n";
				int range;
				cin>>range;
				Count_sort(vec, range);
				break;
			}
                	default:
				errPtr=new err("Unknown option");
				break;
		}
		if(errPtr==NULL)
			DumpData(vec);
		else
			cout<<errPtr->getErrMsg()<<endl;
			
	}
	return 0;
}
