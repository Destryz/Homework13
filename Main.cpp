#include <iostream>
#include <math.h>
#include <string.h>


class Player
{
public:
	void SetName()
	{
		std::cout << "Input player name" << '\n';
		std::cin >> name;
	}
	void SetScore()
	{
		std::cout << "Input player score" << '\n';
		std::cin >> score;
	}
	int GetScore()
	{
		return score;
	}
	std::string GetName()
	{
		return name;
	}
private:
	std::string name;
	int score;
};

int main()
{  
	int n;
	std::cout << "Input count of players" << '\n';
	std::cin >> n;

	Player *players{ new Player[n] };
	
	for (int i = 0; i < n; i++)
	{
		players[i].SetName();
		players[i].SetScore();

	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < (n-1); j++) {
			if (players[j].GetScore() < players[j + 1].GetScore()) {
				Player bufplayer = players[j]; 
				players[j] = players[j + 1]; 
				players[j + 1] = bufplayer; 
			}
		}
	}

	std::cout << "an array in sorted form" << '\n';

	for (int i = 0; i < n; i++)
	{
		std::cout << "Name: " << players[i].GetName() << " || Score: " << players[i].GetScore() <<'\n';
	}

	delete[] players;
}