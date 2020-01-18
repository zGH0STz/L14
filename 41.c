/*41.c Programma ar datu izvadi(data out)
Programmas autors:Elvijs Buls
Prg.veidota: 2019gada 23 novembri
Versija:0.0.1
Masiva kartosana
*/

#include <stdio.h>
#include <stdlib.h>

#define max(a, b) (a > b ? a : b)
#define min(a, b) (a < b ? a : b)

int main(){

	int i, j, k; // ciklu mainīgie
	int Temp; // īslaicīgais mainīgais
	int mas3[]= {2, 5, 3, 7, 0}; // kārtojamo skaitļu masīvs
	printf("Masīva izmērs = %ld\n", sizeof(mas3)/sizeof(int));

	for (i=0; i<5; i++){ // cikliska masīva kārtošana ar burbuli
		for (j=0; j<(5-1); j++){ // nākošais cikls ir par vienu mazāks
			if (mas3[j] > mas3[j+1]){
				Temp = mas3[j];
				mas3[j] = mas3[j+1];
				mas3[j+1] = Temp;
			}
		}
	}
// sakārtotā masīva izvade uz ekrāna

int minn = 10;
int maxx = -10;
float average = 0;

for(k=0; k<5; k++){

	printf("%d,\n",mas3[k]);
	average += mas3[k];
	minn = min(minn, mas3[k]);
	maxx = max(maxx, mas3[k]);
}

average /= (sizeof(mas3)/sizeof(int));

printf("Kopas elementu skaits: %ld\n", (sizeof(mas3)/sizeof(int)));
printf("Maksimālā elementa vērtība: %d\n", maxx);
printf("Minimālā elementa vērtība: %d\n", minn);
printf("Vidējā elementa vērtība: %.1f\n", average);
printf("Mediāna: %d\n", mas3[(sizeof(mas3)/sizeof(int)) / 2]);
printf("Moda: \n");


}

