#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    int opcao, idade, codFuncionario, calculo, salario1;


    do {
            cout << "****** MENU ******" << endl;
            cout << "Escolha uma das op��es abaixo:" << endl;
            cout << "1 Cadastrar Funcion�rio" << endl;
            cout << "2 Calcular sal�rio" << endl;
            cout << "3 Mostrar dados" << endl;
            cout << "0 Sair" << endl;
            cin >> opcao;
    if (opcao == 1){
            cout << "****Cadastrar Funcion�rio****" << endl;
            cout << "C�digo do funcion�rio:" << endl;
            cin >> codFuncionario;
            cout << "Idade:" << endl;
            cin >> idade;
            cout << "Valor do sal�rio bruto do funcion�rio:" << endl;
            cin >> salario1;
    if (salario1 == 1518) {
            cout << "Percentual de desconto do inss no sal�rio de 7.5%" << endl;
    } else if (salario1 >= 1519 & salario1 <= 2793){
            cout << "Percentual de desconto do inss no sal�rio de 9%" << endl;
    } else if (salario1 >= 2794 & salario1 <= 4191){
            cout << "Percentual de desconto do inss no sal�rio de 12%" << endl;
    } else if (salario1 >= 4192 & salario1 <= 8157){
            cout << "Percentual de desconto do inss no sal�rio de 14%" << endl;
    } else if (salario1 < 1517){
            cout << "N�o tem desconto" << endl;
    }
    }
    if (opcao == 2 & salario1 <= 1518) {
            cout << "****Calcular sal�rio****" << endl;
            calculo = salario1 - (salario1 * 0.075);
            cout << "O seu sal�rio l�quido � de " << calculo << " reais." << endl;
    } else if (opcao == 2 & salario1 >= 1519 & salario1 <= 2793) {
            cout << "****Calcular sal�rio****" << endl;
            calculo = salario1 - (salario1 * 0.09);
            cout << "O seu sal�rio l�quido � de " << calculo << " reais." << endl;
    } else if (opcao == 2 & salario1 >= 2794 & salario1 <= 4191) {
            calculo = salario1 - (salario1 * 0.12);
            cout << "O seu sal�rio l�quido � de " << calculo << " reais." << endl;
    } else if (opcao == 2 & salario1 >= 4192 & salario1 <= 8157){
            calculo = salario1 - (salario1 * 0.14);
            cout << "O seu sal�rio l�quido � de " << calculo << " reais." << endl;
        }
        if (opcao == 3) {
            cout << "Dados do Funcion�rio:" << endl;
            cout << "C�digo: " << codFuncionario << endl;
            cout << "Idade: " << idade << endl;
            cout << "Valor do sal�rio " << salario1 << " bruto do funcion�rio:" << endl;
            cout << "Valor do sal�rio " << calculo << " l�quido do funcion�rio" << endl;
        }
    }while(opcao != 0);


return 0; }



