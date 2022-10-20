#include<iostream>
#include<string>
using namespace std;

template< typename T,typename T2>
class ZooAnimal  
   {
    private:
      string name;
      T2 cageNumber;
      int weightDate;
      T weight;
    public:
      ZooAnimal (string, T2, int, T); // constructor function
      inline ~ZooAnimal () { }; // destructor function
      void changeWeight (int pounds);
      string reptName ();
      T reptWeight ();
      int daysSinceLastWeighed (int today);
   };

    template<typename T,typename T2>
    ZooAnimal<T,T2>::ZooAnimal(string name, T2 cageNumber, int weightDate, T weight)
   {
    this->name = name;
    this->cageNumber = cageNumber;
    this->weightDate = weightDate;
    this->weight = weight;
    cout<<"the weight is"<<weight<<endl;
    cout<<"the cageNumber is "<<cageNumber<<endl;
   }


   int main() {

    ZooAnimal zoo("tiger",1.4,24,24.5);

    return 0;
   }

