// exerschoe.cpp
// calculate weekly salary per shoes sold.

#include <iostream>
using namespace std;

#define shoeprice 225
#define weeklywage 600.00
#define salaryperhour 7.0
#define method2commission 0.10
#define method3commission 0.20
#define bonuspersale 20.00
#define hoursperweek 38.00

int GetInput() {
  int sold_shoes;
  cout << "Enter amount of shoes sold: ";
  if (!(cin >> sold_shoes)) {
    return 0;
  }
  return sold_shoes;
}

double CalcMethod1() {
  return weeklywage;
}

double Comission(int sales, double commrate) {
  return sales * shoeprice * commrate;
}

double CalcMethod2(int sales) {
  return (hoursperweek * salaryperhour) + Comission(sales, method2commission);
}

double CalcMethod3(int sales) {
  double bonus;
  bonus = sales * bonuspersale;
  return Comission(sales, method3commission) + bonus;
}

main() {
  int sales;
  sales = GetInput();
  if (sales <=0) {
    return 0;
  }
  cout << "Method1: " << CalcMethod1() << endl;
  cout << "Method2: " << CalcMethod2(sales) << endl;
  cout << "Method3: " << CalcMethod3(sales) << endl;
}


