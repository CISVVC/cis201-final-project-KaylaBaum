/**
 *  File: concordance.cpp
 *  Developer: Kayla Baum (Modified from Paul Tonning's template.)
 *  Email: 0262229@student.vvc.edu
 *  Purpose: To implement concordance class member functions.
**/

#include "concordance.h"


Concordance::Concordance(std::string filename)
{
    m_filename = filename;
}

void Concordance::parse()
{
    std::ifstream file(m_filename.c_str());
    while(!file.eof())
    {
        std::string word = next_word(file);

        
        std::cout << word << std::endl;
    }
}
