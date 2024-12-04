#include <iostream>
#include <vector>
#include "DyV.h"
#include <chrono>
#define size 10

using namespace std;

int main(){
	/*
	vector<int> intVector{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	vector<double> floatVector{0.1f, 2.3f, 4.5f, 6.7f, 8.9f, 10.11, 12.3, };
	vector<char> charVector{'a','b','c','d','e','f','g','h','i'};
	
	cout<<BusquedaBinaria(3, intVector, 0, size -1) << endl;
	cout<<BusquedaBinaria(0.1, floatVector, 0, size -1) << endl;
	cout<<BusquedaBinaria('i', charVector, 0, size -1) << endl;
	
	vector<int> intVectorInv{7,6,5,4,3,2,1};
	vector<double> floatVectorInv{9.8f,7.6f,5.4f,3.2f,1.0f};
	vector<char> charVectorInv{'i','h','g','f','e','d','c','b','a'};
	
	cout<<BusquedaBinariaInv(3, intVectorInv, 0, size -1) << endl;
	cout<<BusquedaBinariaInv(1.0, floatVectorInv, 0, size -1) << endl;
	cout<<BusquedaBinariaInv('i', charVectorInv, 0, size -1) << endl;
	*/
    
	vector<int> intDesorden{1,8,2,4,6,7,5};
	vector<double> floatDesorden{1.2f,9.5f,6.4f,2.7f,3.0f};
	vector<char> charDesorden{'f','s','a','e','j','v','b'};
    /*
	quickSort(intDesorden, 0, size-1, 1);
	for(int i=0;i< size;i++){
		cout<<intDesorden[i]<<", ";
	}
	cout<<endl;
	*/
    //Prueba de tiempo

    auto start = std::chrono::system_clock::now();
    quickSort(intDesorden, 0, size - 1, 1);
    auto end = std::chrono::system_clock::now();
    std::chrono::duration<float, std::milli> duration = end - start;
    std::cout << "tiempo con pivote al final: " << duration.count() << " ms" << std::endl;

    start = std::chrono::system_clock::now(); 
    quickSort(intDesorden, 0, size - 1, 2);
    end = std::chrono::system_clock::now();   
    duration = end - start;                   
    std::cout << "tiempo con pivote al principio: " << duration.count() << " ms" << std::endl;

	return 0;
}