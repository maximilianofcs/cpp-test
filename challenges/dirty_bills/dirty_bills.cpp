#include "dirty_bills.h"

/**
 * @brief App::run run the stairway_to_heavem application also used on tests
 */
int DirtyBillsApp::run()
{
    int dirty = 0;
    int clean = 0;

    string askMsg = "Type a single integer of size N, representing the amount "
            "of lines to read, followed by N lines containing an integer and a "
            "string telling if the bills are dirty or clean.";

    int numOfLines = readInt(askMsg, "Not a valid number. Try again.");

    while (numOfLines > 0)
    {
        auto values = readWords(2);
        int value = 0;
        try { value = stoi(values[0]); } catch (...) {}

        if (values[1] == "dirty")
            dirty += value;
        else if (values[1] == "clean")
            clean += value;

        numOfLines--;
    }

    // Show result
    if (dirty > 0)
        outStream << "There are " << dirty << " dirty bills." << endl;
    else
        outStream << "There are no dirty bills." << endl;

    return 0;
}
