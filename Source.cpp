#include<fstream>
#include<string>
#include<iostream>

int main()
{
	std::ifstream text;
	std::string path;
	char inStr[10];
	std::cout << "Enter path to the file \"Text.txt\": ";
	std::cin >> path;
	text.open(path + "\\Text.txt", std::ios::binary);
	if(text.is_open())
	{
		while (!text.eof())
		{
			text.read(inStr, sizeof(inStr));
			for (int i = 0; i < text.gcount(); i++)
				std::cout << inStr[i];
		}
	}
	text.close();
}