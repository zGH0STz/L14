/*42.c Programma ar datu izvadi(data out)
Programmas autors:Elvijs , buls
Prg.veidota: 2019gada 23 novembri
Versija:0.0.1
Masīva kartosana
*/

#include <stdio.h>

int main(){

	int i, j, k; // ciklu mainīgie
	int Temp; // īslaicīgais mainīgais
	char mas3[]= "Sandis Malnieks"; // kārtojamo skaitļu masīvs

	printf("Masīva izmērs = %ld\n", sizeof(mas3)/sizeof(mas3[0]));

	for (i=0; i<(sizeof(mas3)/sizeof(mas3[0])); i++){ // cikliska masīva kārtošana ar burbuli
		for (j=0; j<(sizeof(mas3)/sizeof(mas3[0])-1); j++){ // nākošais cikls ir par vienu mazāks
			if (mas3[j] > mas3[j+1]){
				Temp = mas3[j];
				mas3[j] = mas3[j+1];
				mas3[j+1] = Temp;
			}
		}
	}
// sakārtotā masīva izvade uz ekrāna
	for(k=0; k<(sizeof(mas3)/sizeof(mas3[0])); k++){
		printf("0x%02X = \"%c\"\n",mas3[k], mas3[k]);
	}
}

