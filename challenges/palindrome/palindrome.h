#ifndef PALINDROME_H
#define PALINDROME_H

#include "../common/CppTestApp.h"

using namespace std;

/**
 * @brief The PalindromeApp class implement the Palindrome Challenger cpp-test
 */
class PalindromeApp : public CppTestApp
{
public:
    explicit PalindromeApp(istream& readStreamObj, ostream& outStreamObj) :
        CppTestApp(readStreamObj, outStreamObj) {}

    virtual ~PalindromeApp() {}

public:
    /**
     * @brief run:
     * @return exit code
     */
    virtual int run() override;

    /**
     * @brief isAPalindrome
     * @return True is the word is a palindrome
     */
    bool isAPalindrome(string word);

};

#endif // PALINDROME_H
