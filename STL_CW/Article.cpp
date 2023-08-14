#include "Article.h"

std::ostream& operator<<(std::ostream& out, Article& obj)
{
	out << "ID: " << obj.id << std::endl;
	out << "Title: " << obj.title << std::endl;
	out << "Description: " << obj.description << std::endl;
	return out;
}
