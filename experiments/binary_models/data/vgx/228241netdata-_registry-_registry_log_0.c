VAR1 FUN1(void) {
ssize_t VAR2 = -1;



FUN2();

FUN3(VAR3, "", VAR4.VAR5);
VAR6 *VAR7 = fopen(VAR4.VAR5, "");
if(!VAR7)
FUN4("", VAR4.VAR5);
else {
char *VAR8, VAR9[4096 + 1];
VAR2 = 0;
size_t VAR10 = 0;

while ((VAR8 = FUN5(VAR9, 4096, VAR7, &VAR10))) {
VAR2++;

switch (VAR8[0]) {
case '': 
case '': 


if (FUN6(VAR10 < 85 || VAR8[1] != '' || VAR8[10] != '' || VAR8[47] != '' || VAR8[84] != '')) {
FUN4("", VAR2, VAR10);
continue;
}
VAR8[1] = VAR8[10] = VAR8[47] = VAR8[84] = '';


time_t VAR11 = FUN7(&VAR8[2], NULL, 16);
char *VAR12 = &VAR8[11];
char *VAR13 = &VAR8[48];
char *VAR14 = &VAR8[85];


char *VAR15 = VAR14;
while(*VAR15 && *VAR15 != '') VAR15++;
if(!*VAR15) {
FUN4("", VAR2);
continue;
}
*VAR15++ = '';



VAR16 *VAR17 = FUN8(VAR12);
if(!VAR17) VAR17 = FUN9(VAR12, VAR11);

if(VAR8[0] == '')
FUN10(VAR17->VAR18, VAR13, VAR15, VAR14, VAR11);
else
FUN11(VAR17->VAR18, VAR13, VAR15, VAR14, VAR11);

VAR4.VAR19++;
break;

default:
FUN4("", VAR2, VAR4.VAR5, VAR8);
break;
}
}

fclose(VAR7);
}


FUN12();

return VAR2;
}