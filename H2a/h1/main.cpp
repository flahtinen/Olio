#include <iostream>

using namespace std;

void calcSum (int a, int b)
{
    cout << "Summa: "<<(a+b) << endl;
}
void calcDiv (int a, int b)
{
    if (b == 0)
    {
        cout<<"Virhe: Nollalla ei voi jakaa!"<<endl;
    }
    else
    {
        cout<<"Osamaara: "<< (a/b) <<endl;
    }
}


int retSum(int a, int b)
    {
        return a + b;
    }

float retDiv(int a, int b) {
        if (b == 0) {
            throw runtime_error("jakaja ei saa olla nolla!");
        }
        return (float)a / b;
    }

int main()
{
    int a;
    int b;
    float result;

    cout<<"Anna luku " << endl;
    cin>> a;

    cout<<"Anna toinen luku " << endl;
    cin>> b;


    calcSum(a, b);
    calcDiv(a, b);


    int summa = retSum(a, b);
    cout<<"Summa: "<<summa<<endl;

    try {
        result = retDiv(a, b);
        cout << a << "/" << b << " = " << result << endl;
    } catch (runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;

}
