 #include<iostream>
 #include<string>
 using namespace std;
 class ZooAnimal  
   {
    protected:
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
      inline ~ZooAnimal () {}; // destructor function
      void changeWeight (int pounds);
      string reptName ();
      int reptWeight ();
      int daysSinceLastWeighed (int today);
   };

   class Mammal  
   {
    protected:
      float minimumVolume;
      int minimumWeight;
    public:
      Mammal (float minimumVolume, int minimumWeight)  {
        this->minimumVolume=minimumVolume;
        this->minimumWeight=minimumWeight;
        }// constructor function
      inline ~Mammal () {}; // destructor function
      float reptminimumVolume ();
      int reptminimumWeight ();
   };

   class LargeAnimal:public ZooAnimal,public Mammal
   {
    protected:
      string species;
      float cageMinimumVolume;
    public:
      LargeAnimal (string name, int cageNumber, int weightDate, int weight, float minimumVolume, int minimumWeight, string species, float cageMinimumVolume )
      :Mammal(minimumVolume,minimumWeight),ZooAnimal(name,cageNumber,weightDate,weight){
        cout<<"the name is "<<name<<" Minimum Volume of "<<name<<" is "<<minimumVolume<<" and its minimum weight is "<< minimumWeight<<endl;
      }; // constructor
      inline ~LargeAnimal () {}; // destructor function
      float reptCageMinimumVolume ();
   };


int main() {
    LargeAnimal l("tiger",1,23,240,2,200,"cat family",4);
    return 0;
}