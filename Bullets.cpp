#include <iostream>
#include <vector>

using namespace std;

class Bullets{
public:
	int match(vector <string> guns, string bullet) {
		string consider;
		
		for (int i=0;i<guns.size();++i) {
			consider = guns[i] + guns[i];
			if (consider.find(bullet) != string::npos)
				return i;
		}
		return -1;
	}
};