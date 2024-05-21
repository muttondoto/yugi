#include "./yugi.h"
#include "../include/argh.h"
#include <iostream>
#include <ostream>
#include "db.h"
#include <vector>

int main(int argc, char const* argv[]){

   Argh arg;
   bool verbose,add;
   arg.addFlag(verbose,"-v");
   arg.addFlag(add,"-a");
   arg.parse(argc, argv);

   /* std::cout << verbose << std::endl; */
   /* Spell blackHole("Traptrix","aoe",1,123); */

   /* Spell oo("QE","BH",1,123); */
   /* std::cout << oo.type << std::endl; */
   /* std::cout << oo.typeSpell << std::endl; */

   /* MonsterEffect xsaber(4,"X-Saber Galahad",1,123); */
   /* MonsterXYZ** deck = new MonsterXYZ*[45]; */
   /* deck[0]= new MonsterXYZ(1,"owo",1,123); */
   /* deck[44]= new MonsterXYZ(1,"uwu",1,123); */
   /* xsaber.PInfo(); */
   /* std::cout << xsaber.isFusion << std::endl; */

   /* deck[0]->PInfo(); */
   /* deck[44]->PInfo(); */
   /* std::cout << deck[0]->isXYZ << std::endl; */

   /* std::vector<MonsterXYZ> owo; */
   /* owo.push_back(MonsterXYZ(1,"vector",1,123)); */
   /* owo[0].PInfo(); */

   MonsterLink omega(3,"omega",2,123456789);
   omega.PInfo();
   omega.setText("this card is ...");
   std::cout << "El texto de omega" << std::endl;
   std::cout << omega.txt << std::endl;

   dbInit();
   return 0;
}
