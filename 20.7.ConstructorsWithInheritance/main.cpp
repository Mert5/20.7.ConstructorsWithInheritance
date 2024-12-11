#include <iostream>
#include "person.h"
#include "engineer.h"
#include "civilengineer.h"

//  Reference => https://www.youtube.com/watch?v=8jLOx1hD3_o
//            => (freeCodeCamp.org)

int main(){

    /*CivilEngineer ceng1;    // base class is shown first

    std::cout << "-------------" << std::endl;*/

    Person p1("John Snow", 29, "Niagara Falls 23St#45");
    std::cout << "p1 : " << p1 << std::endl;

    std::cout << "-------------" << std::endl;
    Engineer eng1("Jose Rodriguez", 34, "Faroe Islands 10St#46",25);
    std::cout << "eng1 : " << eng1 << std::endl;

    std::cout << "-------------" << std::endl;
    CivilEngineer ceng1("Maria Ducke", 32, "Amalfi Coasts 19St#21",28,"Road Strength");
    std::cout << "ceng1 : " << ceng1 << std::endl;


    return 0;
}