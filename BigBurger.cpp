#include <iostream>
#include <string>
#include <vector>

using namespace std;

class BigBurger {
public:
	int maxWait(vector<int> arrival, vector<int> service) {
		int waitTime = 0;
		int maxWaitTime = 0;
		
		int currTime = 0;
		
		for (int i=0;i<arrival.size();++i)
		{
			if (i > 0)
			{
				if (arrival[i] < currTime)
				{
					waitTime = currTime - arrival[i];
					if (waitTime > maxWaitTime)
						maxWaitTime = waitTime;
				}
				else
					currTime = arrival[i];
				
				currTime += service[i];
			}
			else
				currTime = arrival[i] + service[i];			
		}
		return maxWaitTime;	
	}
	
};