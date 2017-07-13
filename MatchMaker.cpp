#include <iostream>
#include <string>
#include <vector>

using namespace std;

class MatchMaker{
public:
	 vector <string> getBestMatches(vector <string> param0, string param1, int param2) {
		 vector<string> res;
		 string candidate;
		 
		 int matches[param0.size()];
		 string users[param0.size()];
		 
		 for (int i = 0; i < param0.size();++i)
		 {
			
			if (param0[i].find(param1) != string::npos)
			{
				candidate = param0[i];
                matches[i] = -1;
				break;
			}
			else
			{
				continue;
			}
		 }
		 int maxMatches = 0;
		 for (int i=0; i<param0.size();++i)
		 {
            users[i] = param0[i].substr(0,param0[i].find(' '));
            if (matches[i] == -1)
            {
                continue;
            }
			else
			{
				size_t pos = param0[i].find(' ',0);
				size_t candPos = candidate.find(' ',0);
				if (((param0[i].substr(pos+1,1)).find(candidate.substr(candPos+3,1))) == string::npos)
				{
                	matches[i] = 0;
					continue;
				}
				else
				{
					//possible mate
                    matches[i] = 0;
					pos = param0[i].find(' ',pos);
                    pos = param0[i].find(' ',pos);
                    pos = param0[i].find(' ',pos);
					candPos = candidate.find(' ',candPos);
                    candPos = candidate.find(' ',candPos);
                    candPos = candidate.find(' ',candPos);
					pos = (param0[i].find(' ',pos+1));
					candPos = (candidate.find(' ', candPos+1));
                	
                    while ((pos != string::npos) && (candPos != string::npos))
					{
                        string s1 = param0[i].substr(pos+1,1);
                        string s2 = candidate.substr(candPos+1,1);
                		if (s1.find(s2) != string::npos)
						{
                			++matches[i];
							if (maxMatches < matches[i])
                            {
                				maxMatches = matches[i];
                            }
						}
						pos = (param0[i].find(' ',pos+1));
						candPos = (candidate.find(' ', candPos+1));
					}                    
				}                
			}
				
		 }
         for (int i = maxMatches; i >= param2; --i)
         {
         	for (int j=0;j<param0.size();++j)
		 	{
         		if (matches[j] == i)
				{
         			res.push_back(users[j]);
				}
			}
         }
		return res;
	 }
};