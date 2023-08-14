#include <iostream>
#include <vector>
#include <algorithm>
#include "Article.h"

using namespace std;

int main()
{
    vector<Article> articles;
    articles.push_back(Article(30, "test", "test"));
    articles.push_back(Article(45, "Ok", "Ok"));
    vector<Article>::iterator it;
    for (it = articles.begin(); it < articles.end(); it++)
        cout << *it;
}
