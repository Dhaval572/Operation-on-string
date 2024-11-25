#include <iostream>
using namespace std;

void subSring(char *str, int startingIndex, int numOfChar)
{
	int i = 0;
	char subS[numOfChar + 1]; // An array to store sub-string

	while(i < numOfChar && str[startingIndex + 1] != '\0')
	{
		subS[i] = str[startingIndex + i]; // Adding one by one character to subS
		i++;
	}

	subS[i] = '\0'; // Add null character to last

	cout << "Substring: " << subS << endl;
}

int main()
{
	char str[] = "hello, bro!";
	subSring(str, 7, 4);

	return 0;
}
