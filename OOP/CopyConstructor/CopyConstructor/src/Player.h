#pragma once
#include <iostream>
#include <string>
class Player
{
	static int num_players;
	std::string name;
	int health;
	int xp;
public:
	std::string get_name() const { return name; }
	int get_health() const { return health; }
	int get_xp() const { return xp; }
	static int get_num_player();

	Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);

	// Copy constructor
	Player(const Player& source);

	// Destructor
	~Player();
};

