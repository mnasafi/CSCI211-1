// The following prevent this file from being included more than once
#ifndef SENTENCE_H
#define SENTENCE_H

#include <string>

using namespace std;

class Sentence
{

    public:
        Sentence(string words);
        void print();
    private:
        string m_words;
}; // don't forget this ;


// part of the mechanism that prevents this file from being included multiple times
#endif
