#include <stdio.h>

int main()
{
    int anoA=1901, anoB=2000, cont=0, id=0, anoPub, qtdLivros=0, contLA=0, idMaior, idMenor;
    float valorLivro, soma, media=0, valorMaior=0, valorMenor=0, diferenca=0;

    while(cont<3) //inicio do while
    {
        printf("Informe a id do livro: "); //impressao ao usuario
        scanf("%i", &id); //leitura do id do livro
        printf("Informe o ano de publicacao do livro: "); //impressao ao usuario
        scanf("%i", &anoPub); //leitura do ano de publicacao
        printf("Informe o valor estimado: "); //impressao ao usuario
        scanf("%f", &valorLivro); //leitura do ano estimado
        soma=soma+valorLivro;
        cont=cont+1; //contador
        qtdLivros=cont;
        if(anoPub>=anoA&anoPub<=anoB){
        contLA=contLA+1;
        }
        
        
	if(valorLivro > valorMaior){
	  valorMaior = valorLivro;
	  
	  idMaior = id;
	  
	}
	
	if(valorLivro < valorMenor || valorMenor==0 ){
		valorMenor = valorLivro;
		
		idMenor = id;
	}


    }//fim do while
	
     

    media=soma/cont;//calculo da media
    
    diferenca = valorMaior-valorMenor;
    
    printf("Media dos valores dos livros: %.2f \n", media);//impressões ao úsuario
    printf("O numero de livros e: %i \n", qtdLivros);
    printf("Livros entre 1901 e 2000: %i \n", contLA);
    printf("O id do livro e %i, e o valor do livro mais caro e: %.2f",idMaior,valorMaior);
    printf("\nO id do livro e %i, e o valor do livro mais barato e: %.2f",idMenor,valorMenor);
    printf("\nA diferen�a de valor entre o maior e menor e: %2.f",diferenca);
}
