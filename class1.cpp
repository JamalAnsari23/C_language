#include <iostream>
using namespace std;

class Program
{
	public:
	int x=10;

	
	void Test()
	{
		cout<<"hello test call\n";
		cout<<"hello jamal";	
	}	
};
int main()
{
	Program obj;
	cout<<obj.x;
	obj.Test();
}
