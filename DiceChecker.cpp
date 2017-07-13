#include <iostream>
#include <vector>
#include <map>

using namespace std;

class DiceChecker {
public:
	vector <int> badValues(vector <int> param0) {
		vector<int> res;
		
		int len = param0.size();
		
		double freq[6] = {0.0,0.0,0.0,0.0,0.0,0.0};
		
		for (auto i : param0)
			++freq[i-1];
		
		for (int it = 0; it < 6;++it)
		{
			freq[it] = freq[it]/len;
			if (freq[it] > 0.25 || freq[it] < 0.1)
				res.push_back(it+1);
		}
		return res;
	}
};