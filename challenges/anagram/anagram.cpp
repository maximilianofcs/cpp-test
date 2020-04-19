#include "anagram.h"


bool Anagram::isAnAnagram(string firstWord, string secondWord)
{
    for(auto it = firstWord.begin(); it!=firstWord.end(); it++)
    {
        auto match = secondWord.find(*it, 0);
        if ( match != string::npos )
            secondWord.erase(match, 1);
        else
            return false;
    }
    return true;
}
