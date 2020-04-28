#include <iostream>
#include "csv.h"


using namespace std;

int main()
{
    CsvApp csvApp(cin, cout);
    return csvApp.run();
}
