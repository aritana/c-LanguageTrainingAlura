#include <string>
#include <map>
using namespace std;

string secretWord;
map<char, bool> guessed;

bool notHit()
{
    for (char letter : secretWord)
    {
        if (!guessed[letter])
        {
            return true;
        }
    }
    return false;
}