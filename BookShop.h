#pragma once
#include "libraries.h"
#include "Book.h"
#include "AudioBook.h"

class BookShop
{
private:
    BookShop* bookCollection;
    int noOfBooksAdded = 0;
public:
    BookShop();

    void addBook(Book book);
    void addBook(AudioBook audioBook);

    ~BookShop();
};
