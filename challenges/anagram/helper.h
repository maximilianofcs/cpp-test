#ifndef HELPER_H
#define HELPER_H

#include <iostream>
#include <string>
#include <sstream>

#include <vector>


using namespace std;



/**
 * @brief Helper for get user entry from cin, parse, and so on
 */

class Helper
{
public:
    Helper() {};

    // Return a int from cin and show a error message if not a valid entrey
    int getIntFromCin(const string askMsg, const string failMsg)
    {
        int value;

        cout << askMsg;
        cin >> value;
        while(cin.fail())
        {
            cin.ignore();
            cin.clear();
            cout << failMsg;
            cin >> value;
        }
        return value;
    }

    // Return a valid number of words from cin
    vector<string> getWordsFromCinLine(size_t numberOfWords, const string failMsg)
    {
        string line;
        vector<string> words;
        while (words.size() != numberOfWords)
        {
            cin.clear();
            getline(cin, line);
            words = splitWords(line, ' ');
            if (words.size() != numberOfWords)
               cout << failMsg;
        }
        return words;
    }

    // Spit words
    vector<string> splitWords(const string& line, char delim) {
        std::vector<std::string> words;
        size_t start;
        size_t end = 0;
        while ((start = line.find_first_not_of(delim, end)) != std::string::npos) {
            end = line.find(delim, start);
            words.push_back(line.substr(start, end - start));
        }
        return words;
    }
};

#endif // HELPER_H
