#include "StairwayToHeavenApp.h"

/**
 * @brief App::run run the stairway_to_heavem application also used on tests
 */
int StairwayToHeavenApp::run()
{
    string askMsg = "Type a single integer of size N, representing the size of the staircase.";

    // Ask the user how much lines to read from cin
    int sizeOfStair = readInt(askMsg, "Not a valid number. Try again.");

    // Error
    if (sizeOfStair <= 0)
        outStream << "Error." << endl;

    for(int count=1; count<=sizeOfStair; count++)
    {
       for(int blanks=0; blanks<(sizeOfStair-count); blanks++)
           outStream << " ";
       for(int others=0; others<count; others++)
           outStream << "#";
       outStream << endl;
    }

    return 0;
}
