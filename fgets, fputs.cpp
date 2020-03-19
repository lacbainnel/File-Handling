#include <iostream>
using namespace std;

int main ()
{
	FILE *fp;
	char sentence[256];
	
	//Check permission if ou can write a file
	if (!fp) {
		cout << "Cannot open file. \n";
		system ("pause");
		exit (1);
	}
	
	printf ("Enter a sentence: ");
	fgets(sentence, 256, stdin);
	fp = fopen ("My file.txt", "w");
	fputs(sentence, fp);
	
	return 0;
}
