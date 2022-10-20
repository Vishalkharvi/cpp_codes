#include<iostream>
#include<string>
using namespace std;

template< typename T>
class ZooAnimal  
   {
    private:
      string name;
      int cageNumber;
      int weightDate;
      T weight;
    public:
      ZooAnimal (string, int, int, T); // constructor function
      inline ~ZooAnimal () { }; // destructor function
      void changeWeight (int pounds);
      string reptName ();
      int reptWeight ();
      int daysSinceLastWeighed (int today);
   };

    template<typename T>
    ZooAnimal<T>::ZooAnimal(string name, int cageNumber, int weightDate, T weight)
   {
    this->name = name;
    this->cageNumber = cageNumber;
    this->weightDate = weightDate;
    this->weight = weight;
    cout<<"the weight is"<<weight<<endl;
   }


   int main() {

    ZooAnimal zoo("tiger",1,24,24.5);

    return 0;
   }

