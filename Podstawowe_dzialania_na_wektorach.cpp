#include <iostream>
#include <vector>
using namespace std;

int main(){
    int liczba_elem = 0;
    vector<int>v(10);

    for (size_t i = 0; i<10;++i){
        v[i] = i;
        cout << v[i] <<endl;
        liczba_elem = liczba_elem + 1;
    }
    cout <<"Liczba elemtentów wynosi: " << liczba_elem << endl;

    cout <<"Liczba usuwamy elementy od 3 - 7"<< endl;



    v.erase(v.begin()+3,v.begin()+8);
    for (size_t i=0; i<v.size();i++)
    {
        cout<< v[i]<< endl;
    }


}