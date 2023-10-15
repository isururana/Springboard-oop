#include "BookShop.h"

//constructor
BookShop::BookShop()
{
    BookShop* bookCollection = (BookShop*)(malloc(sizeof(bookCollection)));
}

//methods
void BookShop::addBook(Book book)
{
    this->noOfBooksAdded++;
}
void BookShop::addBook(AudioBook audioBook)
{
    this->noOfBooksAdded++;
}

//destructor
BookShop::~BookShop()
{
    delete bookCollection;
}