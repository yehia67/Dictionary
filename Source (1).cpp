#include <iostream>
#include<map>
#include<string>
#include<fstream>
using namespace std;


void translate( int choice)
{
	ifstream source, meaning;
	if (choice == 1)
	{
		source.open("languages\\eng to french.txt");
		meaning.open("languages\\eng to french meanings.txt");
		if(source.fail()){
		cerr <<"Error Opening english text file"<<endl;
		exit(1);
	}
	 if(meaning.fail()){
		cerr <<"Error Opening english text file"<<endl;
		exit(1);
	}
	}
	else if (choice==2)
	{
		source.open("languages\\fra to eng.txt");
		meaning.open("languages\\fra to eng meanings.txt");
		if(source.fail()){
		cerr <<"Error Opening english text file"<<endl;
		exit(1);
	}
	 if(meaning.fail()){
		cerr <<"Error Opening english text file"<<endl;
		exit(1);
	}
	}
	else if (choice==3)
	{
		source.open("languages\\eng to german.txt");
		meaning.open("languages\\eng to german meanings.txt");
		if(source.fail()){
		cerr <<"Error Opening english text file"<<endl;
		exit(1);
	}
	 if(meaning.fail()){
		cerr <<"Error Opening english text file"<<endl;
		exit(1);
	}
	}

	else if (choice==4)
	{
		source.open("languages\\german to eng.txt");
		meaning.open("languages\\\german to eng meanings.txt");
		if(source.fail()){
		cerr <<"Error Opening english text file"<<endl;
		exit(1);
	}
	 if(meaning.fail()){
		cerr <<"Error Opening english text file"<<endl;
		exit(1);
	}
	}
	else cout << "wrong choice " << endl;
	cout << "Please wait dictionary is loading" << endl;
	map <string, string> m;
	string word, meanings;

	while (!(source.eof()) && !(meaning.eof()))
	{
		getline(source, word);
		getline(meaning, meanings);
		
		m[word] = meanings;
	}

	string s;
	int flag = 1;
	char c = 'n';
	while (flag == 1) {
		cout << "Enter the word you desire to translate\n";

		cin >> s;

		if (m[s] != "")
			cout << m[s] << endl;
		else {
			s[0] = tolower(s[0]);
			if (m[s] != "") cout << m[s] << endl;
			else {
				s[0] = toupper(s[0]);
				if (m[s] != "")
					cout << m[s] << endl;
				else cout << "Sorry we dont know the meaning of this word" << endl;
			}

		}

		cout << "Do you want to translate another word (y or n)" << endl;
		cin >> c;
		if (c != 'y' && c != 'Y') flag = 0;

	}
	source.close();
	meaning.close();
}
void add(int y){
	
}
int main() {

	int x;
	cout << "Enter 1 English to French" << endl;
	cout << "Enter 2 Frensh to English" << endl;
	cout << "Enter 3 English to German" << endl;
	cout << "Enter 4 German to English" << endl;

	cin >> x;
	translate(x);
	
	return 0;
}

