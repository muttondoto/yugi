#include <cstdio>
#include <iostream>
#include <string>

class Card {
   public:
      std::string name; 
      std::string type;
      std::string txt; // Efecto
      int edition;
      int id;
      void PInfo();
      Card(std::string ,std::string,int,int);
      void setText(std::string texto){txt = texto;}
};

class Spell : public Card{
   public:
      std::string typeSpell ;
      Spell(std::string tp,std::string x,int z ,int a):Card(x,"Spell",z,a){typeSpell=tp;};
};

class Trap : public Card{
   public:
      std::string typeTrap ;
      Trap(std::string tt,std::string x,int z ,int a):Card(x,"Trap",z,a){typeTrap=tt;};
};

class Monster : public Card{
   public:
      int level_rango;
      int attack;
      int deffense;
      bool isEffect=false;
      bool isFusion=false;
      bool isXYZ=false;
      bool isSynchro=false;
      bool isPendulum=false;
      bool isRitual=false;
      bool isLink=false;
      bool isSummonSpecial=false;
      std::string element;
      Monster(std::string x,int z ,int a):Card(x,"Monster",z,a){};
};

class MonsterXYZ : public Monster{
   public:
      MonsterXYZ(int range,std::string x,int z ,int a):Monster(x,z,a){level_rango=range;isXYZ=true;};
};

class MonsterNormal : public Monster{
   public:
      MonsterNormal(int level,std::string x,int z ,int a):Monster(x,z,a){level_rango=level;};
};

class MonsterEffect : public Monster{
   public:
      MonsterEffect(int level,std::string x,int z ,int a):Monster(x,z,a){level_rango=level;isEffect=true;};
};

class MonsterSynchro : public Monster{
   public:
      MonsterSynchro(int level,std::string x,int z ,int a):Monster(x,z,a){level_rango=level;isSynchro=true;};
};

class MonsterFusion : public Monster{
   public:
      MonsterFusion(int level,std::string x,int z ,int a):Monster(x,z,a){level_rango=level;isFusion=true;};
};

class MonsterRitual : public Monster{
   public:
      MonsterRitual(int level,std::string x,int z ,int a):Monster(x,z,a){level_rango=level;isRitual=true;};
};

class MonsterPendulum : public Monster{
   public:
      int a,b;
      MonsterPendulum(int level,std::string x,int z ,int a):Monster(x,z,a){level_rango=level;isPendulum=true;};
};

class MonsterLink : public Monster{
   public:
      int links[9];
      MonsterLink(int link,std::string x,int z ,int a):Monster(x,z,a){level_rango=link;isLink=true;}
   private:
      int matrizposition[3][3];
};

// Métodos de clase
void Card::PInfo(){
   std::cout<< name <<std::endl;
   std::cout<< type <<std::endl;
   std::cout<< edition <<std::endl;
   std::cout<< id <<std::endl;
}

// Constructor base
Card::Card(std::string iname,std::string itype,int iedition, int iid){
   name = iname;
   type = itype;
   edition = iedition;
   id =iid;
}
