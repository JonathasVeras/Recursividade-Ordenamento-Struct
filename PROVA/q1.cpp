/*
Implemente uma função recursiva que retorna a maior soma dentre os possíveis pares de elementos vizinhos em um vetor vetor v com n elementos. V e n serão os únicos parâmetros desta função. Por exemplo, para um vetor v com n=5 elementos, sendo estes {0, 1, 3, 0, 1} a maior soma é entre os elementos 1 e 3. Sua função main deve receber do usuário o valor de n e os elementos do vetor. No mínimo, o vetor sempre conterá dois elementos.

*/
#include <iostream>
using namespace std;
#define MAX 80

int maior_soma(int x[MAX], size_t n);

int main() {
	size_t tamanho;
    cin >> tamanho;
    int vetor[MAX];
    for (size_t i = 0; i < tamanho; i++)
    {
        cin >> vetor[i];
    }
    cout << "Maior Soma: " <<maior_soma(vetor, tamanho-1);
    
	return 0;
}

int maior_soma(int x[MAX], size_t n)
{
    if(n<=0)
    {
        return x[0];
    }
    return x[n]+x[n-1]>maior_soma(x, n-1) ? x[n]+x[n-1]: maior_soma(x, n-1);
}