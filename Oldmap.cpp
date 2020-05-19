#include <iostream>
#include <map>
#include <string>
#include <iterator>
#include <utility>

typedef std::pair<std::string,std::string> pair;

int main()
{
    // making the map of my fantasy soccer team
    std::map<pair, std::string> FPL_Team =
    {
    // inserting player price data
        {std::make_pair("4.8", "4.9"), "Pope"},
        {std::make_pair("7.5", "7.8"), "Alexander-Arnold"},
        {std::make_pair("5.2", "5.3"), "Gomez"},
        {std::make_pair("4.2", "4.3"), "Taylor"},
        {std::make_pair("12.6", "12.7"), "Salah"},
        {std::make_pair("6.1", "6.1"), "Barnes"},
        {std::make_pair("8.2", "8.5"), "Fernandez"},
        {std::make_pair("10.4", "10.6"), "De Bruyne"},
        {std::make_pair("7.8", "8.1"), "Jimenez"},
        {std::make_pair("6.4", "6.4"), "Calvert Lewin"},
        {std::make_pair("10.9", "11.1"), "Aubameyang"},
        {std::make_pair("3.9", "3.9"), "Button"},
        {std::make_pair("4.3", "4.3"), "Hayden"},
        {std::make_pair("4.0", "4.1"), "Tangonga"},
        {std::make_pair("4.1", "4.2"), "Kelly"},
    };

    std::cout << "Player Price vs Current Value" << std::endl;
    	for (const auto &entry: FPL_Team)
	{
		auto key_pair = entry.first;
		std::cout << "{" << key_pair.first << "," << key_pair.second << "}, "
				  << entry.second << '\n';
	}
	return 0;
}
