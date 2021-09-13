#include <iostream>
#include <fstream>

using namespace std;

// Создать собственный манипулятор endll для стандартного потока вывода, который выводит два перевода строки и сбрасывает буфер.
ostream & endl2(ostream & o) {
	   o << endl;
	   o << endl;
	   o.flush();
	   return o;
}

int main(int argc, char ** argv) {
    cout << "34" << endl2;
    cout << "56" << endl;
    return 0;	

}
