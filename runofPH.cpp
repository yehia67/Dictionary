#include <iostream>
#include<bits/stdc++.h>
#include<string>
#include<fstream>
using namespace std;
int main(){
	ifstream englishword,arabicword;
	englishword.open("english.txt");
	arabicword.open("arabic.txt");	
	int x;
//	printf("please enter 1 if u want to translate from English to Arabic or enter 2 if u want to translate from Arabic to English \n ");
    cout<<"enter 1 English to arabic"<<endl;
	cout<<"enter 2 arabic to english"<<endl;	
	cin>>x;
	while(x != 1 && x!= 2)
{
	printf("Error enter 1 or 2 Only!! \n ");
	scanf("%d",&x);
		}		
		printf("enter the word\n ");
		string s;
		cin>>s;
		map <string,string> m;
		string englishItem,arabicItem;
		
		while(!(englishword.eof()) && !(arabicword.eof()))
{
	englishword >> englishItem;
	arabicword >> arabicItem;
	if(x == 1)
	{
		m[englishItem] = arabicItem;
	}
else
{
	m[arabicItem] = englishItem ;
}
}
 cout<<m[s]<<endl;
	return 0;
}
