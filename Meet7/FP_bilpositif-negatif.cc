#include <iostream>
#include <vector>
using namespace std;

// FUNCTION
vector<int> bilPositif(const vector<int>& bilangan)
{ 
    vector<int> positif;

    for (int i=0; i < bilangan.size(); i++){
        if (bilangan[i] > 0) {
            positif.push_back(bilangan[i]);
        }
    }

    return positif;
}

vector<int> bilNegatif(const vector<int>& bilangan)
{
    vector<int> negatif;

    for (int i = 0; i < bilangan.size(); i++){
        if (bilangan[i] < 0) {
            negatif.push_back(bilangan[i]);
        }
    }

    return negatif;
}

// PROSEDURE
void PbilPositif(const vector<int>& bilangan)
{
    cout << "Bilangan Positif (Prosedure) : ";
    for (int i = 0; i < bilangan.size(); i++){
        if (bilangan[i] > 0){
            cout << bilangan[i] << " ";
        }
    }
    cout << endl;
}

void PbilNegatif(const vector<int>& bilangan)
{   
    cout << "Bilangan Negatif (Prosedure) : ";
    for (int i = 0; i < bilangan.size(); i++){
        if (bilangan[i] < 0){
            cout << bilangan[i] << " ";
        }
    }
    cout << endl;
}


int main(){
    vector<int> bilangan = {5, 2, 8, -1, -9, -7, 3, 10};

    vector<int> positif = bilPositif(bilangan);
    vector<int> negatif = bilNegatif(bilangan);

    cout << "Bilangan Positif (Function) : ";
    for (int i = 0; i < positif.size(); i++){
        cout << positif[i] << " ";
    }

    cout << endl;

    cout << "Bilangan Negatif (Function) : ";
    for (int i = 0; i < negatif.size(); i++){
        cout << negatif[i] << " ";
    } 

    PbilPositif(bilangan);
    PbilNegatif(bilangan);  

    
    return 0;
}
