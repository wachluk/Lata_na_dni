#include <stdio.h>

int main(void)
{

int odn, urod, dzis, prz_ur, prz_dzis, reszta, wiek, dni, m_ur, m_dzis, d_ur, d_dzis, d_m_dzis, d_m_ur, m_1, m_2, m_3, m_4, m_5, m_6, m_7, m_8, m_9, m_10, m_11, m_12, luty_29;

m_1 = m_3 = m_5 = m_7 = m_8 = m_10 = m_12 = 31;
m_2 = 28;
m_4 = m_6 = m_9 = m_11 = 30;

printf("Podaj dzisiejszy dzieä:\n");
scanf("%d", &d_dzis);

printf("Podaj dzisiejszy miesi¥c:\n");
scanf("%d", &m_dzis);

printf("Podaj dzisiejszy rok:\n");
scanf("%d", &dzis);

odn = 1904;
//dzis = 2022;
//m_dzis = 2;
//d_dzis = 4;

urod = 1982;
m_ur = 3;
d_ur = 22;

int a = (urod - odn) % 4; // do wyswietlenia i sprawdzenia

wiek = dzis - urod; // obliczenie lat, p¢«niej jest uwzgleniony miesiac i dzien urodzin.
//printf ("\n\n (urod - odn) modulo 4 to %d", a );

prz_ur = (4-((urod - odn) % 4));  // rok urodzenia minus odniesienie przestepne, podzielenie przez 4, zwr¢ci 1,2,3,0 co odjete od 4 da najblizszy przestepny rok po urodziach.
//printf("prz_ur = (4-((urod - odn) modulo 4)) = %d", prz_ur);

prz_dzis = (dzis - odn) % 4;     // sprawdzenie czy dzis jest rok przestepny.
//printf ("\n\nprz_dzis = (dzis - odn) % 4 = %d", prz_dzis);

                                // trzeba sprawdzic dla przypadk¢w w kt¢rych rok urodzin lub/i aktualny rok jest przetepny, oraz przed i po 29 lutym.
reszta = (((dzis - prz_dzis) - (urod + prz_ur)) / 4 ) + 1; //reszta to ilosc dni kt¢re dodaja lata przestepne bo maja 366 zamiast policznonych wczesniej 365 dni, wiec dodaja po roku za kazdy dzien przestepny.
//printf ("\n \nreszta = %d\n", reszta);

if (prz_dzis == 0)
    luty_29 = 1;

if (prz_dzis != 0)
    luty_29 = 0;

dni = (365*wiek)+reszta;    // 

if (m_dzis == 1)
    d_m_dzis = 0;
if (m_dzis == 2)
    d_m_dzis = m_1;
if (m_dzis == 3)
    d_m_dzis = m_1 + m_2;
if (m_dzis == 4)
    d_m_dzis = m_1 + m_2 + m_3;
if (m_dzis == 5)
    d_m_dzis = m_1 + m_2 + m_3 + m_4;
if (m_dzis == 6)
    d_m_dzis = m_1 + m_2 + m_3 + m_4 + m_5;
if (m_dzis == 7)
    d_m_dzis = m_1 + m_2 + m_3 + m_4 + m_5 + m_6;
if (m_dzis == 8)
    d_m_dzis = m_1 + m_2 + m_3 + m_4 + m_5 + m_6 + m_7;
if (m_dzis == 9)
    d_m_dzis = m_1 + m_2 + m_3 + m_4 + m_5 + m_6 + m_7 + m_8;
if (m_dzis == 10)
    d_m_dzis = m_1 + m_2 + m_3 + m_4 + m_5 + m_6 + m_7 + m_8 + m_9;
if (m_dzis == 11)
    d_m_dzis = m_1 + m_2 + m_3 + m_4 + m_5 + m_6 + m_7 + m_8 + m_9 + m_10;
if (m_dzis == 12)
    d_m_dzis = m_1 + m_2 + m_3 + m_4 + m_5 + m_6 + m_7 + m_8 + m_9 + m_10 + m_11;

if (m_ur == 1)
    d_m_ur = 0;
if (m_ur == 2)
    d_m_ur = m_1;
if (m_ur == 3)
    d_m_ur = m_1 + m_2;
if (m_ur == 4)
    d_m_ur = m_1 + m_2 + m_3;
if (m_ur == 5)
    d_m_ur = m_1 + m_2 + m_3 + m_4;
if (m_ur == 6)
    d_m_ur = m_1 + m_2 + m_3 + m_4 + m_5;
if (m_ur == 7)
    d_m_ur = m_1 + m_2 + m_3 + m_4 + m_5 + m_6;
if (m_ur == 8)
    d_m_ur = m_1 + m_2 + m_3 + m_4 + m_5 + m_6 + m_7;
if (m_ur == 9)
    d_m_ur = m_1 + m_2 + m_3 + m_4 + m_5 + m_6 + m_7 + m_8;
if (m_ur == 10)
    d_m_ur = m_1 + m_2 + m_3 + m_4 + m_5 + m_6 + m_7 + m_8 + m_9;
if (m_ur == 11)
    d_m_ur = m_1 + m_2 + m_3 + m_4 + m_5 + m_6 + m_7 + m_8 + m_9 + m_10;
if (m_ur == 12)
    d_m_ur = m_1 + m_2 + m_3 + m_4 + m_5 + m_6 + m_7 + m_8 + m_9 + m_10 + m_11;

    d_m_dzis = d_m_dzis + d_dzis;
    d_m_ur = d_m_ur + d_ur;    

if (d_m_ur>d_m_dzis)
    {
        dni = dni - (d_m_ur - d_m_dzis);
        wiek = wiek - 1;
    }
    
if (d_m_ur<d_m_dzis)
    {
        dni = dni + (d_m_dzis - d_m_ur);
    }

//if (d_m_ur==d_m_dzis)
   /* {
        dni = dni + (d_dzis - d_ur);
        if (d_ur>d_dzis)
            {
                wiek = wiek - 1;
            }
      }    */

int minut, godzin, sekund;
godzin = dni *24;
minut = godzin *60;
sekund = minut *60;

printf("\nDzi˜: %d. %d. %d \n", d_dzis, m_dzis, dzis);
printf("\nUrodziny: %d. %d. %d \n", d_ur, m_ur, urod);
printf("\nMasz %d lat, oraz %d dni.\n", wiek, dni);
printf("\nA to jest  %d godzin. To %d minut. To %d sekund.\n", godzin, minut, sekund);  

getchar();
getchar();
return 0;

}