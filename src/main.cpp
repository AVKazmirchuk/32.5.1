#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <sstream>

#include "../include/header.h"
#include "nlohmann/json.hpp"

int main()
{
    nlohmann::json moonshiners = {
            {"country", "USSR"},
            {"date", "1962"},
            {"studio", "Mosfilm"},
            {"scriptwriter", {"Konstantin Brovin", "Leonid Gaidai"}},
            {"director", "Leonid Gaidai"},
            {"producer", "Peter Feller"},
            {"actorAndRole", {{"Evgeny Morgunov", "Experienced"}, {"George Vitsin", "Coward"}, {"Yuri Nikulin", "Idiot"}}}

    };

    std::ofstream out("./film.json");
    out << std::setw(4) << moonshiners;
    out.close();

    std::cout << moonshiners.dump(4);

    auto v8 = moonshiners["actorAndRole"].get<std::map<std::string, nlohmann::json>>();

    std::map<std::string, std::vector<std::map<std::string, std::string>>> maps;

    for (auto &i : v8)
    {
        m_new[i.first] = i.second.get<std::vector<int>>();
    }


        maps = v8.get<std::vector<std::map<std::string, std::string>>>();


    Moonshiners m;

std::cout << "QQQ";





}
