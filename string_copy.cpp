#include <iostream>

void strCopy(char *str1, char *str2)
{
	int i = 0;
	while(str1[i] != '\0') // while last character of string
	{
		str2[i] = str1[i]; // coping one by one character of str1 into str2
		i++;
	}

	str2[i] = '\0'; // Add null character at last 
}

int main()
{
    char str1[] = "Hello", str2[100];

    strCopy(str1, str2); // Now str1 = str2
    puts(str2);

    return 0;
}
