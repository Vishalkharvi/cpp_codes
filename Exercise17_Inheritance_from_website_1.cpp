#include<iostream>
#include<string>

using namespace std;

class ZooAnimal  
   {
    private:
      string name;
      int cageNumber;
      int weightDate;
      int weight;
    public:
      ZooAnimal (string name, int cageNumber, int weightData, int weight){
        this->name=name;
        this->cageNumber=cageNumber;
        this->weightDate=weightData;
        this->weight=weight;
      } // constructor function
      inline ~ZooAnimal () { }; // destructor function
      void changeWeight (int pounds);
      string reptName ();
      int reptWeight ();
      int daysSinceLastWeighed (int today);
   };

   string ZooAnimal::reptName() {
    return name;
   }

   class LargeAnimal:public ZooAnimal   
   {
    private:
      string species;
      float cageMinimumVolume;
    public:
      LargeAnimal (string name, int cageNumber, int weightDate, int weight,string species,float cageMinimumVolume)
      :ZooAnimal(name,cageNumber,weightDate,weight){
        this->species=species;
        this->cageMinimumVolume=cageMinimumVolume;
      }

    
        // constructor function
      inline ~LargeAnimal () {}; // destructor function
      float reptCageMinimumVolume ();
   };


   int main() {
    ZooAnimal z("tiger",1,24,240);
    LargeAnimal l("lion",2,24,230,"cat fam",4);
    cout<<l.reptName();
    return 0;
   }