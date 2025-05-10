// Project1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <unordered_map>
#include <iostream>
#include "Hero.h"
#include <random>
#include <unordered_set>
#include "HeroFactory.h"
#include <set>
#include <iomanip>


std::string toLower(const std::string& str) {
    std::string lower = str;
    std::transform(lower.begin(), lower.end(), lower.begin(), ::tolower);
    return lower;
}

Hero* autoPickHero(const std::string& role, const std::set<std::string>& picked) {
    const auto& pool = HeroFactory::getHeroPool();
    std::vector<std::string> available;
    for (const auto& h : pool.at(role)) {
        if (!picked.count(h)) available.push_back(h);
    }
    if (available.empty()) return nullptr;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, available.size() - 1);
    return HeroFactory::createHero(role, available[dis(gen)]);
}

int main()
{
    std::unordered_map<std::string, std::string> defaultLaneRoles = {
             {"EXP", "Fighter"},
             {"Jungle", "Assassin"},
             {"Mid", "Mage"},
             {"Gold", "Marksman"},
             {"Roam", "Tank"}
    };

    std::cout << "\033[1;36m" << std::setfill('*') << std::setw(85) << "\033[0m\n";
    std::cout << "\n\033[1;36m"
        << std::setfill('=') << std::setw(35) << "\033[0m"
        << "\033[1;36m MLBB Hero Drafting \033[0m" << "\033[1;36m"
        << std::setfill('=') << std::setw(35) << "\033[0m\n\n";
    std::cout << "\033[1;36m" << std::setfill('*') << std::setw(85) << "\033[0m\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
