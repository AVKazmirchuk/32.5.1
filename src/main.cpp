#include <iostream>
#include <fstream>
#include <iomanip>

#include "nlohmann/json.hpp"

int main() {
    nlohmann::json j = {
            {"Moonshiners", {
                {"country", "USSR"},
                {"date", "1962"},
                {"studio", "Mosfilm"},
                {"scriptwriter", "Konstantin Brovin, Leonid Gaidai"},
                {"director", "Leonid Gaidai"},
                {"producer", "Peter Feller"},
                {"actorAndRole", {{"Evgeny Morgunov", "Experienced"},
                                  {"George Vitsin", "Coward"},
                                  {"Yuri Nikulin", "Idiot"}}}
            }}};

    std::ofstream out("film.json");
    out << std::setw(4) << j;
    out.close();

    j.clear();

    std::ifstream in("film.json");

    if (!in.is_open()) std::cout << "File not found!";
    else
    {
        in >> j;
        in.close();

        std::cout << j.dump(4);
    }
}
