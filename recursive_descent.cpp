#include<iostream>
#include<string>
#include<map>
#include<vector>

using namespace std;

map<char, vector<string> > p;

bool rdp(string input, int index, string production)
{
	if(input[index] == '$' && (production.length() == 0 || (production.length() == 1 && production[0] == '#')))
		return true;
	else if (input[index] == '$')
		return false;
	else if (production.length() == 0)
		return false;
	else if((int)production[0] >= 97 && (int)production[0] <= 122)
	{
		if(input[index] == production[0])
			return rdp(input, index+1, production.substr(1));
		return false;
	}
	else
	{
		vector<string>::iterator it;
		for(it = p[production[0]].begin(); it != p[production[0]].end(); it++)
		{
			if((*it) == string("#"))
			{
				if(rdp(input, index, production.substr(1)))
					return true;
			}
			if(rdp(input, index, (*it) + production.substr(1)))
				return true;
		}
		return false;
	}
}

int main()
{
	vector<char> nont;
	cout<<"Enter all the non terminals present in the grammar"<<endl;
	int c = 1;
	char temp;
	while(c)
	{
		cout<<"Enter a non-terminal symbol in the grammar"<<endl;
		cin>>temp;
		nont.push_back(temp);
		cout<<"Enter 1 to continue entering non-terminals/Else enter 0"<<endl;
		cin>>c;
	}
	cout<<"NOTE: # is the epsilon symbol"<<endl;
	vector<char>::iterator it;
	for(it = nont.begin(); it != nont.end(); it++)
	{
		cout<<"Please enter the productions for non-terminal "<<(*it)<<endl;
		c = 1;
		vector<string> temp1;
		while(c)
		{
			string temp2;
			cout<<"Enter a production"<<endl;
			cin>>temp2;
			temp1.push_back(temp2);
			cout<<"Enter 1 to continue entering productions for the non-terminal/ Else enter 0"<<endl;
			cin>>c;
		}
		p[(*it)] = temp1;
	}
	char start;
	cout<<"Enter the starting symbol for the grammar"<<endl;
	cin>>start;
	string input;
	c = 1;
	while(c)
	{
		cout<<"Enter a string to be parsed"<<endl;
		cin>>input;
		input += string(1, '$');
		if(rdp(input, 0, string(1, start)))
			cout<<"String successfully parsed"<<endl;
		else
			cout<<"Parsing failed"<<endl;
		cout<<"To continue parsing other strings, press 1 / else press 0"<<endl;
		cin>>c;
	}
	return 0;
}