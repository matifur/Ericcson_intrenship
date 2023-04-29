#include <iostream> //kod Zadanie 4
#include <list>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<int> lst;
    lst.push_back(50);
    lst.push_back(100);
    lst.push_back(40);
    lst.push_back(200);
    lst.push_back(50);
    lst.push_back(130);


    //Wyszukuje wartość 50 w liście lst
    int n = count(lst.begin(), lst.end(), 50);
    cout << "liczba wystapien liczby 50 wynosi " << n << endl;

    for(int i = 0; i < lst.size(); i++){
        cout << lst[i] << "  ";
    }
    cout << endl;
    cout << endl;

    reverse(lst.begin(), lst.end());
    for(int j = 0; j < lst.size(); j++){
        cout << lst[j] << "  ";
    }
    cout << endl;
    cout << endl;

    cout << "Wielkosc listy: " << size(lst) << endl;
    cout << "Pojemnosc listy: " << lst.capacity() << endl;
    cout << "Maksymalna wielkosc listy: " << lst.max_size() << endl;
    return 0;
}