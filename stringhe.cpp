#include <iostream>


int lenght(std::string& a, std::string& b)
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

int main()
{
	std::string a, b;
	std::cout << "Inserisci a b: ";
	std::cin >> a >> b;
	if(lenght(a, b) < 0)
	{
		std::cout << "a>";
	}
	else
		std::cout << "b>";
	int s = a.size();
	for(int i=0; i<s; i++)
	{
		std::cout << a[i] << std::endl;
	}

}
