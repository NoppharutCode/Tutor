// Don't forget to include these 3 items
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

main()
{
	ifstream file("student.txt");
    string line;    
	stringstream linestream;

	int a;
	string b;
	int c;
	string d;
	char e;
	double f;
			
   	getline(file, line); // Read one line into a string
   	linestream << line; // Use stream for convenience
  	linestream >> a; // Put content into variable 'a'
	linestream.str(""); // Clear stream so we can reuse it
	linestream.clear(); // Reset stream so we can reuse it
	
  	
  	getline(file, line);
   	linestream << line;   	
  	linestream >> b >> c>>d;  
  	linestream.str("");
	linestream.clear();  
  	
  	getline(file, line);
   	linestream << line;     	
  	linestream >> d >> e >> f;  
	linestream.str("");
	linestream.clear();  
  	
  	cout << a << endl<< b << " " << c << endl << d << " " << e << " " << f <<endl;
  	
    system("PAUSE"); // Pause screen
}
