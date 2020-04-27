#include "palindrome.h"

int PalindromeApp::run()
{
    vector<string> results;

    // Get the number of lines to read
    int numOfLines = readNumOfLines();

    while (numOfLines > 0)
    {
        stringstream result;

        // Get each word
        auto words = readWords(1);

        // is a palindrome?
        if ( isAPalindrome(words[0]) )
            result << words[0] << " is palindrome ";
        else
            result << words[0] << " is not palindrome ";
        results.push_back(result.str());
        numOfLines--;
    }

    // show results
    for(string& result : results)
        outStream << result << endl;

    return 0;
}


/**
 * @brief isAPalindrome
 * @return true is the word is a palindrome
 */
bool PalindromeApp::isAPalindrome(string word)
{
    auto it = word.begin();
    auto rit = word.rbegin();

    // each char from begin shoul match of char from end
    while (it != word.end())
    {
        if (*it != *rit)
            return false;
        it++;
        rit++;
    }
    return true;
}


