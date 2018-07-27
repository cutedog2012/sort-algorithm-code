#include<iostream>
#include <unistd.h>
#include "sort.h"
void ReadData(vector<int> &vec)
{
	int buf;
	while(cin>>buf && cin.get()!='\n')
		vec.push_back(buf);
}
int main(int argc, char *argv[])
{
	int opt;
	while((opt=getopt(argc, argv, "bq"))!=-1)
	{
		switch(opt){
			case 'b':
			{
				vector<int> vec;
				ReadData(vec);
				Bubble_sort(vec);
				for(int j=0; j<vec.size(); j++)
					cout<<vec[j]<<"   ";	
				break;
			}
			case 'q':
			{
				vector<int> vec;
				ReadData(vec);
				Quick_sort(vec);
				for(int j=0; j<vec.size(); j++)
					cout<<vec[j]<<"   ";	
				break;

			}

			default:
				cout<<"Unknown options\n";
			break;
		}
			
	}
	return 0;
}
