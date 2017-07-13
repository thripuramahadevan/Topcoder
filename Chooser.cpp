#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Chooser{
public:
	int numSets(vector <int> param0, vector <int> param1, vector <int> param2){
		if ((param0.size() == 0) || (param1.size() == 0) || (param2.size() == 0))
			return 0;
			
		int res = 0;
			
		for (auto i : param0)
		{
			for (auto j : param1)
			{
				for (auto k : param2)
				{
					if (((i+j+k) >= 60) && ((i+j+k) <= 75))
						++res;
				}
			}
		}
		return res;
	}
};