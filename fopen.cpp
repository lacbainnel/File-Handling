#include <iostream>
using namespace std;

int main ()
{
	FILE *fp;
	char sentence[256];
	
	//Check permission if you can write a file
	if (!fp) {
		cout << "Cannot open file. \n";
		system ("pause");
		exit (1);
	}
	
	fp = fopen ("My file.txt", "r");
		if (fgets(sentence, 256, fp) != NULL)
			puts (sentence);
			
	return 0;
}
