#include<iostream>
using namespace std;
int main()
{
	cout<<"size of char: "<< sizeof(char) <<" bytes";// size of char is 1
	cout<<"\n"; //"\n" is to print next output in next line
	cout<<"size of int: "<< sizeof(int) <<" bytes"<< endl;// size of int is 4
	cout << "Size of short int : " << sizeof(short int) << " bytes" << endl;
    cout << "Size of long int : " << sizeof(long int) << " bytes" << endl;
    cout << "Size of signed long int : " << sizeof(signed long int) << " bytes" << endl;
    cout << "Size of unsigned long int : " << sizeof(unsigned long int) << " bytes" << endl;
    cout << "Size of float : " << sizeof(float) << " bytes" <<endl;
    cout << "Size of double : " << sizeof(double) << " bytes" << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << " bytes" <<endl;
}
