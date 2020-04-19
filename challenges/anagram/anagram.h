#ifndef ANAGRAM_H
#define ANAGRAM_H

#include <string>

using namespace std;


class Anagram
{
public:
    Anagram() {};

public:
    // Returns true if the two words are an anagram
    bool isAnAnagram(string firstWord, string secondWord);


};

#endif // ANAGRAM_H
