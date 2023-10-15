#include "Book.h"

//constructor
Book::Book(string title, string authorName)
{
    this->title = title;
    this->authorName = authorName;
}

//getters
string Book::getTitle()
{
    return this->title;
}
string Book::getAuthorName()
{
    return this->authorName;
}

//setters
void Book::setTitle(string title)
{
    this->title = title;
}
void Book::setAuthorName(string authorName)
{
    this->authorName = authorName;
}

//methods
void Book::printDescription()
{
    cout<<"Title: "<<this->title<<endl;
    cout<<"Author Name: "<<this->authorName<<endl;
}

//destructor
Book::~Book()
{
    this->title = "";
    this->authorName = "";
}