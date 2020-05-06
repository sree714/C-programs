/*
*Write a program to create a data file that will contain the following
 information about 5 students.
 Roll, Name, Subject Grade 1, Subject Grade 2, Subject Grade 3, Subject
 Grade 4, Subject Grade 5
 Fetch the information from the file and compute average grades of each
 student. Display all information of all students along with their average
 grades in tabular form.
*/

/*
*for include jsoncons/json.hpp link "https://github.com/danielaparker/jsoncons"
*/

#include <fstream>
#include <string>
#include <iostream>
#include <bits/stdc++.h>
#include <jsoncons/json.hpp>
#include <jsoncons_ext/jsonpath/jsonpath.hpp>

using namespace jsoncons; // for convenience
using namespace std;

void decode(string text)
{
    //cout<<text;

     // Parse the string of data into a json value
    json j = json::parse(text);

    // Does object member reputons exist?
    std::cout << "(1) " << std::boolalpha << j.contains("student") << "\n\n";

    // Get a reference to reputons array
    const json& v = j["student"];


    cout<<"Name"<<" | "<<"roll"<<" | "<<"c++"<<" | "<<"java"<<" | "<<"py"<<"   | "<<" c"<<" | "<<"js"<<"  | "<<"avg"<<endl;
    for (const auto& item : v.array_range())
    {
        string sName=item["sNmae"].as<std::string>();
        int roll=item["roll"].as<int>();
        int s1=item["c++"].as<int>();
        int s2=item["java"].as<int>();
        int s3=item["python"].as<int>();
        int s4=item["c"].as<int>();
        int s5=item["javascript"].as<int>();

        int sum=s1+s2+s3+s4+s5;
        float avg=sum/5;

        cout<<sName<<"  |  "<< roll<<"   | "<<s1<<"  |  "<<s2<<"  | "<<s3<<"   |  "<<s4<<"| "<<s5<<"  | "<<avg<<" %"<<endl;
    }



}


int main(int argc, char** argv)
{

  std::ifstream ifs("student.txt");
  std::string content( (std::istreambuf_iterator<char>(ifs) ),
                       (std::istreambuf_iterator<char>()    ) );

  decode(content);


  ifs.close();

  return 0;
}
