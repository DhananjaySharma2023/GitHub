#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string s;
	ifstream f("testout1.txt");
	
	while(getline(f,s))
	{
		cout<<s;
	}
	return 0;
}
