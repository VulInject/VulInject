void
FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4;
VAR5 *VAR6 = NULL;
VAR5 *VAR7 = NULL;
char VAR8;
int8_t VAR9;
int8_t VAR10;
int VAR11;

VAR4 = FUN2(VAR2->VAR12, &VAR13, NULL);
if(VAR4 == NULL) {
FUN3(0, VAR14, ""
"");
goto VAR15;
}
if(VAR16) {
FUN4("");
FUN5(&VAR13, VAR4);
}

for(VAR11 = 0 ; VAR11 < VAR13.VAR17 ; ++VAR11) {
if(!VAR4[VAR11].VAR18)
continue;
if(!strcmp(VAR13.VAR19[VAR11].VAR20, "")) {
VAR6 = (VAR5*) FUN6(VAR4[VAR11].VAR21.VAR22.VAR23, NULL);
} else if(!strcmp(VAR13.VAR19[VAR11].VAR20, "")) {
VAR7 = (VAR5*) FUN6(VAR4[VAR11].VAR21.VAR22.VAR23, NULL);
} else {
FUN4(""
"", VAR13.VAR19[VAR11].VAR20);
}
}


if(VAR7 == NULL) {
FUN7("");
goto VAR15;
}
if(VAR6 == NULL) {
FUN7("");
goto VAR15;
}

if(   strlen((char*)VAR7) != 6
|| !(VAR7[0] == '' || VAR7[0] == '')
|| !(FUN8(VAR7[1]) && FUN8(VAR7[2]))
|| VAR7[3] != ''
|| !(FUN8(VAR7[4]) && FUN8(VAR7[5]))
) {
FUN7(""-07:00\"");
goto VAR15;
}

VAR9 = (VAR7[1] - '') * 10 + VAR7[2] - '';
VAR10  = (VAR7[4] - '') * 10 + VAR7[5] - '';
VAR8 = VAR7[0];

if(VAR9 > 12 || VAR10 > 59) {
FUN7("");
goto VAR15;
}

FUN9(VAR24, VAR6, VAR8, VAR9, VAR10);

VAR15:
FUN10(VAR4, &VAR13);
free(VAR6);
free(VAR7);
}