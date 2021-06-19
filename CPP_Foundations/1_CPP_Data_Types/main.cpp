#include <iostream>
using namespace std;

// ! 变量定义: type variable_list;
extern int id_of_my_drone = 234;
const int id_of_my_grilfriend = 144; // * const变量是无法改变的

int main() {
  // ! Basic Data types
  cout << "Size of char : " << sizeof(char) << endl;
  cout << "Size of int : " << sizeof(int) << endl;
  cout << "Size of unsigned int : " << sizeof(unsigned int)
       << endl; // * unsigned 类型修饰符
  cout << "Size of signed int : " << sizeof(signed int) << endl;
  cout << "Size of short int : " << sizeof(short int) << endl;
  cout << "Size of signed short int : " << sizeof(signed short int) << endl;
  cout << "Size of unsigned short int : " << sizeof(unsigned short int) << endl;
  cout << "Size of long int : " << sizeof(long int) << endl;
  cout << "Size of float : " << sizeof(float) << endl;
  cout << "Size of double : " << sizeof(double) << endl;
  cout << "Size of wchar_t \a: " << sizeof(wchar_t) << endl;

  // ! Typedef usage
  typedef long int lint; //* 定义一个新类型的语法
  lint dist_to_home = 100;
  cout << dist_to_home << endl;

  // ! enum usage
  enum drone { dji_450, m100, m300rtk, vecdrone } mydrone;
  mydrone = vecdrone;
  cout << mydrone
       << endl; // * In this example, it returns the index of vecdrone

  id_of_my_drone = 15;

  cout << id_of_my_grilfriend << endl;
  cout << id_of_my_drone << endl;

  return 0;
}