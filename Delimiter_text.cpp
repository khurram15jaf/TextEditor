#include <fstream>
#include <iostream>
#include <string.h>
using namespace std;


string getfile(string a)
{

   // open a file in read mode.
   ifstream infile; 
   infile.open("ABC.txt"); 
   cout << "Reading from the file" << endl; 
   infile >> a; 
   // write the data at the screen.
   cout << a << endl;
   // again read the data from the file and display it.
   infile >> a; 
   cout << a << endl; 
   // close the opened file.
   infile.close();
}

int countStr(string s) 
{ 
	cout<<s<<endl<<endl;
	string delimiter = "\n";
	string st="";

	size_t pos = 0;
	string token;
	string l[sizeof(s)];
	int i=0;
	
	while ((pos = s.find(delimiter)) != string::npos) {
    	token = s.substr(0, pos);
    	l[i]=token;
    	cout << token<< i++ << endl;
	    s.erase(0, pos + delimiter.length());
	}l[i]=s;
	cout << s << i << endl;
	
	return i+1;
} 

string conv(string s,int o) 
{ 
	cout<<s<<endl<<endl;
	string delimiter = "\n";
	string st="";

	size_t pos = 0;
	string token;
	string l[sizeof(s)];
	int i=0;
	
	while ((pos = s.find(delimiter)) != string::npos) {
    	token = s.substr(0, pos);
    	l[i]=token;
    	cout << token<< i++ << endl;
	    s.erase(0, pos + delimiter.length());
	}l[i]=s;
	cout << s << i << endl;
	return l[i];
} 

 
int main () {
	string data;int count=0;
	data=getfile(data);
	count=countStr(data);
	cout<<count;
	string *arr[count];
	for(int p=0;p<count;p++)
	{*arr[p]=conv(data,p);} 
}

