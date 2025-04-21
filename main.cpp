#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    int opcao, idade, codFuncionario, calculo, salario1;


    do {
            cout << "****** MENU ******" << endl;
            cout << "Escolha uma das opções abaixo:" << endl;
            cout << "1 Cadastrar Funcionário" << endl;
            cout << "2 Calcular salário" << endl;
            cout << "3 Mostrar dados" << endl;
            cout << "0 Sair" << endl;
            cin >> opcao;
    if (opcao == 1){
            cout << "****Cadastrar Funcionário****" << endl;
            cout << "Código do funcionário:" << endl;
            cin >> codFuncionario;
            cout << "Idade:" << endl;
            cin >> idade;
            cout << "Valor do salário bruto do funcionário:" << endl;
            cin >> salario1;
    if (salario1 == 1518) {
            cout << "Percentual de desconto do inss no salário de 7.5%" << endl;
    } else if (salario1 >= 1519 & salario1 <= 2793){
            cout << "Percentual de desconto do inss no salário de 9%" << endl;
    } else if (salario1 >= 2794 & salario1 <= 4191){
            cout << "Percentual de desconto do inss no salário de 12%" << endl;
    } else if (salario1 >= 4192 & salario1 <= 8157){
            cout << "Percentual de desconto do inss no salário de 14%" << endl;
    } else if (salario1 < 1517){
            cout << "Não tem desconto" << endl;
    }
    }
    if (opcao == 2 & salario1 <= 1518) {
            cout << "****Calcular salário****" << endl;
            calculo = salario1 - (salario1 * 0.075);
            cout << "O seu salário líquido é de " << calculo << " reais." << endl;
    } else if (opcao == 2 & salario1 >= 1519 & salario1 <= 2793) {
            cout << "****Calcular salário****" << endl;
            calculo = salario1 - (salario1 * 0.09);
            cout << "O seu salário líquido é de " << calculo << " reais." << endl;
    } else if (opcao == 2 & salario1 >= 2794 & salario1 <= 4191) {
            calculo = salario1 - (salario1 * 0.12);
            cout << "O seu salário líquido é de " << calculo << " reais." << endl;
    } else if (opcao == 2 & salario1 >= 4192 & salario1 <= 8157){
            calculo = salario1 - (salario1 * 0.14);
            cout << "O seu salário líquido é de " << calculo << " reais." << endl;
        }
        if (opcao == 3) {
            cout << "Dados do Funcionário:" << endl;
            cout << "Código: " << codFuncionario << endl;
            cout << "Idade: " << idade << endl;
            cout << "Valor do salário " << salario1 << " bruto do funcionário:" << endl;
            cout << "Valor do salário " << calculo << " líquido do funcionário" << endl;
        }
    }while(opcao != 0);


return 0; }



