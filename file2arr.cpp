#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
ifstream fp;
ofstream ofp;
string ch;
int size=0;

int readfile(const char *msg)
{
	fp.open(msg);
	while(getline(fp,ch))
	{
		cout<<ch<<endl;
		size++;
	}
	fp.close();
	return size;
	
}	
void writefile(const char *msg)
{
	ofp.open(msg);
	while(cin>>ch)
	{
//		if(ch=='/n')
//			break;
//		else
//		{
			ofp<<ch;
			size++;
//		}	
	ofp.close();

	}
}		

void convertfile(const char *msg,int A[])
{
	fp.open(msg);
	for(int i=0;i<size;i++)
	{
		istringstream(ch)>>A[i];
		}
	for(int i=0;i<size;i++)
	{
		cout<<A[i]<<endl;
		}
}	

int main()
{	
	
	
	size=readfile("input.txt");
//	writefile("input.txt");
	int A[size];
	convertfile("input.txt",A);
	
	return 0;
}	
