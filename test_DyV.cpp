#include <iostream>
#include <vector>
#include "DyV.h"


using namespace std;

int main(){

	vector<int> vecInt{1,2,3,4,5,6,7,8,9,10};
	vector<double> vecFloat{1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.1}; //al usar floats hay que tener en cuenta tolerancias al comprar valores, si no no funciona

	vector<int> vecIntInv{10,9,8,7,6,5,4,3,2,1};

	int size_vecInt= vecInt.size();
	int size_vecFloat = vecFloat.size();
	int size_vecIntInv = vecIntInv.size();

	int resInt= busquedaBinaria(4, vecInt, 0, size_vecInt-1);
	int resFloat = busquedaBinaria(6.6, vecFloat, 0, size_vecFloat-1);
	int resIntInv = busquedaBinariaInv(5, vecIntInv, 0, size_vecIntInv-1);
	
	cout << resInt << endl;
	cout << resFloat << endl;
	cout << resIntInv << endl;

	return 0;
}
