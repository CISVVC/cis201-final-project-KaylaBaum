/**
 *  File: word.h
 *  Developer: Kayla Baum (Modified from Paul Tonning's template for word.h and word.cpp)
 *  Email: 0262229@student.vvc.edu
 *  Purpose: Class to hold a word and a count of how many times the word has been said in a text file.
**/

#ifndef WORDCOUNT_H
#define WORDCOUNT_H
#include <iostream>
#include <vector>
#include <string>

class WordCount
{
public:
    WordCount(std::string word)
    {
        m_word = word;
        m_count = 1;
    }
    void add_line(int line)
    {
        m_line.push_back(line);
    }
    void add_count(int count)
    {
        m_count++;
    }
    void print() const // The fruition of the class's purpose.
    {
        std::cout << "Word: " << m_word << std::endl
                  << "Count: " << m_count << std::endl;
    }
private:
    int m_count;
    std::string m_word;
    std::vector<int> m_line;
};

#endif
