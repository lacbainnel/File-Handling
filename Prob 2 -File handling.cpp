#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
	ifstream inFile;
	string data;
	
	inFile.open("Prob 2.txt", ios::in);
	while (!inFile.eof()){
		getline(inFile, data, '=') && getline(inFile, data, '\n');
			cout << data << endl;
	}
	
	inFile.close();
}
