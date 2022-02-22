#include <iostream>
#include<iomanip>
using namespace std;

int main() 
{
 float marks[] = {78.4, 90.6, 45.9, 72.2, 54.4};
 char names[][20] = {"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"};
  
 cout << "No " << "Name " << "Marks " << endl;
  
 for (int r = 0; r < 5; r++) {
     cout <<  r+1 
          <<  names[r]
          <<setw(5)<< setprecision(2)<<setiosflags(ios::fixed)<<marks[r] << endl;
 }
}