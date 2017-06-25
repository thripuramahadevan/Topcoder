#include <iostream>
#include <vector>

using namespace std;

class WidgetRepairs {
	public:
	int days(vector <int> arrivals, int numPerDay) {
				
		int daysWorked = 0;
		
		int currentwork = 0;
		for (int i=0;i<arrivals.size();++i)
		{
			currentwork += arrivals[i];
			if (currentwork != 0)
			{
				++daysWorked;
				currentwork -= numPerDay;
				if (currentwork < 0) currentwork = 0;
			}
		}
		while(currentwork > 0)
		{
			++daysWorked;
			currentwork -= numPerDay;
		}
		return daysWorked;
	}
};

10,0,0,4,20
8