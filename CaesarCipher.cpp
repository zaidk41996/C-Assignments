#include <iostream>
//#include <string.h>
//#include <ctype.h>
//#include <stdlib.h>

using namespace std;

int main()
{
    string key;
    cout << "Enter Key: "; cin >> key; cin.ignore();

    // Iterate throug the Key Characters
    for (int i = 0; i < key.length(); i++)
    {
        // Check if not digit show an error and return 1
        if (!(isdigit(key[i])))
        {
            printf("\nInvalid, The Key must be an integer\n");
            return 1;
        }
    }

    // Prompt the user for the plain text
    string plain_text;
	cout << "\nPLAINTEXT: "; getline(cin, plain_text);

    // Convert the key to Int
    int k = atoi(key.c_str());

    printf("\nCIPHERTEXT: ");

    // Iterate through the plain text
    for (int i = 0; i < plain_text.length(); i++)
    {
        // Check if it's upper
        if (isupper(plain_text[i]))
        {
            int letter = ((((plain_text[i] - 65) + k) % 26) + 65);
            printf("%c", letter);
        }

        // Check if it's lower
        else if (islower(plain_text[i]))
        {
            int letter = ((((plain_text[i] - 97) + k) % 26) + 97);
            printf("%c", letter);
        }

        // if not both above then print whatever it's
        else
        {
            printf("%c", plain_text[i]);
        }
    }
    printf("\n");
}
