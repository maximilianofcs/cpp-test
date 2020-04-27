#include "anagram.h"

int AnagramApp::run()
{
    // Ask the user how much lines to read from cin
    int numberOfLinesToRead = readNumOfLines();

    // Get each line and verify is an anagram, so output the result
    string failMsg = "Not valid line. Type two words.";
    vector<string> results;

    while (numberOfLinesToRead>0)
    {
        stringstream result;
        auto words = readWords(2, failMsg);
        if ( isAnAnagram(words[0], words[1]) )
            result << words[0] << " is an anagram of " << words[1];
        else
            result << words[0] << " is not an anagram of " << words[1];
        results.push_back(result.str());
        numberOfLinesToRead--;
    }

    // show results
    for(string& result : results)
        outStream << result << endl;

    return 0;
}




bool AnagramApp::isAnAnagram(string firstWord, string secondWord)
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
