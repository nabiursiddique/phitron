#include <iostream>
#include <string>

using namespace std;

int countWords(string s)
{
    int wordCount = 0;
    bool inWord = false;

    for (char c : s)
    {
        if (isalpha(c))
        {
            if (!inWord)
            {
                inWord = true;
                wordCount++;
            }
        }
        else
        {
            inWord = false;
        }
    }

    return wordCount;
}

int main()
{
    string s;
    getline(cin, s);

    int words = countWords(s);
    cout << words << endl;

    return 0;
}
