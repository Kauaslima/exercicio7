
#include <iostream>
using namespace std;

int main() {
    int numeroFuncionario;
    int horasTrabalhadas;
    double valorPorHora;

    cout << "Digite o número do funcionário: ";
    cin >> numeroFuncionario;
    cout << "Digite o número de horas trabalhadas: ";
    cin >> horasTrabalhadas;
    cout << "Digite o valor por hora: ";
    cin >> valorPorHora;

    double salario = horasTrabalhadas * valorPorHora;

    cout << "N funcionário: " << numeroFuncionario << endl;
    cout << "Salário: " << salario << endl;

    return 0;
}


 <iostream>
using namespace std;

int main() {
    int quantidade1, quantidade2;
    double valorUnitario1, valorUnitario2;

    cout << "Digite a quantidade e o valor unitário do primeiro produto: ";
    cin >> quantidade1 >> valorUnitario1;
    cout << "Digite a quantidade e o valor unitário do segundo produto: ";
    cin >> quantidade2 >> valorUnitario2;

    double valorTotal = (quantidade1 * valorUnitario1) + (quantidade2 * valorUnitario2);

    cout << "VALOR A PAGAR: " << valorTotal << endl;

    return 0;
}


#include <iostream>
#include <iomanip> // Para std::setprecision
using namespace std;

int main() {
    double A, B, C;
    const double PI = 3.14159;

    cout << "Digite os valores de A, B e C: ";
    cin >> A >> B >> C;

    double areaTriangulo = (A * C) / 2.0;
    double areaCirculo = PI * C * C;
    double areaTrapezio = ((A + B) / 2.0) * C;
    double areaQuadrado = B * B;
    double areaRetangulo = A * B;

    cout << fixed << setprecision(5); // Define precisão de 5 casas decimais
    cout << "TRIANGULO: " << areaTriangulo << endl;
    cout << "CIRCULO: " << areaCirculo << endl;
    cout << "TRAPEZIO: " << areaTrapezio << endl;
    cout << "QUADRADO: " << areaQuadrado << endl;
    cout << "RETANGULO: " << areaRetangulo << endl;

    return 0;
}