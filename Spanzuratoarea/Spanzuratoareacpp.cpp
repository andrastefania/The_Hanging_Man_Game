#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<cstring>
#include <cstdlib> 
#include <ctime>
void Read(std::ifstream& file, std::string& input)
{
	int total = 0,contor=0;
	while (file >> input)
		total++;
	file.clear();
	file.seekg(0);
	srand(time(0));
	int Random = (std::rand() % total) + 1;
	while (file >> input)
	{
		contor++;
		if (contor == Random)
		{
			break;
		}
	}
	
 }
void SaveData(std::string& input, std::vector<char>& track)
{
	track.resize(input.length());
	for (int i = 0;i < input.length();i++)
		track[i] = input[i];
}
void game(std::string& input, std::vector<char>& track,std::string& play)
{
	std::vector<char>letters;
	letters.resize(input.size());
	int lenght = input.length(),good=0,mistakes=0,chances=9; 
	std::cout << "The word has " << lenght << " letters." << std::endl;
	for (int i = 0;i < lenght;i++)
	{
		if (i == 0)
		{
			std::cout << track[i] << " ";
			letters[i] = track[i];
		}
		else
		{
			std::cout << " _ ";
			letters[i] = '_';
		}
	}
	std::cout << std::endl;
	char letter;
	while (good == 0)
	{
		int found = 0;
		std::cout << "Introduce a letter: ";
		std::cin >> letter;
		for (int i = 0;i < track.size();i++)
		{
			if (track[i] == letter && letters[i]=='_')
			{
				letters[i] = track[i];
				found = 1;
			}
			std::cout << " " << letters[i] << " ";
		}
		if (found == 0)
		{
			mistakes++;
			chances--;
			std::cout << std::endl;
			std::cout << "Remaining Chances: " << chances;
			std::cout << std::endl;
			switch (mistakes) {
			case 1:
				std::cout << " _________\n";
				break;
			case 2:
				std::cout << " _________\n";
				std::cout << "         |\n";
				std::cout << "         |\n";
				break;
			case 3:
				std::cout << " _________\n";
				std::cout << " |       |\n";
				std::cout << " |       |\n";
				std::cout << " |        \n";
				std::cout << " |        \n";
				std::cout << " |        \n";
				std::cout << " |        \n";
				std::cout << " |        \n";
				std::cout << " |        \n";
				std::cout << " |        \n";
				std::cout << " |        \n";
				std::cout << " |        \n";
				std::cout << " ~~~      \n";
				break;
			case 4:
				std::cout << " _________\n";
				std::cout << " |       |\n";
				std::cout << " |       |\n";
				std::cout << " |     ~~~~~ \n";
				std::cout << " |     |'_'| \n";
				std::cout << " |     ~~~~~  \n";
				std::cout << " |        \n";
				std::cout << " |        \n";
				std::cout << " |        \n";
				std::cout << " |        \n";
				std::cout << " |        \n";
				std::cout << " |        \n";
				std::cout << " ~~~      \n";
				break;
			case 5:
				std::cout << " _________\n";
				std::cout << " |       |\n";
				std::cout << " |       |\n";
				std::cout << " |     ~~~~~ \n";
				std::cout << " |     |'_'| \n";
				std::cout << " |     ~~~~~  \n";
				std::cout << " |       | \n";
				std::cout << " |       | \n";
				std::cout << " |       | \n";
				std::cout << " |       | \n";
				std::cout << " |       | \n";
				std::cout << " |        \n";
				std::cout << " ~~~      \n";
				break;
			case 6:
				std::cout << " _________\n";
				std::cout << " |       |\n";
				std::cout << " |       |\n";
				std::cout << " |     ~~~~~ \n";
				std::cout << " |     |'_'| \n";
				std::cout << " |     ~~~~~  \n";
				std::cout << " |      /| \n";
				std::cout << " |     / | \n";
				std::cout << " |    /  | \n";
				std::cout << " |       | \n";
				std::cout << " |       | \n";
				std::cout << " |        \n";
				std::cout << " ~~~      \n";
				break;
			case 7:
				std::cout << " _________\n";
				std::cout << " |       |\n";
				std::cout << " |       |\n";
				std::cout << " |     ~~~~~ \n";
				std::cout << " |     |'_'| \n";
				std::cout << " |     ~~~~~  \n";
				std::cout << " |      /|/ \n";
				std::cout << " |     / | \n";
				std::cout << " |    /  | \n";
				std::cout << " |       | \n";
				std::cout << " |       | \n";
				std::cout << " |        \n";
				std::cout << " ~~~      \n";
				break;
			case 8:
				std::cout << " _________\n";
				std::cout << " |       |\n";
				std::cout << " |       |\n";
				std::cout << " |     ~~~~~ \n";
				std::cout << " |     |'_'| \n";
				std::cout << " |     ~~~~~  \n";
				std::cout << " |      /|/ \n";
				std::cout << " |     / | \n";
				std::cout << " |    /  | \n";
				std::cout << " |       | \n";
				std::cout << " |      /| \n";
				std::cout << " |     /   \n";
				std::cout << " ~~~  /    \n";
				break;
			default:
				std::cout << " _________\n";
				std::cout << " |       |\n";
				std::cout << " |       |\n";
				std::cout << " |     ~~~~~ \n";
				std::cout << " |     |'_'| \n";
				std::cout << " |     ~~~~~  \n";
				std::cout << " |      /|/ \n";
				std::cout << " |     / | \n";
				std::cout << " |    /  | \n";
				std::cout << " |       | \n";
				std::cout << " |      /|/ \n";
				std::cout << " |     / / \n";
				std::cout << " ~~~  / /  \n";
				std::cout << std::endl;
				std::cout << std::endl;
				std::cout << "You Lost!\n";
				std::cout << "It was: " << input<<"\n";
				good = 1;
				break;
			}
		}
		else
		{
			std::cout << std::endl;
			std::string answer1, answer2;
			std::cout << "Do you know the word?";
			std::cin >> answer1;
			std::cout << std::endl;
			if (answer1 == "yes")
			{
				std::cout << "Please type the answer: ";
				std::cin >> answer2;
				if (answer2 == input)
				{
					std::cout << "It's correct!";
					good = 1;
				}
				else
					std::cout << "Wrong!"<<std::endl;
			}
			
		}
		
	}
	std::cout << std::endl;
	std::cout << "If you want a new game type yes,otherwize type no."<<std::endl;
	std::cin >> play;
	letters.clear();
}
int main()
{
	std::ifstream file1("Level1.txt");
	std::ifstream file2("Level2.txt");
	std::ifstream file3("Level3.txt");
	std::ifstream file4("Level4.txt");
	std::string input;
	std::vector<char> track;
	std::string play = "yes";
	int difficulty;
	std::cout << "Choose the dificulty level, a number between 1 and 4"<<std::endl;
	std::cin >> difficulty;
	do
	{
		switch (difficulty)
		{
		case 1:
			Read(file1, input);
			break;
		case 2:
			Read(file2, input);
			break;
		case 3:
			Read(file3, input);
			break;
		case 4:
			Read(file4, input);
			break;
		default:
			std::cout << "Error! The level doesn't exist.";
			play = "no";
			break;
		}
		SaveData(input, track);
		game(input, track,play);
		if (play == "no")
		{
			std::cout << std::endl;
			std::cout << "Thanks for playing! <3 ";
			break;
		}
		std::cout << "Choose the dificulty level, a number between 1 and 4" << std::endl;
		std::cin >> difficulty;
		track.clear();

	} while (play == "yes");
	file1.close();
	file2.close();
	file3.close();
	file4.close();
	return 0;
}