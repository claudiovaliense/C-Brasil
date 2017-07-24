/* 
 * File:   c-brasil.h
 * Author: Claudio Moises Valiense de Andrade
 *
 * Created on 5 de Abril de 2017, 09:35
 */

/*Estruturas de controle*/
#define se if
#define senao else
#define repete for
#define realize do
#define enquanto while
#define caso case
#define parar break
#define continua continue
#define padrao default
#define retorno return
#define selecao switch

/*Tipo de dados*/
#define vazio void
#define caracter char
#define numero int
#define decimal float
#define decimal_maior double
#define numero_maior long
#define numero_menor short
#define constante const
#define positivo unsigned
#define nao_muda static
#define estrutura struct

/*Funcoes do C -------------------------------------*/

/*Funcoes da biblioteca stdio.h*/
#define principal int main
#define tamanho sizeof
#define reservar malloc

#define entrada_caracter getchar
#define entrada_string gets
#define saida_caracter puts
#define saida_texto puts 
#define exibir printf
#define entrada scanf

/*Funcoes da biblioteca ctype.h*/
#define letra isalpha
#define e_numero isdigit
#define e_letra isalpha
#define e_maiuscula isupper
#define e_minuscula lower

/*Funcoes da biblioteca string.h*/
#define copia_texto strcpy
#define compara_texto strcmp
#define tamanho strlen

/*Funcoes da biblioteca math.h*/
#define seno sin
#define cosseno cos
#define pow exponencial
#define raiz sqrt

/*Funcoes da biblioteca sddlib.h*/
#define converte_numero atoi
