#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;
int main()
{
	const int size = 9;
	int total,tmp;
	int i,j;
	std::vector<int> cow(size);
	ifstream fin;
	fin.open("file.in",ios::in);

	if(!fin){
		cerr<<"Failed opening the file"<<endl;
		exit(1);
	}
	while(fin >> tmp)
	{
		cow.at(tmp);
	}

	std::sort(cow.begin(),cow.end());
	reverse(cow.begin(),cow.end());
	
	for(i=0;i<5;i++){
		total += cow.at(i);
	}

	cout<<endl<<total<<endl;
	return 0 ;
}


