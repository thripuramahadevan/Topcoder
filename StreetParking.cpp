#include <iostream>
#include <vector>
#include <string>

using namespace std;

class StreetParking {
public:
	int freeParks(string street) {
	
	int res=0;
	
	for (int i= 0;i<street.length();++i)
	{
		if (street[i] == '-')
		{
			//consider
			if (((i == 0) && (street[i+1] != 'B') && (street[i+1] != 'S') && (street[i+2] != 'B')) || ((i == street.length()-1) && (street[street.length()-2] != 'S')) || ((((i+1) < street.length()) && (street[i+1] != 'S') && (street[i+1] != 'B')) && (((i-1)>0) && (street[i-1] != 'S')) && (((i+2) < street.length()) && (street[i+2] != 'B'))))
				++res;
		}
	}
	
	return res;
	}
};