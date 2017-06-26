#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Iditarod {
public:
	int avgMinutes(vector <string> times) {
		int hour, min; 
        
        double avgmin=0;
		
		for (int i=0;i<times.size();++i)
		{
			hour = stoi(times[i].substr(0,2));
			min = stoi(times[i].substr(3,2));
			
			if (((times[i][6] == 'A') && (hour != 12)) || ((times[i][6] == 'P') && (hour == 12)))
			{
			}
			else if(((times[i][6] == 'P') && (hour != 12))) 
			{
				hour += 12;
			}
            else if(((times[i][6] == 'A') && (hour == 12)))
                hour = 0;
            int days;
			days = stoi(times[i].substr(14));
			
			if (days <= 1 && hour < 8)
				cout << "Invalid end time" << endl;
			else
			{
				hour = (days-1) * 24 - 8 + hour;
			}
			min = (hour*60)+min;
			cout << "min = " << min << endl;
			avgmin += min;
		}
		avgmin/=(times.size());
        if ((avgmin - (int)avgmin) >= 0.5) ++avgmin;
		return (int)avgmin;
	}
};