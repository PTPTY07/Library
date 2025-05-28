#include <iostream>
#include <fstream>

int length(const std::string& a, const std::string& b);
void absoluteWord(std::string& word);
int countWordFile(const std::string& path, const std::string& word);
int countWordFileAll(const std::string& path, const std::string& word);

int length(const std::string& a, const std::string& b)
{
	if(a.size() > b.size())
	{
		return -1;		
	}
	if(a.size() < b.size())
	{
		return 1;
	}
	return 0;
}

int countWordFile(const std::string& path, const std::string& word)
{
	int cont = 0;
	std::string temp;
	std::ifstream in(path);
	while(in >> temp)
	{
		if(temp == word)
		{
			cont++;
		}
	}
	return cont;
}

void absoluteWord(std::string& word)
{
	if(word.back() == '.' || word.back() == ',')
		word.pop_back();
	for(int i=0; i<word.size(); i++)
	{
		if(word[i] <= 'Z' && word[i] >= 'A')
		{
			word[i] += 32;
		}
	}
}

int countWordFileAll(const std::string& path, const std::string& word)
{
	int cont = 0;
	std::string temp;
	std::ifstream in(path);

	std::string m_word = word;
	absoluteWord(m_word);
	while(in >> temp)
	{
		absoluteWord(temp);
		if(temp == m_word)
			cont++;
	}
	return cont;
}

int main()
{
	const std::string path = "prova.txt";
	std::string word;
	std::cin >> word;
	return 0;
}
