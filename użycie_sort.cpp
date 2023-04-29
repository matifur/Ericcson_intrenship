#include <iostream> 
#include <algorithm>
#include <vector>
using namespace std;

//Program losuje 10 liczb a następnie je sortuje rosnąco
int main()
{
    vector<float>vec(10);

    for(size_t i=0;i<10;i++)
    {
        vec[i] = rand();
        cout << vec[i] << endl;
    }
    sort(vec.begin(),vec.end());
    for(size_t i = 0; i<10;i++)
    cout <<"Posegregowane: "<< vec[i] << endl;
}