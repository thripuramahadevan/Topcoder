#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Billboard {
public:
	vector<string> enlarge(string message, vector<string> letters) {
		vector<string> res(5,"\0");
        
		for (int i=0;i<message.length();++i)
		{
			//cout << "Considering " << message[i] << endl;
			for (auto l : letters)
			{
				int j = 0;
				if (message[i] != l[0])
					continue;
				else
				{
					//cout << "found the letter. Add the rows." << endl;
					string str = "\0";
					if (i == 0)
					{
						str = l.substr(2,5);
						res[j++] = str;
						str = l.substr(8,5);
						res[j++] = str;
						str = l.substr(14,5);
						res[j++] = str;
						str = l.substr(20,5);
						res[j++] = str;
						str = l.substr(26,5);
						res[j++] = str;
                        if (i != message.length()-1)
							for (int j=0;j<5;++j)
								res[j] = res[j]+'.';						
					}
					else
					{
						str = l.substr(2,5);
						res[j] += str;
						++j;
						str = l.substr(8,5);
						res[j] += str;
						++j;
						str = l.substr(14,5);
						res[j] += str;
						++j;
						str = l.substr(20,5);
						res[j] += str;
						++j;
						str = l.substr(26,5);
						res[j] += str;
						if (i != message.length()-1)
						{
							for (int j=0;j<5;++j)
								res[j] = res[j]+'.';
						}						
					}
					
				}
			}
		}
	
	
		return res;
	}
};