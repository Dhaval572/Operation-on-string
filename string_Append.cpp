// String Append
#include <iostream>
#include <string.h>
using namespace std;

void strAppend(char *str, char *text)
{
	int i = strlen(str); // Move i to last character of string
	int j = 0;

	while (text[j] != '\0')
	{
		str[i] = text[j]; // Add one by one character of text to string
		i++;
		j++;
	}

	str[i] = '\0'; // Add null character to last
}

int main()
{
	char str[20], text[20];

	cout << "Enter the string: ";
	gets(str); // Get string from users

	cout << "Enter the text to add in string: ";
	gets(text); // Get text to add into string from user

	strAppend(str, text);
	puts(str); // Print string 

	return 0;
}
