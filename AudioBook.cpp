#include "AudioBook.h"

//constructor
AudioBook::AudioBook(string title, string authorName, string voiceActor):Book(title, authorName)
{
    this->voiceActor = voiceActor;
}

//getters
string AudioBook::getVoiceActor()
{
    return this->voiceActor;
}

//setters
void AudioBook::setVoiceActor(string voiceActor)
{
    this->voiceActor = voiceActor;
}

//methods
void AudioBook::printDescription()
{
    cout<<"Title: "<<this->title<<endl;
    cout<<"Author: "<<this->authorName<<endl;
    cout<<"Voice Actor: "<<this->voiceActor<<endl;
}

//destructor
AudioBook::~AudioBook()
{
    this->title = "";
    this->authorName = "";
    this->voiceActor = "";
}
