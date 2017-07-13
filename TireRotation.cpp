#include <iostream>
#include <string>

using namespace std;

class TireRotation {
public:
	int getCycle(string initial, string current) {
	
	if (initial.find(current) != string::npos)
		return 1;
	else if ((initial[0] == current[2]) && (initial[1] == current[3]) && (initial[2] == current[1]) && (initial[3] == current[0]))
		return 2;
	else if ((initial[0] == current[1]) && (initial[1] == current[0]) && (initial[2] == current[3]) && (initial[3] == current[2]))
		return 3;
	else if ((initial[0] == current[3]) && (initial[1] == current[2]) && (initial[2] == current[0]) && (initial[3] == current[1]))
		return 4;
	else
		return -1;	
	}
};