#include <vector>
#include <iostream>

template <typename T>
int BusquedaBinaria(T x, std::vector<T> &v, int ini, int fin){
	if(ini > fin){
		return -1;
	}
	int medio=(ini + fin ) / 2;
	if(v[medio] == x){
		return medio;
	}
	else if(v[medio] > x){
		return BusquedaBinaria(x ,v ,ini ,medio -1);
	}
	else{
		return BusquedaBinaria(x, v, medio+1, fin);
	}
}

template <typename T>
int BusquedaBinariaInv(T x, std::vector<T> &v, int ini, int fin){
	if(ini > fin){
		return -1;
	}
	int medio=(ini+fin)/2;
	if(v[medio] == x){
		return medio;
	}
	else if(v[medio] < x){
		return BusquedaBinariaInv(x, v, ini, medio -1);
	}
	else{
		return BusquedaBinariaInv(x, v, medio +1, fin);
	}
}

template <typename T>
int Partition(std::vector<T> &v, int ini, int fin){
	T pivote = v[fin];
	int i = ini;
	for (int j = ini ; j < fin ; j++){
		if( v[j] <= pivote){
			T aux = v[j];
			v[j] = v[i];
			v[i] = aux;
			i++;
		}
	}
	T aux = v[i];
	v[i] =v [fin];
	v[fin] = aux;
	return i;
}

template <typename T>
int PartitionFirst(std::vector<T> &v, int ini, int fin) {
    T pivote = v[ini]; 
    int i = ini + 1;   

    for (int j = ini + 1; j <= fin; j++) { 
        if (v[j] <= pivote) {
            std::swap(v[j], v[i]); 
            i++;
        }
    }

    std::swap(v[ini], v[i - 1]);
    return i - 1; 
}


template <typename T>
void quickSort(std::vector<T> &v, int ini, int fin, int op){
	//std::cout<<"ini: "<<ini<<", fin: "<<fin<<std::endl;
	if(ini < fin){
		int pivot;
		switch (op){
			case 1:
				pivot = Partition(v, ini, fin);
				break;
			case 2:
				pivot = PartitionFirst(v, ini, fin);
		}
		quickSort(v, ini, pivot-1, op);
		quickSort(v, pivot+1, fin, op);
	}
}