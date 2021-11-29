#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
	const size_t size = 50;
	int a[size];
	int i = 0;
	cout << " vvedite ima faila" << endl;
	const string b = ".txt";
	const string k = "C:\\Users\\User\\Desktop\\fail\\";
	string u, c;
	cin >> u;
	c = k + u + b;
	cout << c;
	ofstream f (c);
	for (int  element : a) {
		f << i << " ";
		i++;
		}
	f.close();
	return 0;
}