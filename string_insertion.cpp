#include <iostream>

void insertIntoString(char *str, int pos, char *text)
{
	int i = 0, j = pos;
	char temp[100]; // Make temporary array

	while(text[i] != '\0') 
	{
		temp[i] = str[j]; // Add one by one character of string from given position in temporary array
		str[j] = text[i]; // Add one by one character of text in str[j]
		i++; j++;
	} 

	temp[i] = '\0'; // Add null character to last
	i = 0;

	while (temp[i] != '\0')
    {
        str[j] = temp[i];
        i++; j++;
    }

	str[j] = '\0'; // Add null character to string
}

int main()
{
    char str[100] = "Hello, World!";
    char text[] = "Lol";
    
    insertIntoString(str, 7, text);
	puts(str);

    return 0;
}
