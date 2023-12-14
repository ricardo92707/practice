#include <iostream>
using namespace std;

int main()
{
    string text;
    string word;
    cout << "Enter a sentence" << endl;
    getline(cin, text);

    cout << "Enter a word you are looking for " << endl;
    bool found = false;

    cin >> word;
    for (int i = 0; i < text.length() - word.length(); i++)
    {
        bool status = true;
        for (int j = 0; j < word.length(); j++)
        {
            if (word[j] != text[i + j])
            {
                status = false;
                break;
            }
        }
        if (status)
        {
            found = true;
            break;
        }
    }
    if (found)
    {
        cout << " word was found in text " << endl;
    }
    else
    {
        cout << " not found " << endl;
    }
}