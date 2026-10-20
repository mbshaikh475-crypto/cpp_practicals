#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Create ofstream object to write into file
    ofstream fout;
    string line;

    fout.open("sample.txt");

    while (fout)
    {
        getline(cin, line);

        // Press -1 to exit
        if (line == "-1")
            break;

        fout << line << endl;
    }

    fout.close();

    // Create ifstream object to read the file
    ifstream fin;
    fin.open("sample.txt");

    while (getline(fin, line))
    {
        cout << line << endl;
    }

    fin.close();

    return 0;
}