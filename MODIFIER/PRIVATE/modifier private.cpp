#include <iostream>
using namespace std;
 
class mahasiswa{
private:
    int no;
 
public:
    int getNo(){
        return no;
    }
 
    void setNo(int i){
        no = i;
    }
};
 
int main (){
    mahasiswa dewi;
    dewi.setNo(37);
    cout<<dewi.getNo()<<endl;
    return 0;
}
