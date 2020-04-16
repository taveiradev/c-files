#include <stdio.h>
#include <conio.h>


#define TF 5 //Quantidade Maxima de Funcionarios (Tamanho Fisico do Vetor)

main (){
	
	int cod_func[TF], anos_func[TF], escolha, TLfunc = 0, pos = 0, anos, cod, i;
	
	float sal_func[TF], sal;
	
	do{
		system("cls"); // Limpando a tela (funciona apenas no Windows)
			
		if (TLfunc > 0) 
			if(TLfunc < TF)
				printf("[1 - Cadastrar] [2 - Excluir] [0 - Finalizar]: "); //Se ha espa�o maior que zero todas as op��es
			else
				printf("[2 - Excluir] [0 - Finalizar]: "); //Se vetor no Maximo op��o de Inserir Inexistente
		else
			printf("[1 - Cadastrar] [0 - Finalizar]: "); //Se vetor Vazio op��o de Excluir Inexistente
			
				
		scanf("%d",&escolha);
		
		switch (escolha){
			case 1: // Op��o de Inserir
				if (TLfunc < TF){ //Se a Espa�o Prossegue
					
					printf("\nCodigo do Funcionario: "); //Pegando Codigo do Func
					scanf("%d",&cod);
					
					printf("Salario: "); //Pegando o Salario
					scanf("%f",&sal);
					
					printf("Anos Trabalhados: "); // Entrada de anos trabalhados
					scanf("%d",&anos);
					
					pos = 0;
					
					while (pos < TLfunc && cod > cod_func[pos]) // Procurando Melhor Posi��o
						pos++;
						
					for (i = TLfunc; i > pos; i--){ //Remanejando Todos os Vetores (Incremento)
						cod_func[i] = cod_func[i - 1];
						anos_func[i] = anos_func[i - 1];
						sal_func[i] = sal_func[i - 1];
					}
					
					cod_func[pos] = cod; //Inserindo na melhor posi��o em todos os Vetores
					anos_func[pos] = anos;
					sal_func[pos] = sal;
					
					TLfunc++; //Incrementando o Tamanho Logico dos Funcionarios
				}
				else{ //Se n�o ha espa�o exibe a mensagem
					printf("\nFuncionario Max\n");
					sleep(1); // Atraso da mensagem
				} 
					
				break;
			case 2: // Op��o de Excluir
			
				if(TLfunc > 0){ //Verificando Se o Vetor n�o esta Vazio
					
					printf("\n(Excluir) Cod. Func: "); //Pedindo o funcionario
					scanf("%d",&cod);
					
					i = 0;
					
					while (i < TLfunc && cod != cod_func[i]) //Encontrando a posi��o do Funcionario
						i++;
						
					if (i < TLfunc){ //Verificacndo se Encontrou
					
						for(;i < TLfunc; i++){ // Remanejando todos os vetores com for sem o parametro de inicializa��o (Decremento)
							cod_func[i] = cod_func[i+1];
							sal_func[i] = sal_func[i+1];
							anos_func[i] = anos_func[i+1];
						}
						TLfunc--; //Decrementando o Tamanho Logico dos Funcionarios
					}
					else{ //Se n�o Encontrou Exibe a Mensangem
						printf("\nFuncionario Nao Encontrado!\n");
						sleep(1); // Atraso da mensagem
					} 
						
				}
				else{ // Se vetor Vazio Exibe a mensangem
					printf("\nImpossivel Excluir\n");
					sleep(1); // Atraso da mensagem
				} 
					
				
				break;
			case 0: // Op��o de Finaliza��o
				printf("\nFIM\n");
				sleep(1); // Atraso da mensagem
				break;
			default: //Se escolha nao for 1 2 ou 0 exibe a mensagem
				printf("\nEntrada Invalida\n"); 
				sleep(1); // Atraso da mensagem
		}
		//printf("\n");
		
		
	}while (escolha > 0); //Se menor que 0 Finaliza a repeti��o
	
	for (i = 0; i < TLfunc; i++)
		printf("\n[cod: %d] [salario: %.2f] [anos: %d]", cod_func[i], sal_func[i], anos_func[i]); //Exibindo Funcionarios Ordenados Completos
		
	
	printf("\n________________________________________________\n");
	
	printf("\nFuncionarios que nao terao direito a aumento:");
		
	for (i = 0; i < TLfunc; i++) //Funcionarios que n�o ter�o direito a aumento: (exibe se n�o atende ambas as condi��es)
		if (anos_func[i] <= 5 && sal_func[i] >= 200)
			printf("\n%d",cod_func[i]);
			
	printf("\n________________________________________________\n");
	
	printf("\nFuncionarios que terao direito a aumento:");
	
	for (i = 0; i < TLfunc; i++)
		if (anos_func[i] > 5)
			if (sal_func[i] < 200)		
				printf("\n%d	novo salario = R$ %.2f (35%%)", cod_func[i], sal_func[i] + (sal_func[i] * 0.35)); //Se atende as duas condi��es
			else
				printf("\n%d	novo salario = R$ %.2f (25%%)", cod_func[i], sal_func[i] + (sal_func[i] * 0.25)); //Atende apenas a condi��o de tempo de servi�o
		else
			if(sal_func[i] < 200)
				printf("\n%d	novo salario = R$ %.2f (15%%)", cod_func[i], sal_func[i] + (sal_func[i] * 0.15)); //Atende apenas condi��o de salario
	getch();
}
