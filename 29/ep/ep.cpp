#include "S.h"
#include <iostream>
#include <mutex>
#include <fstream>
#include <vector>
#include <iterator>
#include <string>
#include <algorithm>
#include <chrono>

//using namespace std::string_literals;
using namespace std;

class Fail {
public:
	ifstream f;

	void vect(vector<char> v) {
		char letter;
		for (int i = 0; i < 10; i++)
		{
			f >> letter;
			v.push_back(letter);//çàïèñü â âåêòîð
		}
		sort(v.begin(), v.end());
		//replace(v1.begin(), v1.end(), '7', '*');//Çàìåíà 7 íà *
		writeTo(v);//çàïèñü âåêòîðà â ôàé
	}


	void func1()
	{
		char letter;
		f.open("100.txt");
		vector<char> v1, v2, v3, v4, v5;
		vect(v1); vect(v2); vect(v3);
	}
};
int main(/*array<System::String^>^ args*/)
{
	Fail file;
		file.func1();
    return 0;
}
