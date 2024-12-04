

#ifndef DYV_H
#define DYV_H

#include <vector>

// float epsilon = 1e-6;

template <typename T>
int busquedaBinaria(T x, std::vector<T> &v, int ini, int fin){

        if (ini > fin)
                return -1;      //no se ha encontrado el valor
        int mitad = ((ini+fin)/2);

        if (v[mitad] == x)
                return mitad;
        else if (x > v[mitad])
                return busquedaBinaria(x, v, mitad + 1, fin);
        else
                return busquedaBinaria(x, v, ini, mitad - 1);

}

int busquedaBinariaInv(int x, std::vector<int> &v, int ini, int fin){

        if (ini > fin)  
                return -1;      
        int mitad = ((ini+fin)/2);

        if (v[mitad] == x)
                return mitad;
        else if (x > v[mitad])
                return busquedaBinariaInv(x, v, ini, mitad-1); //se cambian los margenes
        else
                return busquedaBinariaInv(x, v, mitad+1, fin);

}
#endif 
