#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t,act,rank,sev,mod,point;
	string origin,s;
	cin>>t;
	while(t--)
	{
		cin>>act;
		cin>>origin;
		if(origin=="INDIAN")
		mod=200;
		else
		mod=400;
		point=0;
		while(act--)
		{
			cin>>s;
			if(s=="CONTEST_WON")
			{
				cin>>rank;
				if(rank<20)
				point=point+300+(20-rank);
				else
				point+=300;
			}
			else if(s=="TOP_CONTRIBUTOR")
			point+=300;
			else if(s=="BUG_FOUND")
			{
				cin>>sev;
				point+=sev;
			}
			else if(s=="CONTEST_HOSTED")
			point+=50;
		}
		cout<<point/mod<<endl;
	}
	return 0;
}
