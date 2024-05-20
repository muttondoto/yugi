#include <cstdio>
#include <iostream>
#include <string>
class Card {
   public:
      std::string name = "Dragon";
      void PName();
};
void Card::PName(){
   std::cout<< name <<std::endl;
}
