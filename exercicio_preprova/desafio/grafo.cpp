#include "grafo.hpp"
#include <vector>
#include <iostream>

using namespace std;

//Grafo :: Grafo(vector<vector<int>> init) :  matriz(init){

//}

int Grafo :: verificaVizinhos(int vertice1, int vertice2, vector<vector<int>> matriz){
    if(matriz[vertice1][vertice2] == 1){
        cout<<"São vizinhos!!" << endl;
    }else{
        cout<<"Não sao vizinhos!!" << endl;
    }
    return 0;
}

int Grafo :: listaVertices(int vertice, int colunas, vector<vector<int>> matriz){
    for(int i = 0; i < colunas; i++){
        if(matriz[vertice-1][i] == 1){
            cout<<"O vértice " << i+1 << " é vizinho do vértice " << vertice << endl;
        }
    }
    return 0;
}