#include <stdio.h>
int main() {
	float sb,fgts,inss,irrf,sl;
	printf ("Salario Bruto:");
	scanf("%f",&sb);
	fgts = sb * 0.08;

	if (sb<=1659.38) {
		inss=sb * 0.08;
	} else if (sb<=2765.66) {
		inss=sb * 0.09;
	}

	else if (sb<=5531.31) {
		inss=sb * 0.11;
	}

	else {
		inss=608.44;
	}

	if (sb<=1903.98) {
		irrf=0;
	} else if (sb<=2826.65) {
		irrf= (irrf * 0.075) -142.80;
	}

	else if (sb<=3751.05) {
		irrf= (irrf * 0.15) -354.80;
	}

	else if (sb<=4664.68) {

		irrf= (irrf * 0.225) -636.13;
	} else {
		irrf= (sb * 0.275) -869.36;
	}
	sl=sb-inss-irrf;

	printf ("Valor do FGTS =====> %.2f",fgts);
	printf ("\n Valor do INSS =====> %.2f",inss);
	printf ("\n Valor do IRRF =====> %.2f",irrf);
	printf ("\n Valor do Salario Liquido =====> %2.f",sl);

}

