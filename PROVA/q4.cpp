#include <iostream>
using namespace std;
#define MAX_M 100
#define MAX_N 100

int diferenca(int x, int y)
{
    return x-y;
}

int maiorDiferenca_jogador(int vetor[MAX_M][MAX_N], int m, int n)
{
    int maiorNumero = vetor[m][0];
    int menorNumero = vetor[m][0];
    for (size_t i = 1; i < n; i++)
    {
        if (vetor[m][i] > maiorNumero)
        {
            maiorNumero = vetor[m][i];
        }
        
    }
    for (size_t i = 1; i < n; i++)
    {
        if (vetor[m][i] < maiorNumero)
        {
            menorNumero = vetor[m][i];
        }
        
    }
    return diferenca(maiorNumero, menorNumero);
    
}

void maiorDiferenca_jogadores(int vetor[MAX_M][MAX_N], int m, int n)
{
    int jogador_com_maior_diferenca=maiorDiferenca_jogador(vetor, 0, n);
    int coordernadas_da_maior_diferenca = 0;
    for (size_t i = 1; i < m; i++)
    {
        if(maiorDiferenca_jogador(vetor, i, n) > jogador_com_maior_diferenca)
        {
            jogador_com_maior_diferenca = maiorDiferenca_jogador(vetor, i, n);
            coordernadas_da_maior_diferenca = i;
        }
    }
    cout << "Jogador " << coordernadas_da_maior_diferenca << endl;
       
}

int main() {
	int m, n;
    cin >> m >> n;
    int matrizA[MAX_M][MAX_N];
    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            cin >> matrizA[i][j];
        }
        
    }
    maiorDiferenca_jogadores(matrizA, m, n);
    
	return 0;
}

