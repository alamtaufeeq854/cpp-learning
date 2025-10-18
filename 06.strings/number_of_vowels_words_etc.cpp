// Number of vowels,words,consonant and others
#include <iostream>
using namespace std;

int main()
{
    string str = "How Many     Words7";
    int vowels = 0, consonant = 0, word = 0, others = 0, space = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')

            vowels++;

        else if (str[i] == ' ' && str[i - 1] != ' ')

            word++;

        else if (str[i] == ' ')

            space++;

        else if (str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122)

            consonant++;

        else
            others++;
    }

    cout << "vowels are " << vowels << endl;
    cout << "consonant are " << consonant << endl;
    cout << "words are " << word + 1 << endl;
    cout << "others are " << others << endl;

    return 0;
}