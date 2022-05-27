//Nome: Douglas Serafim Guilherme
//RA: 2840482023041

//Faça um programa que receba as informações (número e nome) de quatro candidatos, e a seguir registre quantos votos forem necessários,
//lembrando que os membros podem, além de escolher um dos candidatos, votar  em  branco  ou  mesmo  anular  o  voto.
//Ao  fim  da  votaç̃ao  seu  programa  deve  mostrar  para cada candidato o total de votos obtidos seguido do percentual equivalente, e indicar o candidato vencedor.

#include <iostream>

using namespace std;

int main()
{
	//Variaveis iniciais
	int votos = 0, votos_total = 0;
    char continua;
    continua = 's';
    int branco = 0, nulo = 0;
	int Lula = 0, Bolsonaro = 0, Biden = 0, Trump = 0;

	//Informações para os usuarios
	cout << "Bem vindo, vamos iniciar a votacao para eleger o Presidente!\nEstes sao os candidatos:\n (10) - Lula\n (11) - Bolsonaro\n (12) - Biden\n (13) - Trump\n (00) - Voto em Branco\n" << endl;

    //Inicio da estrutura de repetição
	do{
        cout << "Digite o NUMERO de seu candidato: " <<endl;
        cin >> votos;
        votos_total++;

        //Switch cases para a separação dos votos
        switch(votos) {
            case 10: Lula++;
                    cout << "Seu voto no Lula foi confirmado!" << endl;
                    break;
            case 11: Bolsonaro++;
                    cout << "Seu voto no Bolsonaro foi confirmado!" << endl;
                    break;
            case 12: Biden++;
                    cout << "Seu voto no Biden foi confirmado!" << endl;
                    break;
            case 13: Trump++;
                    cout << "Seu voto no Trump foi confirmado!" << endl;
                    break;
            case 00: branco++;
                    cout << "Seu voto em BRANCO foi confirmado!" << endl;
                    break;
            default: nulo++;
                    cout << "Voto NULO realizado!" << endl;
            }

            //Fim da estrutura de repetição
            cout << "Deseja continuar a votacao? [s]im ou [n]ao" << endl;
            cin >> continua;
	}while(continua == 's');

	//Definição do vencedor da eleição
	int presidente;

    if ((Lula > Bolsonaro) && (Lula > Biden) && (Lula > Trump))
        cout << "*********************************************\n O novo Presidente e... LULA! PARABENS!!!\n*********************************************" << endl;
    else{
        if((Bolsonaro > Lula) && (Bolsonaro > Biden) && (Bolsonaro > Trump))
            cout << "*********************************************\n O novo Presidente e... BOLSONARO! PARABENS!!!\n*********************************************" << endl;
        else
            if((Biden > Lula) && (Biden > Bolsonaro) && (Biden > Trump))
                cout << "*********************************************\n O novo Presidente e... BIDEN! PARABENS!!!\n*********************************************" << endl;
            else
                if((Trump > Lula) && (Trump > Bolsonaro) && (Trump > Biden))
                cout << "*********************************************\n O novo Presidente e... TRUMP! PARABENS!!!\n*********************************************" << endl;
                else
                cout << "*********************************************\n Empate! Teremos que fazer uma nova eleicao!!!\n*********************************************" << endl;
	}
    //Variaveis das porcentagens
    float Lporcent, Bolporcent, Tporcent, Biporcent;
	float votos_validos;

        //calculo das porcentagens
        votos_validos = votos_total - nulo - branco;
        Lporcent = Lula / votos_validos * 100;
        Bolporcent = Bolsonaro / votos_validos * 100;
        Tporcent = Trump / votos_validos * 100;
        Biporcent = Biden / votos_validos * 100;

        //Resultado das eleições e informações de dados para os usuarios
        cout << "O total de votos foi de: " << votos_total << " votos" << endl;
        cout << "O total de votos em BRANCO e de: " << branco << endl;
        cout << "O total de votos NULOS e de: " << nulo << endl;
        cout << "Lula teve: " << Lula << " votos. Uma porcentagem de: " << Lporcent << "%" << endl;
		cout << "Bolsonaro teve: " << Bolsonaro << " votos. Uma Porcentagem de: " << Bolporcent << "%" << endl;
		cout << "Biden teve: " << Biden << " votos. Uma Porcentagem de: " << Biporcent << "%" << endl;
		cout << "Trump teve: " << Trump << " votos. Uma Porcentagem de: " << Tporcent << "%" << endl;

		return 0;
}

