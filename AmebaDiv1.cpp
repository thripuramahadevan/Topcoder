#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

class AmebaDiv1 {
public:
	int count(vector <int> X) {
		
		int sz = X.size();
		map<int,int> freq;
		
		vector<int> possible;
		vector<int> notPossible;
        
        std::vector<int>::iterator it;
		
		long jelsize;
		for (int i=0;i<sz;++i)
		{
			//cout << " " << X[i] << endl;
			jelsize = X[i]*2;
			if (freq[X[i]] > 0)
			{
				++freq[X[i]];
				//cout << "S" << endl;
				continue;
			}
			else
			{
                //cout << ",";
				++freq[X[i]];
                it = find (notPossible.begin(), notPossible.end(), X[i]);
  				if (it == notPossible.end())
                	notPossible.push_back(X[i]);
                int j;
				for (j = i+1; j < sz; ++j)
				{
					if (jelsize == X[j])
					{
            			it = find (notPossible.begin(), notPossible.end(), X[j]);
  						if (it == notPossible.end())
							notPossible.push_back(X[j]);
						jelsize *= 2;						
					}
				}
				if (j == sz)
                	possible.push_back(jelsize);
			}
		}
		for (int k = 0; k < possible.size();++k)
		{
			notPossible.erase(std::remove(notPossible.begin(), notPossible.end(), possible[k]), notPossible.end());
		}		
       
		
        //for (auto k : notPossible)
           	//cout << k << " ";
		return notPossible.size();
	}
};