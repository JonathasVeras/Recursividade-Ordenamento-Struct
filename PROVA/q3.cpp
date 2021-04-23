#include <iostream>
using namespace std;
#define MAX_STRING 100

struct Formula1{
    char piloto[MAX_STRING];
    char equipe[MAX_STRING];
    int grid;
};

void ordena(Formula1 corrida[], size_t carros);


int main() {
    Formula1 corrida1[5];
	for (size_t i = 0; i < 5; i++)
    {
        cin.getline(corrida1[i].piloto, MAX_STRING);
        cin.getline(corrida1[i].equipe, MAX_STRING);
        cin >> corrida1[i].grid;
        cin.ignore();
    }
    cout << endl << endl << endl;
    ordena(corrida1, 5);
    for (size_t i = 0; i < 5; i++)
    {
        cout << endl;
        cout << "Posição " << corrida1[i].grid << endl;
        cout << corrida1[i].piloto << endl;
        cout << corrida1[i].equipe << endl;
    }
    
    
	return 0;
}

void ordena(Formula1 equipes[], size_t carros)
{
    for (int i = carros-1; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if(equipes[i].grid < equipes[j].grid)
            {
                Formula1 aux = equipes[j];
                equipes[j] = equipes[i];
                equipes[i] = aux;
            }
        }
        
    }
    
}