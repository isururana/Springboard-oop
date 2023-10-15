#include "libraries.h"
#include "Book.h"
#include "AudioBook.h"
#include "BookShop.h"

int main()
{
    int noOfBooks = 1;
    int typeOfBook;

    Book* c1;
    AudioBook* c2;

    //commented out as array has not been implemented
    /*
    cout<<"How many books would you like to enter?"<<endl;
    cin>>noOfBooks;
    */

    for (int i = 0; i < noOfBooks; i++)
    {
        do
        {
            cout<<"What type of book do you want to enter?"<<endl;
            cout<<"For book, enter 1"<<endl;
            cout<<"For Audio Book, enter 2"<<endl;
            cin>>typeOfBook;

            if (typeOfBook == 1 || typeOfBook ==2)
            {
                if (typeOfBook == 1)
                {
                    string title, author;
                    
                    cout<<"Enter title of book"<<endl;
                    cin.ignore();
                    getline(cin,title);

                    cout<<"Enter Author of book"<<endl;
                    getline(cin,author);

                    c1 = new Book(title,author);
                }
                if (typeOfBook == 2)
                {
                    string title, author, voice_actor;
                    
                    cout<<"Enter title of book"<<endl;
                    cin.ignore();
                    getline(cin,title);

                    cout<<"Enter Author of book"<<endl;
                    getline(cin,author);

                    cout<<"Enter Voice Actor of book"<<endl;
                    getline(cin,voice_actor);

                    c2 = new AudioBook(title,author,voice_actor);
                }

                break;
            }
            else
            {
                continue;
            }
        } while (true);
    }

    cout<<"\n";
    cout<<"All book details are as follows,"<<endl;
    
    //loop to print all books
    for (int i = 0; i < noOfBooks; i++)
    {
        if(typeOfBook == 1)
        {
            c1->printDescription();
        }
        if(typeOfBook == 2)
        {
            c2->printDescription();
        }
    }
    
    delete c1,c2;

    return 0;
}