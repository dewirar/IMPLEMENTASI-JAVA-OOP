#include <iostream>
 
using namespace std;
 
class Laptop {
 
  private:
   string nama;
   double umur;
 
  public:
    void setnama(string var1) {
      nama = var1;
    }
 
    void setUmur(double var2) {
		umur = var2;
    }
 
    string getnama() {
      return nama;
    }
 
    double getUmur() {
      return umur;
    }
};
 
int main()
{
  Laptop laptopDewi;
 
  laptopDewi.setnama("Dewi Rara Prameisty");
  laptopDewi.setUmur(19);
 
  cout << laptopDewi.getnama() << endl;
  cout << laptopDewi.getUmur() << endl;
 
  return 0;
}
