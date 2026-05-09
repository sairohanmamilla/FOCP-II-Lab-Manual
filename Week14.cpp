#include <iostream>
using namespace std;
#include <fstream>

//File Handling in C++
// ftsream, ifstream, ofstream, getline, open, close
int main()
{
    //ofstream: to write data into a file
    ofstream outFile;
    outFile.open("example.txt"); // open a file named "example.txt"
    if (outFile.is_open())
    {
        outFile << "Hello, this is a test file." << endl; // write data to the file
        outFile << "This file is created using C++." << endl;
        outFile.close(); // close the file
    }
    else
    {
        cout << "Unable to open the file for writing." << endl;
    }

    //ifstream: to read data from a file
    ifstream inFile;
    inFile.open("example.txt"); // open the same file for reading
    if (inFile.is_open())
    {
        string line;
        while (getline(inFile, line)) // read the file line by line
        {
            cout << line << endl; // print each line to the console
        }
        inFile.close(); // close the file
    }
    else
    {
        cout << "Unable to open the file for reading." << endl;
    }

    return 0;
}