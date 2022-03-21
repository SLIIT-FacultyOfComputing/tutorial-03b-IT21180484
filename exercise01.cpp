#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
 float Mark[] = {78.4, 90.6, 45.9, 72.2, 54.4};
 char Name[][10] = {"Ajith","Wimal","Kanthi","Suranji","Kushmitha"};
 int i;
  
 cout << "No" <<setw(12)<<"Name" <<setw(13)<<"Marks" <<endl;
 
 for(i=0;i<5;i++)
 {
 	cout<<i+1;
 	cout<<setw(12)<<Name[i];
 	cout<<setw(13)<<setiosflags(ios::fixed)<<setprecision(2)<<Mark[i]<<endl;
 }
 
}