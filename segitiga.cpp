#include <iostream>
using namespace std;
int main ()
{

int a, t, luas_segitiga, keliling_segitiga, sisi_miring;

cout<<"masukan panjang alas = ";
cin>>a;
cout<<"masukan panjang tinggi =";
cin>>t;
cout<<"masukan sisi miring = ";
cin>>sisi_miring;
luas_segitiga=a*t/2;
keliling_segitiga=a+sisi_miring+sisi_miring;
cout<<"luas segitiga = "<<luas_segitiga<<endl;
cout<<"Keliling segi tiga = "<<keliling_segitiga;
return 0;

}
