#include<iostream>
#include<string>
using namespace std;

class ZooAnimal  
   {
    public:
      string name;
      int cageNumber;
      int weightDate;
      int weight;
    public:
      ZooAnimal (string name, int cageNumber, int weightDate, int weight){
        this->name=name;
        this->cageNumber=cageNumber;
        this->weightDate=weightDate;
        this->weight=weight;

      } // constructor function
    //   inline ~ZooAnimal () { delete  name; }; // destructor function
    inline ~ZooAnimal() {};
      void changeWeight (int pounds);
       string reptName(){
        return name;
      }
      int reptWeight ();
      int daysSinceLastWeighed (int today);
   };

   // -------- member function to return the animal's name
//    string ZooAnimal::reptName ()
//    {
//     return name;
//    }
   
   class LargeAnimal : public ZooAnimal  
   {
    public:
      string species;
      float cageMinimumVolume;
    public:
      LargeAnimal (string name, int cageNumber, int weightDate, int weight,string species, float cageMinimumVolume):ZooAnimal(name,cageNumber,weightDate,weight){
        this->species=species;
        this->cageMinimumVolume=cageMinimumVolume;
      } // constructor function
      inline ~LargeAnimal () { }; // destructor function
      float reptCageMinimumVolume ();
      string reptName() {
        return species;
      };
   };

   // -------- member function to return the large animal's species
//    string LargeAnimal::reptName ()
//    {
//     return species;
//    }
   
   // ========== an application to use the LargeAnimal class
   int main ()
   {
    
    ZooAnimal bozo("tiger",1,24,240);
    LargeAnimal gonzo("Lion",2,25,220,"Cat family",6);
    cout << bozo.reptName() << endl;
    cout << gonzo.ZooAnimal::reptName() << endl;
    return 0;
   }

