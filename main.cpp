#include <iostream>
#include <nlohmann/json.hpp>

using nlohmann::json;
using std::string;
using std::vector;

struct City
{
    string Label;
    int X;
    int Y;
};

vector<City> ParseCitiesJson(const json& j);
vector<City> GetCities();


int main() {
    vector<City> cities = GetCities();

    return 0;
}

vector<City> ParseCitiesJson(const json& j)
{
    vector<City> cities;

    for (auto i = j.begin(); i != j.end(); ++i)
    {
        cities.push_back(City { i.key(), i.value()[0], i.value()[1] });
    }

    return cities;
}

vector<City> GetCities()
{
    json j = R"({"k":[522,213],"c":[2,5445],"l":[116,3222],"r":[146,32],"b":[20,35],"j":[148,41],"a":[1,22],"n":[250,375],"s":[136,2],"g":[160,22],"h":[2150,345],"f":[16,342],"p":[188,4],"i":[22,54],"t":[146,326],"e":[52,253],"d":[18,4],"o":[28,51],"m":[1446,2],"q":[512,223]})"_json;
    return ParseCitiesJson(j);
}