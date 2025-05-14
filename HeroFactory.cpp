#include "HeroFactory.h"

static std::unordered_map<std::string, std::vector<std::string>> heroPool = {
    {"Assassin", {"Lancelot", "Hayabusa", "Natalia", "Gusion", "Helcurt", "Saber", "Fanny", "LIng", "Karina", "Hanzo"}},
    {"Marksman", {"Lesley", "Brody", "Beatrix", "Miya", "Granger", "Bruno", "Moskov", "Kimmy", "Natan", "Ixia"}},
    {"Mage", {"Lylia", "Lunox", "Valir", "Kagura", "Gord", "Harith", "Alice", "Valentina", "Yve", "Kadita"}},
    {"Support", {"Angela", "Rafaela", "Estes", "Floryn", "Faramis", "Mathilda", "Kaja", "Diggie", "Lalea", " Lolita"}},
    {"Tank", {"Tigreal", "Khufra", "Franco", "Belerick", "Atlas", "Akai", "Lolita", "Hylos", "Chip", "Grock"}},
    {"Fighter", {"Aldous", "Yu Zhong", "Freya", "Martis", "Leomord", "Alpha", "X.Borg", "Lucas","Bane", "Sun",}}
};

Hero* HeroFactory::createHero(const std::string& role, const std::string& name) {
    if (role == "Tank") return new Tank(name);
    if (role == "Mage") return new Mage(name);
    if (role == "Marksman") return new Marksman(name);
    if (role == "Assassin") return new Assassin(name);
    if (role == "Support") return new Support(name);
    if (role == "Fighter") return new Fighter(name);
    return nullptr;
}

const std::unordered_map<std::string, std::vector<std::string>>& HeroFactory::getHeroPool() {
    return heroPool;
}
