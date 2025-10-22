#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	float bmi, gewicht, groesse, alter, kfa, sex;
	

	for (int i = 0; i < 2; i++) {
		printf("Bitte gib Gewicht in kg ein: \n");
		scanf("%f", &gewicht);
		printf("Bitte gib Groesse in Meter ein: \n");
		scanf("%f", &groesse);
		printf("Bitte gib Alter in Jahren ein: \n");
		scanf("%f", &alter);
		printf("Bitte gib Geschlecht ein 1 fuer Mann, 0 fuer Frau: \n");
		scanf("%f", &sex);

		bmi = gewicht / (groesse * groesse);

		if (sex == 1) {
			kfa = (1.2 * bmi) + (0.23 * alter) - (10.8 * 1) - 5.4;
		}


		printf("bmi: %.2f kfa: %.2f\n", bmi, kfa);
	}

}