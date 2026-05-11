#include <iostream>
using namespace std;

#include "anak.h"
#include "ibu.h"

int main() {
    ibu* varIbu = new ibu("dini");
    ibu* varIbu = new ibu("novi");
    ibu* varAnak1 = new anak("tono");
    ibu* varAnak2 = new anak("rini");
    ibu* varanak3 = new anak("dewi");

    varIbu->tambahkanAnak(varAnak1);
    varIbu->tambahkanAnak(varAnak2);
    varIbu2->tambahkanAnak(varAnak3);
    varIbu2->tambahkanAnak(varAnak1);

    varIbu->cetakAnak();
    varIbu2->cetakANak();

    delete varIbu;
    delete varIbu2;
    delete varAnak1;
    
}