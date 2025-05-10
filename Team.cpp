#include "Team.h"
#include <iostream>
#include <iomanip>  
#include <windows.h>
#include "ColorUtil.h"
#include <sstream>
void Team::assignHeroToPosition(const std::string& position, Hero* hero) {
    positionToHero[position] = hero;
}

void Team::getFormattedTeam(std::vector<std::string>& lines, const std::string& teamName) const {


    for (const auto& [position, hero] : positionToHero) {
        std::ostringstream line;
        line << "\033[0m" << std::left << std::setw(8) << position << ":"
            << std::setw(15) << hero->getName()
            << "[" << hero->getRole() << "]";
        lines.push_back(line.str());
    }
}

