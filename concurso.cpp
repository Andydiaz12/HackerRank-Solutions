#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int anio;
    scanf("%d", &anio);
    (anio%400 == 0|| (anio%100 != 0 && anio%4 == 0)) ? printf("12.09.%d\n", anio) : printf("13.09.%d\n", anio);
    return 0;
}
