#include <vector>
#include <string>
using namespace std;
void swap(vector<int> &vec, int idx1, int idx2);
void Bubble_sort(vector<int> &vec);
void Quick_sort(vector<int> &vec, int low, int high);
void Choose_sort(vector<int> &vec);
void Insert_sort(vector<int> &vec);
void Merge_sort(vector<int> &vec, int low, int high);
void Heap_sort(vector<int> &vec);
void Shell_sort(vector<int> &vec);
void Count_sort(vector<int> &vec, int range);


class err{
private:
	string errmsg;
	bool isErr;
public:
	explicit err(string _errmsg):errmsg(_errmsg),isErr(true){}
	err():errmsg(""),isErr(false){}
	string getErrMsg(){
		return errmsg;
	}
};
extern err* errPtr;
