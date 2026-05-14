 #include <stdio.h>


int main () {

char estadocivil;

printf ("Digite seu estado-civil:[S/C/D/V]: ");
scanf ("%c", &estadocivil);

if (estadocivil == 'S' || estadocivil == 's') {
printf ("Solteiro");}
else if (estadocivil == 'C' || estadocivil == 'c') {
printf ("Casado");}
else if (estadocivil == 'D' || estadocivil == 'd') {
printf ("Divorciado");}
else if (estadocivil == 'V' || estadocivil == 'v') {
printf ("Viúvo");}

else
printf ("Caractere incorreto, tente novamente!");

return 0;
}
