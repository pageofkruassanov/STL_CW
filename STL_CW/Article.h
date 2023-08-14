#pragma once
#include <iostream>
class Article
{
	int id;
	std::string title;
	std::string description;

public:
	Article(int id, std::string title, std::string description) : id{ id }, title{ title }, description{ description } {};
	friend std::ostream& operator<<(std::ostream& out, Article& obj);
};

