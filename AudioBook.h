#pragma once
#include "libraries.h"
#include "Book.h"

class AudioBook : public Book
{
private:
    string voiceActor;
public:
    AudioBook(string title, string authorName, string voiceActor);

    string getVoiceActor();
    void setVoiceActor(string voiceActor);
    void printDescription();

    ~AudioBook();
};