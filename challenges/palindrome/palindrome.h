#ifndef PALINDROME_H
#define PALINDROME_H

#include <string>

using namespace std;

class Palindrome
{
public:
    Palindrome();

public:
    /**
     * @brief isAPalindrome
     * @return True is the word is a palindrome
     */
    bool isAPalindrome(string word);

};

#endif // PALINDROME_H
