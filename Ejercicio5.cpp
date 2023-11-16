#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm> // Para std::find

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};


    for(int i = 0; i < vec.size(); i++) {
        if(vec[i] % 2 == 0) {
            std::cout << vec[i] << " es par." << std::endl;
        } else {
            std::cout << vec[i] << " es impar." << std::endl;
        }
    }

    vec.push_back(6);

    std::map<std::string, int> mapa = {{"uno", 1}, {"dos", 2}, {"tres", 3}};
    mapa["cuatro"] = 4;

    std::set<int> conjunto = {1, 2, 3, 4, 5};
    conjunto.insert(6);

    auto it_vec = std::find(vec.begin(), vec.end(), 3);
    if (it_vec != vec.end()) {
        std::cout << "Elemento encontrado en el vector: " << *it_vec << std::endl;
    }

    auto it_map = mapa.find("dos");
    if (it_map != mapa.end()) {
        std::cout << "Elemento encontrado en el map: " << it_map->second << std::endl;
    }

    auto it_set = conjunto.find(3);
    if (it_set != conjunto.end()) {
        std::cout << "Elemento encontrado en el set: " << *it_set << std::endl;
    }

    return 0;
}