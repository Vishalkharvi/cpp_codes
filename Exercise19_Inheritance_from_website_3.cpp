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
      ZooAnimal();
      ZooAnimal (string name, int cageNumber, int weightDate, int weight){
        this->name=name;
        this->cageNumber=cageNumber;
        this->weightDate=weightDate;
        this->weight=weight;

      } // constructor function
    //   inline ~ZooAnimal () { delete  name; }; // destructor function
    ~ZooAnimal() {
    };
      void changeWeight (int pounds);
      virtual string reptName();
      int reptWeight ();
      int daysSinceLastWeighed (int today);
   };

   // -------- member function to return the animal's name
   string ZooAnimal::reptName ()
   {
    return name;
   }
   
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
       ~LargeAnimal () { }; // destructor function
      float reptCageMinimumVolume ();
      string reptName();
   };

   // -------- member function to return the large animal's species
   string LargeAnimal::reptName ()
   {
    return species;
   }
   
   // ========== an application to use the LargeAnimal class
   int main ()
   {
    

    
    ZooAnimal* bozo = new LargeAnimal("Lion",2,25,220,"Cat family",6); ;  // NOTE: declared type is "Base*"
    cout << bozo->reptName()  << endl;
    return 0;
   }