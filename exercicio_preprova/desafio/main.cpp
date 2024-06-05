#include "grafo.hpp"
#include <vector>
#include <iostream>

using namespace std;

int main(){

    //vector<vector<int>> init = {{0,1,0,0,1},{1,0,1,1,1},{0,1,0,1,0},{0,1,1,0,1},{1,1,0,1,0}};
    Grafo matriz;
    matriz.init = {{0,1,0,0,1},{1,0,1,1,1},{0,1,0,1,0},{0,1,1,0,1},{1,1,0,1,0}};

    matriz.verificaVizinhos(3,5,matriz.init);
    matriz.listaVertices(4,5, matriz.init);
}