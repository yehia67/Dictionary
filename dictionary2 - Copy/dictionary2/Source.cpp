#include <iostream>
#include<map>
#include<string>
#include<fstream>
using namespace std;


void translate(int choice)
{
	ifstream source, meaning;
	if (choice == 1)
	{
		source.open("languages\\eng to french.txt");
		meaning.open("languages\\eng to french meanings.txt");
		if (source.fail()) {
			cerr << "Error Opening english text file" << endl;
			exit(1);
		}
		if (meaning.fail()) {
			cerr << "Error Opening frensh text file" << endl;
			exit(1);
		}
	}
	else if (choice == 2)
	{
		source.open("languages\\fra to eng.txt");
		meaning.open("languages\\fra to eng meanings.txt");
		if (source.fail()) {
			cerr << "Error Opening frensh text file" << endl;
			exit(1);
		}
		if (meaning.fail()) {
			cerr << "Error Opening english text file" << endl;
			exit(1);
		}
	}
	else if (choice == 3)
	{
		source.open("languages\\eng to german.txt");
		meaning.open("languages\\eng to german meanings.txt");
		if (source.fail()) {
			cerr << "Error Opening english text file" << endl;
			exit(1);
		}
		if (meaning.fail()) {
			cerr << "Error Opening German text file" << endl;
			exit(1);
		}
	}

	else if (choice == 4)
	 {
		source.open("languages\\german to eng.txt");
		meaning.open("languages\\\german to eng meanings.txt");
		if (source.fail()) {
			cerr << "Error Opening german text file" << endl;
			exit(1);
		}
		if (meaning.fail()) {
			cerr << "Error Opening english text file" << endl;
			exit(1);
		}
	}
	else if(choice == 5)
	{
		source.open("languages\\eng-to-spa.txt");
		meaning.open("languages\\\eng-to-spa-meaningsssss.txt");
		if (source.fail()) {
			cerr << "Error Opening english text file" << endl;
			exit(1);
		}
		if (meaning.fail()) {
			cerr << "Error Opening spanish text file" << endl;
			exit(1);
		}
	}
	else if(choice == 6)
	{
		source.open("languages\\spa-to-eng.txt");
		meaning.open("languages\\\spa-to-eng-meanings.txt");
		if (source.fail()) {
			cerr << "Error Opening english text file" << endl;
			exit(1);
		}
		if (meaning.fail()) {
			cerr << "Error Opening spanish text file" << endl;
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
				cout << "if you want to add a new word presse 1" << endl;
				int y;
				cin >> y;
				if (y == 1)
				{
					add(choice);
				}

			}

		}

		cout << "Do you want to translate another word (y or n)" << endl;
		cin >> c;
		if (c != 'y' && c != 'Y') flag = 0;

	}
	source.close();
	meaning.close();
}
void add(int y) {
	ofstream source, meaning;
	string txtfile,newword;
	if (y == 1)
	{
		source.open("languages\\eng to french.txt");
		meaning.open("languages\\eng to french meanings.txt");
		cout << "please enter a world in the English language library" << endl;
		cin >> newword;
		source << newword << endl;
		cout << "please enter a world in the Frensh language library" << endl;
		cin >> newword;
		meaning << newword << endl;
		source.close;
		meaning.close;
	}
	if (y == 2)
	{
		source.open("languages\\fra to eng.txt");
		meaning.open("languages\\fra to eng meanings.txt");
		cout << "please enter a world in the Frensh language library" << endl;
		cin >> newword;
		source << newword << endl;
		cout << "please enter a world in the English language library" << endl;
		cin >> newword;
		meaning << newword << endl;
		source.close;
		meaning.close;

	}
	if (y == 3)
	{
		source.open("languages\\eng to german.txt");
		meaning.open("languages\\eng to german meanings.txt");
		cout << "please enter a world in the English language library" << endl;
		cin >> newword;
		source << newword << endl;
		cout << "please enter a world in the German language library" << endl;
		cin >> newword;
		meaning << newword << endl;
		source.close;
		meaning.close;
	}
	if (y == 4)
	{
		source.open("languages\\german to eng.txt");
		meaning.open("languages\\\german to eng meanings.txt");
		cout << "please enter a world in the German language library" << endl;
		cin >> newword;
		source << newword << endl;
		cout << "please enter a world in the English language library" << endl;
		cin >> newword;
		meaning << newword << endl;
		source.close;
		meaning.close;

	}
}
void spellCheker(string s, int x)
{
	ifstream refrence;
	string open;
	if (x == 1)
	{
		open = "languages\\eng to french.txt";
	}
	if (x == 2)
	{
		open = "languages\\fra to eng.txt";
	}
	if (x == 3)
	{
		open = "languages\\german to eng.txt";
	}
	if (x == 4)
	{
		open = "languages\\german to eng.txt";
	}
	if (x == 5)
	{
	open = "languages\\spa-to-eng.txt";
	}
	string words;
	int i = 0;
	while (!refrence.eof())
	{
		refrence >> words;
		int szS = s.length();
		int szW = words.length();
		if ((words.length() == s.length() || words.length()+1 == s.length() || words.length()-1 == s.length()) && (words[0] == s[0]) && (words[1] == s[1]) && (words[szW/2] == s[szS/2] || words[szW / 2 + 1] == s[szS / 2 + 1] || words[szW / 2 - 1] == s[szS / 2 - 1]))
		{
			i++;
			cout << words << endl;
			break;
		}
		if (i == 0)
		{
			cout << "sorry we didn t find that word in hour library" << endl;
		}
	}
}
int main() {

	
	
	int x;
	cout << "Enter 0 if you want to check spelling of a world" << endl;
	cout << "Enter 1 English to French" << endl;
	cout << "Enter 2 Frensh to English" << endl;
	cout << "Enter 3 English to German" << endl;
	cout << "Enter 4 German to English" << endl;
	cout << "Enter 5 English to Spanish" << endl;
	cout << "Enter 6 Spanish to English" << endl;
	
	cin >> x;
	if (x != 0)
	{
		translate(x);
	}
	else
	{
		int w;
		cout << "Enter 1 English " << endl;
		cout << "Enter 2 Frensh " << endl;
		cout << "Enter 3  German" << endl;
		cout << "Enter 4 Spanish" << endl;
		cin >> w;
		string word;
		cout << "Enter the word that i want to check it spelling" << endl;
		cin >> word;
		spellCheker(word, w);
	}

	return 0;
}
