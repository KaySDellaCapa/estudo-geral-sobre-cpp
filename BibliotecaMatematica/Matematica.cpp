#include "Matematica.h"
#include <cmath>

int Soma(int num1, int num2)
{
	return num1 + num2;
}

int Subtracao(int num1, int num2)
{
	return num1 - num2;
}

int Multiplicacao(int num1, int num2)
{
	return num1 * num2;
}

float Divisao(int num1, int num2)
{	
	//Faz uma divis�o inteira pois num1 e num2 s�o inteiros
	// mas podemos fazer cast
	// agora estamos indicando que o inteiro deve ser um float. � um cast
	return (float)num1 / (float)num2;
}

double Potencia(double num1, double num2)
{
	return pow(num1, num2); // Fun��o pow faz eleva��o
}

float RaizQuadrada(int num)
{
	return sqrt(num);
}