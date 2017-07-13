#include <iostream>
#include <vector>
#include <string>

using namespace std;

class CircleGame {
public:
	int cardsLeft(string deck) {
		string deckwork = deck;
		int len = deckwork.length();
		
        bool possible = true;
        while (possible)
        {
            for (int i=0;i< len; ++i)
            {
                len = deckwork.length();
                //cout << "%" << deckwork[i] << "%";
                switch (deckwork[i])
                {
                    case 'K':
                        //cout << "-" << deckwork[i] << " now, " << deckwork;
                        deckwork = deckwork.substr(0,i) + deckwork.substr(i+1);					
                        --i;
                        break;
                    case 'A':
                        //cout << "-A ";
                        if (i == 0)
                        {
                            if (deckwork[i+1] == 'Q')
                            {
                                deckwork = deckwork.substr(2);
                                --i;
                            }
                            else if (deckwork[len-1] == 'Q')
                            {
                                deckwork = deckwork.substr(1,len-2);
                                --i;
                            }
                        }
                        else
                        {
                            if (deckwork[i+1] == 'Q')
                            {
                                deckwork = deckwork.substr(0,i) + deckwork.substr(i+2);
                                --i;
                            }
                            else if (deckwork[i-1] == 'Q')
                            {
                                deckwork = deckwork.substr(0,i-1) + deckwork.substr(i+1);
                            	i-=2;
                            }
                        }
						//cout << "~" << deckwork << "~";
                        break;
                    case '2':
                        //cout << "-2 ";
                        if (i == 0)
                        {
                            if (deckwork[i+1] == 'J')
                            {
                                deckwork = deckwork.substr(2);
                                --i;
                            }
                            else if (deckwork[len-1] == 'J')
                            {
                                deckwork = deckwork.substr(1,len-2);
                                --i;
                            }
                        }
                        else
                        {
                            if (deckwork[i+1] == 'J')
                            {
                                deckwork = deckwork.substr(0,i) + deckwork.substr(i+2);
                            	--i;
                            }
                            else if (deckwork[i-1] == 'J')
                            {
                                deckwork = deckwork.substr(0,i-1) + deckwork.substr(i+1);
                            	i-=2;
                            }
                        }
                        break;
                    case '3':
                        //cout << "-3 ";
                        if (i == 0)
                        {
                            if (deckwork[i+1] == 'T')
                            {
                                deckwork = deckwork.substr(2);
                                --i;
                            }
                            else if (deckwork[len-1] == 'T')
                            {
                                deckwork = deckwork.substr(1,len-2);
                                --i;
                            }
                        }
                        else
                        {
                            if (deckwork[i+1] == 'T')
                            {
                                deckwork = deckwork.substr(0,i) + deckwork.substr(i+2);
                            	--i;
                            }
                            else if (deckwork[i-1] == 'T')
                            {
                                deckwork = deckwork.substr(0,i-1) + deckwork.substr(i+1);
                            	i-=2;
                            }
                        }
                        break;
                    case '4':
                        //cout << "-4 ";
                        if (i == 0)
                        {
                            if (deckwork[i+1] == '9')
                            {
                                deckwork = deckwork.substr(2);
                                --i;
                            }
                            else if (deckwork[len-1] == '9')
                            {
                                deckwork = deckwork.substr(1,len-2);
                                --i;
                            }
                        }
                        else
                        {
                            if (deckwork[i+1] == '9')
                            {
                                deckwork = deckwork.substr(0,i) + deckwork.substr(i+2);
                            	--i;
                            }
                            else if (deckwork[i-1] == '9')
                            {
                                deckwork = deckwork.substr(0,i-1) + deckwork.substr(i+1);
                            	i-=2;
                            }
                        }
                        break;
                    case '5':
                        //cout << "-5 ";
                        if (i == 0)
                        {
                            if (deckwork[i+1] == '8')
                            {
                                deckwork = deckwork.substr(2);
                                --i;
                            }
                            else if (deckwork[len-1] == '8')
                            {
                                deckwork = deckwork.substr(1,len-2);
                                --i;
                            }
                        }
                        else
                        {
                            if (deckwork[i+1] == '8')
                            {
                                deckwork = deckwork.substr(0,i) + deckwork.substr(i+2);
                            	--i;
                            }
                            else if (deckwork[i-1] == '8')
                            {
                                deckwork = deckwork.substr(0,i-1) + deckwork.substr(i+1);
                            	i-=2;
                            }
                        }
                        break;
                    case '6':
                        //cout << "-6 ";
                        if (i == 0)
                        {
                            if (deckwork[i+1] == '7')
                            {
                                deckwork = deckwork.substr(2);
                                --i;
                            }
                            else if (deckwork[len-1] == '7')
                            {
                                deckwork = deckwork.substr(1,len-2);
                                --i;
                            }
                        }
                        else
                        {
                            if (deckwork[i+1] == '7')
                            {
                                deckwork = deckwork.substr(0,i) + deckwork.substr(i+2);
                            	--i;
                            }
                            else if (deckwork[i-1] == '7')
                            {
                                deckwork = deckwork.substr(0,i-1) + deckwork.substr(i+1);
                            	i-=2;
                            }
                        }
                        break;
                    case '7':
                        //cout << "-7 ";
                        if (i == 0)
                        {
                            if (deckwork[i+1] == '6')
                            {
                                deckwork = deckwork.substr(2);
                                --i;
                            }
                            else if (deckwork[len-1] == '6')
                            {
                                deckwork = deckwork.substr(1,len-2);
                                --i;
                            }
                        }
                        else
                        {
                            if (deckwork[i+1] == '6')
                            {
                                deckwork = deckwork.substr(0,i) + deckwork.substr(i+2);
                            	--i;
                            }
                            else if (deckwork[i-1] == '6')
                            {
                                deckwork = deckwork.substr(0,i-1) + deckwork.substr(i+1);
                            	i-=2;
                            }
                        }
                    	//cout << deckwork[i] << deckwork[i-1];    
                    break;
                    case '8':
                        //cout << "-8 ";
                        if (i == 0)
                        {
                            if (deckwork[i+1] == '5')
                            {
                                deckwork = deckwork.substr(2);
                                --i;
                            }
                            else if (deckwork[len-1] == '5')
                            {
                                //cout << "Here";
                                deckwork = deckwork.substr(1,len-2);
                                --i;
                                //cout << "#" << deckwork << "#";
                            }
                        }
                        else
                        {
                            if (deckwork[i+1] == '5')
                            {
                                deckwork = deckwork.substr(0,i) + deckwork.substr(i+2);
                            	--i;
                            }
                            else if (deckwork[i-1] == '5')
                            {
                                deckwork = deckwork.substr(0,i-1) + deckwork.substr(i+1);
                            	i-=2;
                            }
                        }
                        break;
                    case '9':
                        //cout << "-9 ";
                        if (i == 0)
                        {
                            if (deckwork[i+1] == '4')
                            {
                                deckwork = deckwork.substr(2);
                                --i;
                            }
                            else if (deckwork[len-1] == '4')
                            {
                                deckwork = deckwork.substr(1,len-2);
                                --i;
                            }
                        }
                        else
                        {
                            if (deckwork[i+1] == '4')
                            {
                                deckwork = deckwork.substr(0,i) + deckwork.substr(i+2);
                            	--i;
                            }
                            else if (deckwork[i-1] == '4')
                            {
                                deckwork = deckwork.substr(0,i-1) + deckwork.substr(i+1);
                            	i-=2;
                            }
                        }
                        break;
                    case 'T':
                        //cout << "-T " << endl;
                        if (i == 0)
                        {
                            if (deckwork[i+1] == '3')
                            {
                                deckwork = deckwork.substr(2);
                                --i;
                            }
                            else if (deckwork[len-1] == '3')
                            {
                                deckwork = deckwork.substr(1,len-2);
                                --i;
                            }
                        }
                        else
                        {
                            if (deckwork[i+1] == '3')
                            {
                                deckwork = deckwork.substr(0,i) + deckwork.substr(i+2);
                            	--i;
                            }
                            else if (deckwork[i-1] == '3')
                            {
                                deckwork = deckwork.substr(0,i-1) + deckwork.substr(i+1);
                            	i-=2;
                            }
                        }
                        break;
                    case 'J':
                        //cout << "-J ";
                        if (i == 0)
                        {
                            if (deckwork[i+1] == '2')
                            {
                                deckwork = deckwork.substr(2);
                                --i;
                            }
                            else if (deckwork[len-1] == '2')
                            {
                                deckwork = deckwork.substr(1,len-2);
                                --i;
                            }
                        }
                        else
                        {
                            if (deckwork[i+1] == '2')
                            {
                                deckwork = deckwork.substr(0,i) + deckwork.substr(i+2);
                            	--i;
                            }
                            else if (deckwork[i-1] == '2')
                            {
                                deckwork = deckwork.substr(0,i-1) + deckwork.substr(i+1);
                            	i-=2;
                            }
                        }
                        break;
                    case 'Q':
                        //cout << "-Q ";
                        if (i == 0)
                        {
                            if (deckwork[i+1] == 'A')
                            {
                                deckwork = deckwork.substr(2);
                                --i;
                            }
                            else if (deckwork[len-1] == 'A')
                            {
                                deckwork = deckwork.substr(1,len-2);
                                --i;
                            }
                            
                        }
                        else
                        {
                            if (deckwork[i+1] == 'A')
                            {
                                deckwork = deckwork.substr(0,i) + deckwork.substr(i+2);
                            	--i;
                            }
                            else if (deckwork[i-1] == 'A')
                            {
                                deckwork = deckwork.substr(0,i-1) + deckwork.substr(i+1);
                            	i-=2;
                            }
                        }
                    	//cout << "~" << deckwork << "~";    
                   		break;
                    default:
                        break;

                }
                
            }
            //cout << "*" << deckwork << "*";
            len = deckwork.length();
            if ((((deckwork[0]-'0') + (deckwork[len-1]-'0')) != 13) && (deckwork.find("K") == string::npos) && !(deckwork[0] == 'A' && deckwork[len-1] == 'Q') && !(deckwork[0] == 'Q' && deckwork[len-1] == 'A') && !(deckwork[0] == '2' && deckwork[len-1] == 'J') && !(deckwork[0] == 'J' && deckwork[len-1] == '2') && !(deckwork[0] == '3' && deckwork[len-1] == 'T') && !(deckwork[0] == 'T' && deckwork[len-1] == '3'))
                possible = false;
            
        }	
		return deckwork.length();
	}
};