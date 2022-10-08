#include <iostream>  
#include <fstream>  
using namespace std;  
int main () {  
  fstream f("testout.txt");  
  if (f.is_open())  
  {  
    //f << "Welcome to india \n";  
    f << " name-hitesh\n";
    f<<"id- 17it16\n";
    f<<"book-balaguru\n";
    
    cout << "file handling is succesfull";
    f.close();  
  }  
  else cout <<"File opening is fail.";  
  return 0;  
}  
