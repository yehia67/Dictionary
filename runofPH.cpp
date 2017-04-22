#include <iostream>
#include<bits/stdc++.h>
#include<string>
#include<fstream>
using namespace std;
int main(){
	ifstream englishword,frenshword;
	englishword.open("english.txt");
	frenshword.open("frensh.txt");	
	if(englishword.fail()){
		cerr <<"Error Opening english text file"<<endl;
		exit(1);
	}
	if(frenshword.fail()){
		cerr <<"Error Opening Frensh text file"<<endl;
		exit(1);
	}
	int x;
//	printf("please enter 1 if u want to translate from English to Arabic or enter 2 if u want to translate from Arabic to English \n ");
    cout<<"enter 1 English to frensh"<<endl;
	cout<<"enter 2 Frensh to english"<<endl;	
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
		string englishItem,frenchItem;
		
		while(!(englishword.eof()) && !(frenshword.eof()))
{
	englishword >> englishItem;
	getline(frenshword,frenchItem);
	if(x == 1)
	{
		m[englishItem] = frenchItem;
	}
else
{
	m[frenchItem] = englishItem ;
}
}
 cout<<m[s]<<endl;
 englishword.close();
 frenshword.close();
	return 0;
}
