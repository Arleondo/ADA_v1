#include <vector>
#include <list>
#include <iostream>

using namespace std;

template <class Container>
void Escritura(Container& ds, ostream& os)
{
    class Container::iterator iter = ds.begin();
    for (; iter != ds.end(); ++iter)
        os << *iter <<  " ";
    os << endl;
}

int main()
{
    list<float> Insana;
    vector<float> Wazaa;

    for (float i = 1; i < 10; i++)
    {
        Insana.push_back(i*10*-1);
        Wazaa.push_back(i*10);
    }

    Escritura(Insana, cout);

    Escritura(Wazaa, cout);

}