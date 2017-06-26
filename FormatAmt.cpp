#include <iostream>
#include <string>
#include <vector>

using namespace std;

class FormatAmt {
public:
	string amount(int dollars, int cents) {
		string res;
		
		if (cents <= 9)
		{
			res = "0" + to_string(cents);
		}
		else
			res = to_string(cents);
		res = "." + res;
		while ((dollars/1000) != 0)
		{
            if ((dollars%1000) <= 9)
				res = "00" + to_string(dollars%1000) + res;
            else if ((dollars%1000) <= 99)
                res = "0" + to_string(dollars%1000) + res;
			else
				res = to_string(dollars%1000) + res;
			dollars/=1000;
			if (dollars > 0)
				res = "," + res;
		}
		if (dollars>=0)
			res = to_string(dollars) + res;
		
		res = "$" + res;
		return res;
	}
};