#include <iostream>
#include <sstream>
#include <string>

using namespace std;

// Создать программу, которая считывает целое число типа int. 
// И поставить «защиту от дурака»: если пользователь вводит что-то кроме одного целочисленного значения, 
// нужно вывести сообщение об ошибке и предложить ввести число еще раз. 
// Пример неправильных введенных строк:
// rbtrb
// nj34njkn
// 1n


int main(int argc, char ** argv) {
    string s1 = "0";
    string s2;
    stringstream input;
    int integer2;
    
    while(true) {
        size_t pos=0;
        int integer=0;
	input.str("");
	input.clear();
        cout << "введите целое число: ";
        cin >> s2;
	//cout << "получено из cin: " << s2 << endl;
        input << s2;
        if (s2 == s1) {
            integer2=0;
            break;
        }
	input >> integer;
        if(integer) {
	    stoi(s2,&pos);
	    if(pos != s2.size())
	        continue;
            integer2=integer;
            break;
        }
    }
    cout << "Ваше число " << integer2 << endl;
    return 0;	

}
