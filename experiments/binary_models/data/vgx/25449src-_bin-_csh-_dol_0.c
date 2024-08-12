static void
FUN1(void)
{
VAR1 *VAR2;
struct VAR3 *VAR4 = NULL;
Char    VAR5[4 * VAR6 + 1];
int     VAR7, VAR8;
int     VAR9 = 0, VAR10 = 1, VAR11 = 0;
bool    VAR12 = 0, VAR13 = 0;
char    VAR14;
Char    VAR15[VAR16];
static VAR1 *VAR17 = NULL;

VAR18 = VAR19 = VAR20 = 0;
VAR7 = VAR8 = FUN2(0);
if (VAR7 == '')
VAR7 = FUN2(0);		
if ((VAR7 & VAR21) == '')
VAR12++, VAR7 = FUN2(0);	
else if (VAR7 == '')
VAR13++, VAR7 = FUN2(0);	
switch (VAR7) {

case '':
if (VAR12 || VAR13)
FUN3(VAR22);
if (VAR23 != 0) {
free(VAR17);
FUN4(VAR17 = FUN5(VAR23));
}
goto VAR24;

case '':
if (VAR12 || VAR13)
FUN3(VAR22);
FUN4(VAR25);
goto VAR24;

case '' | VAR26:
if (VAR13)
FUN3(VAR27, "");
if (VAR12)
FUN3(VAR27, "");
for (VAR2 = VAR15; read(VAR28, &VAR14, 1) == 1; VAR2++) {
*VAR2 = (unsigned char) VAR14;
if (VAR2 >= &VAR15[VAR16 - 1])
FUN3(VAR29);
if (VAR14 == '')
break;
}
*VAR2 = 0;

VAR30[VAR18++] = '';
VAR19 = 10000;
FUN4(VAR15);
goto VAR24;

case VAR31:
case '':
FUN3(VAR22);

break;

case '':
(void) FUN6(VAR5, VAR32, sizeof VAR5/sizeof(VAR1));
VAR4 = FUN7(VAR32);
VAR9 = -1;		
break;

default:
VAR2 = VAR5;
if (FUN8(VAR7)) {
if (VAR12)
FUN3(VAR27, "");
VAR9 = 0;
do {
VAR9 = VAR9 * 10 + VAR7 - '';
VAR7 = FUN2(0);
} while (FUN8(VAR7));
FUN9(VAR7);
if (VAR9 < 0)
FUN3(VAR33);
if (VAR9 == 0) {
if (VAR13) {
VAR34 = VAR35 ? VAR36 : VAR37;
goto VAR24;
}
if (VAR35 == 0)
FUN3(VAR38);
FUN10();
FUN4(VAR35);
goto VAR24;
}
if (VAR13)
FUN3(VAR39);
VAR4 = FUN7(VAR32);
if (VAR4 == 0) {
VAR4 = &VAR40;
goto VAR41;
}
break;
}
if (!FUN11(VAR7))
FUN3(VAR42);
for (;;) {
*VAR2++ = VAR7;
VAR7 = FUN2(0);
if (!FUN11(VAR7))
break;
if (VAR2 >= &VAR5[VAR6])
FUN3(VAR43);
}
*VAR2++ = 0;
FUN9(VAR7);
VAR4 = FUN7(VAR5);
}
if (VAR13) {
VAR34 = (VAR4 || getenv(FUN12(VAR5))) ? VAR36 : VAR37;
goto VAR24;
}
if (VAR4 == 0) {
VAR2 = FUN13(getenv(FUN12(VAR5)));
if (VAR2) {
FUN10();
FUN4(VAR2);
goto VAR24;
}
FUN14(VAR5);

}
VAR7 = FUN2(0);
VAR11 = FUN15(VAR4->VAR44);
if (VAR12 == 0 && VAR9 == 0 && VAR7 == '') {
VAR2 = VAR5;
for (;;) {
VAR7 = FUN2(VAR45);	
if (VAR7 == '')
break;
if (VAR7 == '' || VAR7 == VAR31)
FUN3(VAR46);
if (VAR2 >= &VAR5[sizeof(VAR5) / sizeof(VAR1) - 2])
FUN3(VAR43);
*VAR2++ = VAR7;
}
*VAR2 = 0, VAR2 = VAR5;
if (VAR34 || VAR47)	
FUN3(VAR48);
if (!*VAR2)
FUN3(VAR22);
if (FUN8(*VAR2)) {
int     VAR49;

for (VAR49 = 0; FUN8(*VAR2); VAR49 = VAR49 * 10 + *VAR2++ - '')
continue;
if ((VAR49 < 0 || VAR49 > VAR11) && !FUN16("", *VAR2)) {
FUN17(VAR4->VAR50);
return;
}
VAR10 = VAR49;
if (!*VAR2)
VAR11 = VAR10, VAR2 = VAR51;
}
if (*VAR2 == '')
VAR2++;
else if (*VAR2 != '')
FUN3(VAR52, '');
else {
int VAR49 = VAR11;

VAR2++;
if (FUN8(*VAR2)) {
VAR49 = 0;
while (FUN8(*VAR2))
VAR49 = VAR49 * 10 + *VAR2++ - '';
if (VAR49 < 0 || VAR49 > VAR11) {
FUN17(VAR4->VAR50);
return;
}
}
if (VAR49 < VAR10)
VAR11 = VAR10 - 1;
else
VAR11 = VAR49;
}
if (VAR10 == 0) {
if (VAR11 != 0) {
FUN17(VAR4->VAR50);
return;
}
VAR11 = -1;
}
if (*VAR2)
FUN3(VAR22);
}
else {
if (VAR9 > 0) {
if (VAR9 > VAR11)
VAR10 = 1, VAR11 = 0;
else
VAR10 = VAR11 = VAR9;
}
FUN9(VAR7);
}
if (VAR12) {
VAR1   *VAR53 = FUN5(VAR11 - VAR10 + 1);

FUN18(VAR53);
free(VAR53);
}
else {
VAR41:
FUN10();
VAR54 = &VAR4->VAR44[VAR10 - 1];
VAR47 = VAR11 - VAR10 + 1;
}
VAR24:
if (VAR8 == '') {
VAR7 = FUN19();
if (VAR7 != '')
FUN3(VAR52, '');
}
}