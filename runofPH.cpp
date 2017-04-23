#include <iostream>
#include<bits/stdc++.h>
#include<string>
#include<fstream>
using namespace std;
void add(){
	ifstream addE,addF;
	addE.open("english.txt");
	addF.open("frensh.txt");
	
}
int main(){
	ifstream englishword,frenshword,englishGword,Germanword;
	englishword.open("english.txt");
	frenshword.open("frensh.txt");
	Germanword.open("german.txt");	
	englishGword.open("englishG.txt");
	if(englishword.fail()){
		cerr <<"Error Opening english text file"<<endl;
		exit(1);
	}
	if(frenshword.fail()){
		cerr <<"Error Opening Frensh text file"<<endl;
		exit(1);
	}
	if(Germanword.fail()){
		cerr <<"Error Opening german text file"<<endl;
		exit(1);
	}
	if(englishGword.fail()){
		cerr <<"Error Opening englishG text file"<<endl;
		exit(1);
	}
	int x;
//	printf("please enter 1 if u want to translate from English to Arabic or enter 2 if u want to translate from Arabic to English \n ");
    cout<<"enter 1 English to frensh"<<endl;
	cout<<"enter 2 Frensh to english"<<endl;
	cout<<"enter 3 English to German"<<endl;	
	cin>>x;
	while(x != 1 && x!= 2 && x != 3 )  
{
	printf("Error enter 1 2 or 3 Only!! \n ");
	scanf("%d",&x);
		}		
		printf("enter the word\n ");
		string s;
		cin>>s;
		map <string,string> m;
		string englishItem,forgeinItem;
		
		while(!(englishword.eof()) && !(frenshword.eof()))
{
	englishword >> englishItem;
	getline(frenshword,forgeinItem);
	if(x == 1)
	{
		m[englishItem] = forgeinItem;
	}
else if(x == 2)
{
	m[forgeinItem] = englishItem ;
}
}
while(!(englishGword.eof()) && !(Germanword.eof())){
	englishGword >> englishItem;
  getline(Germanword,forgeinItem);
	if(x == 3)
	{
		m[englishItem] = forgeinItem;
	}
}
 cout<<m[s]<<endl;
 englishword.close();
 frenshword.close();
	return 0;
}
