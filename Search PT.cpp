#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int main()
{
start:
int n;
char name[20];
char s;
char * element[118]={"Hydrogen", "Helium", "Lithium", "Berrylium", "Boron",
    "Carbon","Nitrogen","Oxygen", "Flourine","Neon","Sodium","Magnesium",
    "Aluminium","Silicon","Phosphorus","Sulphur","Chlorine","Argon",
    "Potassium","Calcium","Scandium","Titanium","Vanadium","Chromium","Manganese"
    ,"Iron","Cobalt","Nickel","copper","Zinc","Gallium","Germanium","Arsenic"
    ,"Selenium","Bromine","krypton","Rubidium","Strontium","Yttrium","Zirconium"
    ,"Niobium","Molybdenum","Technetium","Ruthenium","Rhodium","Palladium","Silver","Cadmium"
    ,"Indium","Tin","Antimony","Tellurium","Iodine","Xenon","Cesium","Barium"
    ,"Lanthanum","Cerium","Praseodymium","Neodymium","Promethium","Samarium"
    ,"Europium","Gadolinium","Terbium","Dysprosium","Holmium","Erbium","Thulium","Ytterbium"
    ,"Lutetium","Hafnium","Tantalum","Tungsten","Rhenium","Osmium","Iridium","Platinum"
    ,"Gold","Mercury","Thallium","Lead","Bismuth","Polonium","Astatine","Radon"
    ,"Francium","Radium","Actinium","Thorium","Protactinium","Uranium","Neptunium","Plutonium","Americium","Curium"
    ,"Berkelium","Californium","Einsteinium","Fermium","Mendelevium","Nobelium","Lawrencium","Rutherfordium"
    ,"Dubnium","Seaborgium","Bohrium","Hassium","Meitnerium","Darmstadtium","Roentgenium"
    ,"Ununbium","Ununtrium","Ununquadium","Ununpentium","Ununhexium","Ununseptium","Ununoctium"};
float AW[118]={1.008,4.003,6.941,9.012,10.811,12.011,14.007,15.999,18.998,20.180,22.990,24.305,26.982,28.086,30.974,32.066,32.066,39.948,39.098,40.078,
            44.956,47.867,50.942,51.996,54.938,55.845,58.933,58.693,63.546,65.38,69.723,72.631,74.922,78.972,79.904,83.798,85.468,87.62,88.906,91.224
            ,92.906,95.95,98.907,101.07,102.906,106.42,107.868,112.411,114.818,118.711,121.760,127.6,126.904,131.294,132.905,137.328,138.905,140.116,140.908,
            144.242,144.913,150.36,151.964,157.25,158.925,162.500,164.930,167.259,168.934,173.055,174.967,
            178.49,180.948,183.84,186.207,190.23,192.217,195.085,196.967,200.592,204.383,207.2,208.980,208.982,209.987,222.018,223.020,226.025
            ,227.028,232.038,231.036,238.029,237.048,244.064,243.061,247.070,247.070,251.080,254,257.095,258.1,259.101,262,
            261,262,266,264,269,278,281,280,285,286,289,289,293,294,294};
char * S[118]={"H","He","Li","Be","B","C","N","O","F","Ne","Na","Mg","Al","Si","P","S","Cl","Ar","K","Ca","Sc","Ti","V",
                "Cr","Mn","Fe","Co","Ni","Cu","Zn","Ga","Ge","As","Se","Br","Kr","Rb","Sr","Y","Zr","Nb","Mo","Tc","Ru","Rh","Pd","Ag","Cd","In","Sn","Sb","Te","I","Xe","Cs","Ba","La","Ce",
                "Pr","Nd","Pm","Sm","Eu","Gd","Tb","Dy","Ho","Er","Tm","Yb","Lu","Hf","Ta","W","Re","Os","Ir","Pt","Au","Hg","Tl","Pb","Bi","Po","At","Rn","Fr","Ra","Ac","Th","Pa","U","Np",
                "Pu","Am","Cm","Bk","Cf","Es","Fm","Md","No","Lr","Rf","Db","Sg","Bh","Hs","Mt","Ds","Rg","Cn","Nh","Fl","Mc","Lv","Ts","Og"};
printf("Search By Atomic number \nEnter Atomic Number \nOr\nPress 0 to Exit\n");
scanf("%d",&n);
if(n==0){
exit(0);}
if(n<119)
{
for (int i=0; i<=117; i++)
  {
    if(i==(n-1))
        {
         printf("Atomic Number=\t\t\t%d\n",(i+1));
         printf("Name=\t\t\t %s\n",(element[i]));
         printf("Atomic Weight=\t\t\t%f\n",AW[i]);
         printf("Atomic Symbol=\t\t\t%s\n",S[i]);
         printf("\n");
         goto start;
        }
  }
}
else
{
    printf("\n\nError: Enter Valid Atomic Number\n\n");
    goto start;
}

getch();
return 0;
}
