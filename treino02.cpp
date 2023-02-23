#include <iostream>
using namespace std;

int main(){
	setlocale (LC_ALL, "portuguese");
	
	string nome, tamanho, recheioum, recheiodois, presente, formadepegar, adicionais, formaDePagamento, confirmar;
	int quantiadeovos;
	
	//Introducao
	cout << "Ol�, bem vindo � loja da Dona Maria, digite seu nome:\n";
	cin >> nome;
	
	
	//Tamanho do ovo
	cout << "\n" << nome << ", escolha o tamanho do seu ovo:";
	cout << "\nPequeno - R$7.80";
	cout << "\nMedio - R$12.90";
	cout << "\nGrande - R$23.95\n";
	cin >> tamanho;
	
	while (tamanho != "Grande" && tamanho != "Medio" && tamanho != "Pequeno"){
		tamanho.clear();
		cout << "\nTamanho inv�lido, digite novamente\n";
		cin >> tamanho;
	}
	
	
	// Recheio do ovo
	cout << "\nEscolha o recheio do seu ovo:";
	cout << "\nChocolatePreto - R$9.67";
	cout << "\nChocolateBranco - R$4.50";
	cout << "\nChocolateAoLeite - R$9.32\n";
	cin >> recheioum;
	
	while (recheioum != "ChocolatePreto" && recheioum != "ChocolateBranco" && recheioum != "ChocolateAoLeite"){
		cout << recheioum;
		recheioum.clear();
		cout << "\nRecheio inv�lido, digite novamente\n";
		cin >> recheioum;
	}
	
	
	// Segundo recheio do ovo
	cout << "\nGostaria de escolher outro recheio? Todos os recheios saem com 50% de desconto.";
	cout << "\nChocolatePreto - R$4.83";
	cout << "\nChocolateBranco - R$2.25";
	cout << "\nChocolateAoLeite - R$4.66\n";
	cout << "\nCaso n�o queira dois recheios, envie n.\n";
	cin>> recheiodois;
	
	while (recheiodois != "ChocolatePreto" && recheiodois != "ChocolateBranco" && recheiodois != "ChocolateAoLeite" && recheiodois != "n"){
		recheiodois.clear();
		cout << "\nRecheio inv�lido, digite novamente\n";
		cin >> recheiodois;
	}
	
	
	// Presente
	cout << "\nIr� ser presente? (Acr�scimo de R$2.50, responda com Sim ou Nao)\n";
	cin >> presente;
	
	while (presente != "Sim" && presente != "Nao"){
		presente.clear();
		cout << "\nInv�lido, digite novamente\n";
		cin >> presente;
	}
	
	if (presente == "Sim"){
		cout << "\nIremos embalar o ovo";
	}else{
		cout << "\nO ovo ser� deixado em sua caixa";
	}
	
	
	// Retirada ou entrega
	cout << "\nRetirada ou Entrega? (Entrega adiciona R$5.00 ao total)\n";
	cin >> formadepegar;
	
	while (formadepegar != "Retirada" && formadepegar != "Entrega"){
		formadepegar.clear();
		cout << "\nInv�lido, digite novamente\n";
		cin >> formadepegar;
	}
	
	if (formadepegar == "Retirada"){
		cout << "\nTe informaremos quando o ovo estiver pronto.";
	}else{
		cout << "\nTe informaremos quando o ovo sair para entrega.";
	}
	
	
	// Quantia de ovos
	cout << "\nQuantos ovos voc� ir� comprar?\n";
	cin >> quantiadeovos;
	
	while (quantiadeovos < 1){
		presente.clear();
		cout << "\nO n�mero que voc� inseriu � inv�lido, digite novamente\n";
		cin >> quantiadeovos;
	}
	
	
	// Adicionais
	cout << "\nGostaria de colocar adicionais no ovo?";
	cout << "\nKitKat - R$4.67 - Digite KitKat";
	cout << "\nMM'S - R$5.43 - Digite MM";
	cout << "\nCaso n�o queira, digite n\n";
	cin >> adicionais;
	
	while (adicionais != "KitKat" && adicionais != "MM" && adicionais != "n"){
		adicionais.clear();
		cout << "\nAdicional inv�lido, digite novamente\n";
		cin >> adicionais;
	}
	
	
	// Forma de pagamento
	cout << "\nIr� pagar no cart�o de cr�dito ou pix? (Digite 'Credito' ou 'Pix')\n";
	cin >> formaDePagamento;
	
	
	//Pre?os dos ovos
	double precoPequeno = 7.80;
	double precoMedio = 12.90;
	double precoGrande = 23.95;
	
	
	//Valor do tamanho do ovo
	double valorOvo;
	if (tamanho == "Pequeno"){
	    valorOvo = precoPequeno;
	}else if (tamanho == "Medio"){
	    valorOvo = precoMedio;
	}else if (tamanho == "Grande"){
	    valorOvo = precoGrande;
	}
	
	
	//Valor dos recheios
	double valorRecheioUm, valorRecheioDois = 0;
	if (recheioum == "ChocolatePreto"){
	    valorRecheioUm = 9.67;
	}else if (recheioum == "ChocolateBranco"){
	    valorRecheioUm = 4.50;
	}else if (recheioum == "ChocolateAoLeite"){
	    valorRecheioUm = 9.32;
	}
	
	
	if (recheiodois == "ChocolatePreto"){
	    valorRecheioDois = 4.835;
	}else if (recheiodois == "ChocolateBranco"){
	    valorRecheioDois = 2.25;
	}else if (recheiodois == "ChocolateAoLeite"){
	    valorRecheioDois = 4.66;
	}
	
	
	//Desconto do segundo recheio
	if (valorRecheioDois > 0){
	    valorRecheioUm *= 0.5;
	}
	
	
	//Valor adicional do presente
	double valorPresente = 0;
	if (presente == "Sim"){
	    valorPresente = 2.5;
	}
	
	
	//Valor da entrega
	double valorEntrega = 0;
	if (formadepegar == "Entrega"){
	    valorEntrega = 5;
	}
	
	
	//Valor dos adicionais
	double valorAdicionais = 0;
	if (adicionais == "KitKat"){
		valorAdicionais = 4.67;
	}else if (adicionais == "MM"){
		valorAdicionais = 5.43;
	}
	
	
	// Valor total
	double totalapagar = valorOvo + valorRecheioUm + valorRecheioDois + valorPresente + valorEntrega + valorAdicionais;
	
	
	// Valor da forma de pagamento
	if (formaDePagamento == "Credito"){
		totalapagar += 3.3;
	}else if (formaDePagamento == "Pix"){
		totalapagar *= 0.9;
	}
	
	
	totalapagar *= quantiadeovos;
	
	cout << "\nDetalhes de compra:";
	cout << "\nValor do tamanho: R$" << valorOvo;
	cout << "\nPrimeiro recheio: R$" << valorRecheioUm;
	cout << "\nSegundo recheio: R$" << valorRecheioDois;
	cout << "\nValor do presente: R$" << valorPresente;
	cout << "\nValor da entrega: R$" << valorEntrega;
	cout << "\nValor dos adicionais: R$" << valorAdicionais;
	cout << "\nQuantia de ovos: x" << quantiadeovos;
	cout << "\nForma de pagamento: " << formaDePagamento;
	cout << "\nO total a pagar � de R$" << totalapagar << "\n";
	
	cout << "\nConfirme a compra digitando 'Confirmar' ou 'Cancelar'\n";
	cin >> confirmar;
	
	while (confirmar != "Confirmar" && confirmar != "Cancelar"){
		confirmar.clear();
		cout << "\nInv�lido, digite novamente\n";
		cin >> confirmar;
	}
}
