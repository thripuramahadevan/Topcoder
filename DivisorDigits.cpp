#include <iostream>
#include <string>
#include <vector>

using namespace std;

class DivisorDigits{
public:
	int howMany(int number) {
	int res = 0;
	int num = number;
	vector<int> digits;
	while (num/10 != 0)
	{
		digits.push_back(num%10);
		num/=10;
	}
	digits.push_back(num);
	
	for (auto d : digits)
	{
		if (d == 0)
			continue;
		else if (number % d == 0)
			++res;
	}
	
	return res;
	}
};