/**===============================================================================
Descricao: algoritmo brutao baseado em "automatos finitos deterministicos"
para validar se uma string e um valor numerico.
Autor: Landir Saviniec
===============================================================================**/

#include <iostream>
#include <string>

using namespace std;

//estados possíveis
enum Estados {INICIO, SINAL, INTEIRO, PONTO1, PONTO2, FRACAO, INVALIDO};

bool eNumeroReal(string texto){
//testa se a cadeia de caracteres e um numero real valido

    //cadeia vazia
    if(texto.size() == 0){
        return false;
    }

    //inicia no estado INICIO
    Estados estado = INICIO;

    //processa a cadeia de caracteres um a um
    for(int i=0; i<texto.size(); i++){

        char c = texto[i];  //caractere corrente

        switch(estado){
            case INICIO:
                if(c == '.'){
                    estado = PONTO1;  //vai para o estado PONTO1
                }else if(c >= '0' && c <= '9'){
                    estado = INTEIRO;  //vai para o estado INTEIRO
                }else if(c == '-' || c == '+'){
                    estado = SINAL;  //vai para o estado SINAL
                }else{
                    estado = INVALIDO;  //vai para o estado INVALIDO
                }
                break;

            case SINAL:
                if(c == '.'){
                    estado = PONTO1;  //vai para o estado PONTO1
                }else if(c >= '0' && c <= '9'){
                    estado = INTEIRO;  //vai para o estado INTEIRO
                }else{
                    estado = INVALIDO;  //vai para o estado INVALIDO
                }
                break;

            case INTEIRO:
                if(c == '.'){
                    estado = PONTO2;  //vai para o estado PONTO2
                }else if(c >= '0' && c <= '9'){
                    estado = INTEIRO;  //continua no estado INTEIRO
                }else{
                    estado = INVALIDO;  //vai para o estado INVALIDO
                }
                break;

            case PONTO2:
                if(c >= '0' && c <= '9'){
                    estado = FRACAO;  //vai para o estado FRACAO
                }else{
                    estado = INVALIDO;  //vai para o estado INVALIDO
                }
                break;

            case FRACAO:
                if(c >= '0' && c <= '9'){
                    estado = FRACAO;  //continua no estado FRACAO
                }else{
                    estado = INVALIDO;  //vai para o estado INVALIDO
                }
                break;

            case PONTO1:
                if(c >= '0' && c <= '9'){
                    estado = FRACAO;  //vai para o estado FRACAO
                }else{
                    estado = INVALIDO;  //vai para o estado INVALIDO
                }
                break;

            case INVALIDO:
                return false;  //caiu no estado invalido, nao e numero
        }
    }

    if(estado == INVALIDO || estado == SINAL || estado == PONTO1 || estado == FRACAO){
        return false; //parou em um estado nao aceito, nao e numero
    }

    return true;  //processou tudo sem erro, entao e numero
}

int main()
{

    while(true){

        string num;
        cout << "Digite um numero inteiro: ";
        cin >> num;

        if(eNumeroReal(num) == true){
            cout << "Numero inteiro informado = " << stod(num) << endl;
        }else{
            cout << "\'" << num << "\' nao e um numero inteiro." << endl;
        }

        cout << endl;

        //testa se quer continuar
        char opcao;
        cout << "Digite 'c' para continuar ou outra letra para sair: ";
        cin >> opcao;

        if(opcao != 'c'){
            break;
        }
    }

    return 0;
}