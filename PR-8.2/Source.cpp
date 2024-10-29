#include<iostream>
#include<string>

using namespace std;
string startwitha(string& str,int& pos);
int main()
{
	int pos = 0;
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);
	startwitha(str,pos);
	cout << "Index of last word starting with 'a' :" << pos << endl;
	return 0;
}

string startwitha(string& str, int& pos) {
    pos = -1; 
    for (int i = 0; i < str.length(); i++) {
        if ((i == 0 || str[i-1] == ' ') && str[i] == 'a') {
            pos = i; 
        }
    }
    return str;
}