#include <iostream>

using std::cout;
using std::endl;

template<typename T>
class Manyfrnd {
private:
    T item;
public:
    Manyfrnd(const T &i) : item(i) {}

    template<typename C, typename D>
    friend void show2(C &, D &);
};

template<typename C, typename D>
void show2(C &c, D &d) {
    cout << c.item << ", " << d.item << endl;
};

int main() {
    Manyfrnd<int> hfi1(10);
    Manyfrnd<int> hfi2(20);
    Manyfrnd<double> hfdb(10.5);

    cout << "hfi1, hfi2: ";
    show2(hfi1, hfi2);
    cout << "hfdb, hfi2: ";
    show2(hfdb, hfi2);


    class Manyfrnd<int> m(2);

    show2(m, hfdb);
    return 0;
}
