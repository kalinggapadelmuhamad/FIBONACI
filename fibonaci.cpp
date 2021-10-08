#include <iostream>
using namespace std;

int main(){
    
    int angkaSebelumnya = 0;
    int angkaSekarang   = 1;
    int hasil;

    for (int i = 0; i < 7; i++) {

        hasil = angkaSebelumnya + angkaSekarang;
        cout << hasil << endl;

        angkaSebelumnya = angkaSekarang;
        angkaSekarang   = hasil;

    }
    
    return 0;
}