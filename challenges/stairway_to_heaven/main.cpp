#include <iostream>
#include "../common/helper.h"

using namespace std;

int main()
{
    Helper helper;
    string askMsg = "Type a single integer of size N, representing the size of the staircase.";

    // Ask the user how much lines to read from cin
    int sizeOfStair = helper.getNumOfLinesToRead(cin, askMsg, "Not a valid number.");

    for(int count=1; count<=sizeOfStair; count++)
    {
       for(int blanks=0; blanks<(sizeOfStair-count); blanks++)
           cout << " ";
       for(int others=0; others<count; others++)
           cout << "#";
       cout << endl;
    }

    return 0;
}
