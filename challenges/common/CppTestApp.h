#ifndef CONSOLEAPP_H
#define CONSOLEAPP_H

#include <climits>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;


/**
 * @brief Base class for all cpp-test challenger applications, with common functions
 * like: user entry, parse, return a number(s), word(s), and so on
 * Also used on test cases
 */
class CppTestApp
{
public:
    /**
     * @brief ConsoleApp: constructor
     * @param readStreamObj: input stream like cin
     * @param outStreamObj: output stream like cout
     */
    explicit CppTestApp(istream& readStreamObj, ostream& outStreamObj) :
        readStream(readStreamObj), outStream(outStreamObj), withMsgs(true) {};

    ~CppTestApp() {};

protected:
    // app input/output
    istream& readStream;
    ostream& outStream;
    bool withMsgs;

public:
    /**
     * @brief run: should be implemented by each cpp-test console app
     * @return: exit code
     */
    virtual int run() = 0;

    /**
     * @brief setWithMsgs enable/disable user messages
     * @param withMsgs enable(true) or disable(false)
     */
    void setWithMsgs(bool withMsgs) { this->withMsgs = withMsgs; }

protected:
    /**
     * @brief readInt
     * @param askMsg: ask the user for type a number
     * @param failMsg: msg if not valid entry
     * @return a int from istream and show a error message if not a valid entry
     */
    int readInt(
        const string askMsg = "Type a number.",
        const string failMsg = "Not a valid number. Try again.")
    {
        int value = INT_MIN;
        string line;
        while (value == INT_MIN)
        {
            if (withMsgs)
                cout << askMsg << endl;
            getline(readStream, line);
            if(line.empty()) // nothing to read
                return 0;
            try
            {
                value = stoi(line);
            }
            catch (...)
            {
                outStream << failMsg << endl;
            }
        }
        return value;
    }


    /**
     * @brief getNumOfLinesToRead: common function with common message used in
     * many cpp-tests
     * @param askMsg: ask the user for type a number
     * @param failMsg:  msg if not valid entry
     * @return a int from istream and show a error message if not a valid entry
     */
    int readNumOfLines(
            const string askMsg = "Type the number of lines to read.",
            const string failMsg = "Not a valid number of lines to read. Try again.")
    {
        return this->readInt(askMsg, failMsg);
    }


    /**
     * @brief readWords
     * @param numberOfWords: number of words to read
     * @param failMsg: msg if not valid entry
     * @return a vector of words
     */
    vector<string> readWords(
            size_t numberOfWords,
            string failMsg = "Not a valid entry. Try again.")
    {
        string line;
        vector<string> words;
        while (words.size() != numberOfWords)
        {
            getline(readStream, line);
            words = splitWords(line, ' ');
            if (words.size() != numberOfWords)
               outStream << failMsg << endl;
        }
        return words;
    }

    /**
     * @brief splitWords
     * @param line: input line to split
     * @param delim: word delimiter
     * @return vector of words(string)
     */
    vector<string> splitWords(const string& line, char delim) {
        std::vector<std::string> words;
        size_t start = 0;
        size_t end = 0;
        while ((start = line.find_first_not_of(delim, end)) != std::string::npos) {
            end = line.find(delim, start);
            words.push_back(line.substr(start, end - start));
        }
        return words;
    }

    /**
     * @brief readInts
     * @param numOfInts to read
     * @param askMsg
     * @param failMsg
     * @return vector of ints
     */
    vector<int> readInts(
            size_t numOfInts,
            string& askMsg,
            string& failMsg)
    {
        vector<int> results;

        if (withMsgs)
            cout << askMsg << endl;
        auto values = readWords(numOfInts, failMsg);
        for(auto it=values.begin(); it!=values.end(); it++)
        {
            try
            {
                int number = stoi(*it);
                results.push_back(number);
            }
            catch (...)
            {
                outStream << *it << endl;
                outStream << failMsg << endl;
            }
        }
        return results;
    }
};


#endif // CONSOLEAPP_H
