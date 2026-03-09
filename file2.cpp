#include <iostream>
using namespace std;

float Rata_rata(float a, float b){
    return (a+b)/2;
}

string Status_lulus(float c){
    if (c >= 60)
        return "Lolos";
    else
        return "Gagal";
}


int main(){
    float nilB, nilMT, rerata;
    string status;

      cout << "Masukkan nilai Bahasa Inggris = ";
    cin >> nilB;
    cout << "Masukkan nilai Matematika = ";
    cin >> nilMT;

    //rerata = (nilB+nilMT)/2;
    //status = "Lolos";
    //status = "Gagal";
    rerata = Rata_rata(nilB, nilMT);
    //status = Status_lulus(rerata);

    cout << "Status kelulusan = " << Status_lulus(rerata) 
         << " dengan nilai rerata = " << rerata << endl;

}
