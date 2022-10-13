#include <iostream>
using namespace std;
class film
{
    string judul;
     
    public:
    string setget(string judul){
        this->judul = judul;
        return this->judul;
    }
}
filmid;
 
int main()
{
    cout<<filmid.setget("Mencuri Raden Saleh");
    return 0;
}
