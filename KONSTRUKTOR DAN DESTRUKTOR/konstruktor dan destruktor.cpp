#include <iostream>
 
using namespace std;
 
class Laptop {
 
  private:
    string nama;
    string merk;
 
  public:
    Laptop(string var1, string var2) {
      nama = var1;
      merk = var2;
 
      cout << "Object Laptop " << nama << " sudah dibuat" << endl;
    }
 
    ~Laptop() {
      cout << "Object Laptop " << nama << " sudah dihapus" << endl;
    }
 
    string hidupkanLaptop() {
      return "Hidupkan Laptop " + merk + " Milik " + nama; 
    }
 
};
 
int main()
{
  Laptop laptopAlbert("Albert","ASUS");
  Laptop laptopArlyn("Arlyn","HP");
  Laptop laptopAlveyra("Alveyra","TOSHIBA");
 
  cout << "================================="<< endl;
  cout << laptopAlbert.hidupkanLaptop() << endl;
  cout << laptopArlyn.hidupkanLaptop() << endl;
  cout << laptopAlveyra.hidupkanLaptop() << endl;
 
  cout << "================================="<< endl;
  cout << endl;
  return 0;
}
