// problem2.cpp
#include "problem2.hpp"
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>

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
    std::string s = "";
    for (auto const& [key, val] : frequencies)
    {
        std::cout << key << val  << std::endl;
    }
    return s;
}
