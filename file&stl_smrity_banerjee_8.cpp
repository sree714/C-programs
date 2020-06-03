/*
 * Create a file “Student” containing the following information:
	Name, Roll, Semester, Fees,
	Write C++ codes to insert, display and update records randomly.
*/




#include <fstream>
#include <string>
#include <bits/stdc++.h> 
#include <iostream>

using namespace std;

void insert()
{
	string name;
	int roll;
	int sem;
	int fees;
	
	cout<<"Enter name: ";
	cin>>name;
	
	cout<<"Enter roll: ";
	cin>>roll;
	
	cout<<"Enter sem: ";
	cin>>sem;
	
	cout<<"Enter fees: ";
	cin>>fees;
	
	
	
	std::fstream fs;
	fs.open ("student1.txt", std::fstream::in | std::fstream::out | std::fstream::app);

	fs << roll<<" "<<name<<" "<<sem<<" "<<fees<<endl;
	

	fs.close();
}


void display()
{
	std::ifstream inFile;
    inFile.open("student1.txt"); 

    std::stringstream strStream;
    strStream << inFile.rdbuf(); 
    std::string str = strStream.str(); 

    std::cout << str << "\n"; 
    inFile.close();
}



void delete_line(const char *file_name, int n) 
{ 
	
	ifstream is(file_name); 


	ofstream ofs; 
	ofs.open("temp.txt", ofstream::out); 

	 
	char c; 
	int line_no = 1; 
	while (is.get(c)) 
	{ 
		
		if (c == '\n') 
		line_no++; 
 
		if (line_no != n) 
			ofs << c; 
	} 


	ofs.close(); 

	
	is.close(); 

	
	remove(file_name); 

	rename("temp.txt", file_name); 
	
	insert();
} 


void update()
{
	int n;
	cout<<"whitch line do you want to update: ";
	cin>>n; 
	delete_line("student1.txt", n); 
	
}

int main()
{
	int c;
	while(1)
	{
	cout<<endl<<"Enter your choice: "<<endl;
	cout<<"1: insert"<<endl<<"2: display"<<endl<<"3: update"<<endl<<"4: exit"<<endl;
	
	cin>>c;
	
	switch(c){
		case 1:
			insert();
			break;
		case 2:
			display();
			break;
		case 3:
			update();
			break;
		case 4:
			exit(-1);
		default:
			cout<<"wrong choice";
			break;
		}
	}
	return 0;
}
