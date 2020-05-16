// problem2.cpp
#include "problem2.hpp"
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <cmath>


std::map<std::string, unsigned int> countWordFrequencies(
    const std::vector<std::string>& word)
{
    std::map<std::string, unsigned int> Map;
    for (auto i = word.begin(); i != word.end(); i++)
    {
        Map[*i] += 1;
    }
    return Map;
}


std::string formatWordFrequencies(
    const std::map<std::string, unsigned int>& frequencies)
{
    // THIS WHOLE EXERCISE IS SOOOO USELESS!!! I HAVE PROJECT3 TO WORK ON :((
    std::string s = "";
    std::string string_max_val = "";
    unsigned int max_int = 0;
    unsigned int max_string = 0;
    for (auto const& [key,val] : frequencies)
    {
        if ((val) > max_int)
        {
            max_int = val;
            string_max_val = key;
        }
        if (key.length() > max_string)
        {
            max_string = key.length();
        }
    }


    int frequency_size = std::to_string(max_int).length();

    for (auto const& [key, val] : frequencies)
    {

        std::string temp ="";
        std::string temp_int = "";

        for (int i=0; i<max_string-key.length();++i)
        {
            temp+= " ";    
        } 

        for (int i=0; i<=frequency_size-std::to_string(val).length();++i)
        {
            temp_int+= " ";    
        }

        
        s+= key + temp +" "+ temp_int + std::to_string(val) +  "\n";
    }
    return s;
}
