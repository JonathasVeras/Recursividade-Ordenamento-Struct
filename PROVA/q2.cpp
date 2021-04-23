#include <iostream>
using namespace std;
#define MAX_STRING 100

struct Livros{
	char titulo[MAX_STRING];
	char autor[MAX_STRING];
	char editora[MAX_STRING];
	char genero[MAX_STRING];
	int num_paginas;
};


struct Prateleiras{
	int indentificador;
	Livros livro[10];
};


int tamanho_vetor(int vetor[]);


int main() {
	size_t n_livros;
    size_t n_prateleiras;
	cin >> n_livros;

    for (size_t i = 0; i < n_livros/10; i++)
    {
        n_prateleiras++;
    }
    

	Prateleiras prateleira[n_prateleiras];
	for (size_t j = 0; j < n_prateleiras; j++)
    {
        prateleira[j].indentificador = j+1;
        if (n_livros<=10)
        {
            for(size_t i=0; i<n_livros; i++)
            {
                cin.ignore();
                cin.getline(prateleira[j].livro[i].titulo, MAX_STRING);
                cin.ignore();
                cin.getline(prateleira[j].livro[i].autor, MAX_STRING);
                cin.ignore();
                cin.getline(prateleira[j].livro[i].editora, MAX_STRING);
                cin.ignore();
                cin.getline(prateleira[j].livro[i].genero, MAX_STRING);
                cin.ignore();
                cin >> prateleira[j].livro[1].num_paginas;
                cin.ignore();
            }
        break;
        }
        else
        {
            for (size_t i = 0; i < 10; i++)
            {
                cin.ignore();
                cin.getline(prateleira[j].livro[i].titulo, MAX_STRING);
                cin.ignore();
                cin.getline(prateleira[j].livro[i].autor, MAX_STRING);
                cin.ignore();
                cin.getline(prateleira[j].livro[i].editora, MAX_STRING);
                cin.ignore();
                cin.getline(prateleira[j].livro[i].genero, MAX_STRING);
                cin.ignore();
                cin >> prateleira[j].livro[1].num_paginas;
                cin.ignore();
            }
            
        }
        
    }
    for (size_t j = 0; j < n_prateleiras; j++)
    {
        for (size_t i = 0; i < sizeof(prateleira[j].livro); i++)
        {
            cout << "Prateleira " << i+1 << endl;
            cout << "Livro " << i+1 << endl;
            cout <<prateleira[j].livro[i].titulo << endl;
            cout <<prateleira[j].livro[i].autor << endl;
            cout <<prateleira[j].livro[i].editora << endl;
            cout <<prateleira[j].livro[i].genero << endl;
            cout <<prateleira[j].livro[i].num_paginas << endl;
        }
        
    }
    
    
        
	return 0;
}