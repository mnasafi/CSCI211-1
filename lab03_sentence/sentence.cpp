#include "sentence.h"
#include <iostream>

using namespace std;

Sentence::Sentence(string words)
{
    m_words = words;
}

void 
Sentence::print()
{
    cout << m_words << endl;
}

