#ifndef GRAFO
#define GRAFO
#include <vector>

using namespace std;

class Grafo{
    private:
        int linhas;
        int colunas;
    public:
        vector<vector<int>> init;
        //Grafo(vector<vector<int>> init);
        int verificaVizinhos(int vertice1, int vertice2, vector<vector<int>> matriz);
        int listaVertices(int vertice, int colunas, vector<vector<int>> matriz);
};

#endif