#include <iostream>  
#include <fstream>  
using namespace std;  
int main () {  
  string str;  
  ifstream f("testout.txt");  
  if (f.is_open())  
  { 
  cout << "content of the file \n"; 
    while ( getline (f,str) )//getline is copy the file info of str string into our program   
    {  
      cout << str <<endl;  
    }  
    
    f.close();  
  }  
  else {  
      cout << "File opening is fail."<<endl;   
    }  
  return 0;  
}  
