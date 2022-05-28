#include <iostream>
#include "Movies.h"

void increment_watched(Movies& movies, std::string name);
void add_movie(Movies& movies, std::string name, std::string rating, int watched);

int main() {
	Movies list_of_movies;

	list_of_movies.display();

	add_movie(list_of_movies, "Star Wars", "PG", 4);
	add_movie(list_of_movies, "Lord of The Rings", "PG", 10);
	add_movie(list_of_movies, "Avatar", "PG", 1);

	list_of_movies.display();

	add_movie(list_of_movies, "Star Wars", "PG", 5);
	add_movie(list_of_movies, "Doctor Strange", "PG", 1);

	list_of_movies.display();

	increment_watched(list_of_movies, "XXXX");

	return 0;
}



void increment_watched(Movies& movies, std::string name) {
	if (movies.increment_watched(name)) {
		std::cout << name << " watch incremented" << std::endl;
	}
	else {
		std::cout << name << " not found " << std::endl;
	}
}

void add_movie(Movies& movies, std::string name, std::string rating, int watched) {
	if (movies.add_movie(name, rating, watched)) {
		std::cout << name << " added" << std::endl;
	}
	else {
		std::cout << name << " already exists." << std::endl;
	}
}