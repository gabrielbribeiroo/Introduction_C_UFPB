#include <iostream>
#include <iomanip>
using namespace std;

void converterTemperatura(double celsius) {
    if (celsius < 0 || celsius > 1000) {
        cout << "Erro: Temperatura fora do intervalo permitido." << endl;
        return;
    }

    double kelvin = celsius + 273.15;
    double fahrenheit = celsius * 1.80 + 32.00;

    // Configura a saída para mostrar 5 casas decimais
    cout << fixed << setprecision(5);
    cout << kelvin << ", " << fahrenheit << endl;
}

int main() {
	// your code goes here
	double celsius;
    scanf("%lf", &celsius);

    converterTemperatura(celsius);

    return 0;
}
