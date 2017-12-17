/**
 *  File: concordance.h
 *  Developer: Kayla Baum (Modified from Paul Tonning's template for concordance.h and concordance.cpp.
 *  Email: 0262229@student.vvc.edu
 *  Purpose: Class to hold list of all words that occur in a text file.
**/

#ifndef CONCORDANCE_H
#define CONCORDANCE_H
#include "wordcount.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

class Concordance
{
public:
    Concordance(std::string filename)
    {
        m_filename = filename;
    }
    void parse()
    {
        std::ifstream file(m_filename.c_str());
        while(!file.eof())
        {
            std::string word = next_word(file);

            // To see words as they are printed out
            // Words can have punct attached to them.
            //
            //
            std::cout << word << std::endl;
        }
    }
    std::string next_word(std::ifstream &input)
    {
        std::string word;
        for(;;)
        {
            char c;
            input.get(c);
            if(input.eof())
                break;
            if(!is_whitespace(c))
            {
                word += c;
            }
            else
            {
                eat_whitespace(input);
                break;
            }
        }
        return word;
    }
    bool is_whitespace(char c)
    {
        return (c == ' ' || c == '\n' || c == '\t');
    }
    void eat_whitespace(std::ifstream &input)
    {
        for(;;)
        {
            char c;
            input.get(c);
            if(input.eof())
                break;
            if(!is_whitespace(c))
            {
                input.putback(c);
                break;
            }
        }
    }
    int find_word(std::string word)
    {
        // Search Word vector & return the index in the vector.
    }
    void print()
    {
        // Print concordance.
    }
private:
    std::vector<WordCount> m_word_stats;
    std::string m_filename;
};

#endif
