#include <iostream>
#include <iomanip>
using namespace std;



int main() {
	 int input,fac = 1;
	 
	 cout <<    "\tEnter the value of n : 10 \n\t" <<endl;
	 
	 cout << "Interger       Factorial"<< endl;
	 cin >> input;
	 while(input != -1)
	 {
	 for(int i = input;i>1;i--)
	 fac*=i;
	 cout << "\t\t"<< fac << endl;
	 
	 cin  >>  input;
	 fac=1;
	 	 }
	
	return 0;
}

