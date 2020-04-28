#include "csv.h"


int CsvApp::run()
{
    vector<string> results;

    // Get the number of lines to read
    int numOfLines = readNumOfLines();

    while (numOfLines > 0)
    {
        string line;
        getline(readStream, line);

        // Parse each csv line like <name>,<state>,<city>,<country>,<age>
        auto fields = splitWords(line, ',');

        // Should have all fields
        if (fields.size() > Field::age)
        {
            // The data represents a person record
            Person record(fields[Field::name],
                          fields[Field::state],
                          fields[Field::city],
                          fields[Field::country],
                          fields[Field::age]);

            // Print to a string
            results.push_back(record.toString());
        }
        else
            results.push_back("Not a valid csv data line.");

        numOfLines--;
    }

    // show results
    for(string& result : results)
        outStream << result << endl;

    return 0;
}
