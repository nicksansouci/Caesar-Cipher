#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;
using std::cin;

//"+a" and "-a" subtracting ASCII code values and %26 to keep value in range of the alphabet
string cipher(string s, int n){
	string s2;

	for (char i : s)
	{
		if (isupper(i)){
			i += 32;
		}
		int value = i - 'a';
		value = (value + n) % 26;
		char i2 = 'a' + value;
		s2+=i2;
	}
	return s2;

}

int main()
{
	cout << cipher("Password", 12) << endl;
	cout << cipher(cipher("Password", 12), 14) << endl;
}
	
