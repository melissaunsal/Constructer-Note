
//Kurucu fonk geri dönüş değeri olamaz
// kurucular public olacak , private durumda zaten çağıralamayacaktır.
#include <iostream>
using namespace std;

class  dot {
private:
    int x;
    int y;
public:
    dot(); //prototip //fonksiyon
    dot(int, int);
    int getX();
    int getY();

    void setX(int);
    void setY(int);

    void WriteToScreen();
    bool beginning();


};
dot::dot() { //başlangıç değerleri daima 0 dır  parametresizdir
    x = 0;
    y = 0;

}
dot::dot(int x, int y= 8) { //y= 8 varsayılan değer//
    this->x = x;// bu sınıfta üretilen x değeri olarak ata 
    this->y = y;


}
int dot::getX() {
    return x;

}

int dot::getY() {
    return y;

}
void dot::setX(int x) {
    //  x = _x; b şekilde de olabilir aslında
      //thisi işaretçi diyebiliriz
      //thisbir anahtar kelime dersek this.x diyemeyiz

    this->x = x;



}
void dot::setY(int _y) {
    if (_y > 5)
        y = _y;
    else
        y = 2;
}
void dot::WriteToScreen() {
    cout << x << "," << y << endl;

}



int main()
{
    dot n1; 
    dot n2(5);
    cout << n1.getX() << " " << n1.getY() << endl;
    cout << n2.getX() << " " << n2.getY() << endl;

}
