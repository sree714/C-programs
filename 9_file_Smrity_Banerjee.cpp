
/*
 *Write a C++ program that will copy the content of one file into another
  except the letter ‘a’.
*/

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string line;
    //For writing text file
    //Creating ofstream & ifstream class object
    ifstream ini_file {"file1.txt"};
    ofstream out_file {"file2.txt"};

    if(ini_file && out_file){

        //Remove the char 'a'
        char a='a';
        while(getline(ini_file,line)){
            line.erase(std::remove(line.begin(), line.end(), a), line.end());


        out_file << line << "\n";
        }

        cout << "Copy Finished \n";

    } else {
        //Something went wrong
        printf("Cannot read File");
    }

    //Closing file
    ini_file.close();
    out_file.close();

    return 0;
}
