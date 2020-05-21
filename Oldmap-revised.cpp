#include <iostream>
#include <map>
#include <string>
#include <iterator>
#include <utility>

typedef std::pair<std::string,std::string> pair;

int main()
{
    // making the map of my fantasy soccer team
    std::map<std::string, pair> FPL_Team =
    {
    // inserting player price data
        {"Pope", std::make_pair("4.8", "4.9")},
        {"Alexander-Arnold",std::make_pair("7.5", "7.8")},
        {"Gomez",std::make_pair("5.2", "5.3")},
        {"Taylor",std::make_pair("4.2", "4.3")},
        {"Salah",std::make_pair("12.6", "12.7")},
        {"Barnes",std::make_pair("6.1", "6.1")},
        {"Fernandez",std::make_pair("8.2", "8.5")},
        {"De Bruyne",std::make_pair("10.4", "10.6")},
        {"Jimenez",std::make_pair("7.8", "8.1")},
        {"Calvert Lewin",std::make_pair("6.4", "6.4")},
        {"Aubameyang",std::make_pair("10.9", "11.1")},
        {"Button",std::make_pair("3.9", "3.9")},
        {"Hayden",std::make_pair("4.3", "4.3")},
        {"Tagonga",std::make_pair("4.0", "4.1")},
        {"Kelly",std::make_pair("4.1", "4.2")},
    };

    std::cout << "Player Price vs Current Value" << std::endl;
        for (const auto &entry: FPL_Team)
        {
   	        auto key_pair = entry.second;
                std::cout << "{" << key_pair.first << "," << key_pair.second << "}, "
                                  << entry.first << '\n';
        }

	auto entry = FPL_Team["Tagonga"];
	std::cout << "What is Tagonga's info? Here it is:" << "{" << entry.first << "," << entry.second << "} " << std::endl;

        return 0;
}
