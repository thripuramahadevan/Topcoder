#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Whisper {
	public:
	string toWhom(vector <string> usernames, string typed) {
		 std::transform(typed.begin(), typed.end(), typed.begin(), ::tolower);
       
        if (typed.find("/msg ") != 0)
			return "not a whisper";
		
		sort(usernames.begin(),usernames.end());
		
        std::transform(typed.begin(), typed.end(), typed.begin(), ::tolower);
        
		for (int i = usernames.size()-1;i>=0;--i)
		{
            string data = usernames[i];
            std::transform(data.begin(), data.end(), data.begin(), ::tolower);
			if ((typed.find(data,5) != std::string::npos) && typed[4+usernames[i].length()+1] == ' ')
				return (usernames[i]);
		}
		return "user is not logged in";
	}
};