#include<iostream>
#include<string>
using namespace std;

template<class T=int>
class ZooAnimal  
   {
    private:
      string name;
      int cageNumber;
      int weightDate;
      T weight;
    public:
      ZooAnimal(string,int,int,int); // constructor function
      inline ~ZooAnimal () { }; // destructor function
      void changeWeight (int pounds);
      string reptName ();
      int reptWeight ();
      int daysSinceLastWeighed (int today);
   };

   template<class T>
    ZooAnimal<T>::ZooAnimal(string name, int cageNumber, int weightDate, int weight)
   {
    this->name = name;
    this->cageNumber = cageNumber;
    this->weightDate = weightDate;
    this->weight = weight;
    cout<<"the weight is"<<weight<<endl;
   }


   int main() 
   {
    ZooAnimal bozo ("Bozo", 408, 1027, 400.6);
    return 0;
   }

    
