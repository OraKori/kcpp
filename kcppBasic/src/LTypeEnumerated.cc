/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2020.02.21
 * \brief Typy danych w C++
 * v0.02 (2021.03.01)
 */

#include<iostream>
using namespace std;

enum e_acompany {
    Audi,
    BMW, 
    Cadillac,  //problem jesli nie zainicjalisuje sie wartoscia 
    Ford,
    Jaguar, 
    Lexus, 
    Maybach = 13, 
    RollsRoyce, 
    Saab
  };

int main()
{
  e_acompany my_car_brand;
  my_car_brand = Ford;
  //my_car_brand = BMW;

  if(my_car_brand == Ford) { 
    cout << "Hello, Ford-car owner!: " << Audi << endl;
    cout << "Hello, Ford-car owner!: " << BMW  << endl;
    cout << "Hello, Ford-car owner!: " << Cadillac << endl;
    cout << "Hello, Ford-car owner!: " << Ford << endl;
    //cout << "Hello, Ford-car owner!: " << Lexus << endl;
    cout << "Hello, Ford-car owner!: " << Maybach << endl;
  }
  return 0;                              
}
