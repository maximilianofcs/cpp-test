#include <iostream>
#include "palindrome.h"
#include "../common/helper.h"

using namespace std;

int main()
{
    Helper helper;
    Palindrome palindrome;
    vector<string> results;

    // Get the number of lines to read
    int numOfLines = helper.getNumOfLinesToRead();

    while (numOfLines > 0)
    {
        stringstream result;

        // Get each word
        auto words = helper.getWords(1);

        // is a palindrome?
        if ( palindrome.isAPalindrome(words[0]) )
            result << words[0] << " is palindrome ";
        else
            result << words[0] << " is not palindrome ";
        results.push_back(result.str());
        numOfLines--;
    }

    // show results
    for(auto it=results.begin(); it!=results.end(); it++)
        cout << *it << endl;

    return 0;
}
