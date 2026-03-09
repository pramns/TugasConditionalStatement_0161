#include <iostream>
using namespace std;

void inputdata(float b,float t){
  cout << "Masukan Berat badan anda = ";
  cin >> b;
  cout << "Masukan Tinggi badan anda = ";
  cin >> t;
}

float hitungBMI (float a, float b){
  return a/(b*b);
}