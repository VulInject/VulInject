static int
FUN1(VAR1 *VAR2)
{
int VAR3;
int VAR4 = 0;

while (((VAR3 = getc(VAR2)) != VAR5 || (!FUN2(VAR2) &&
!FUN3(VAR2))) && VAR3 != '') {
FUN4(VAR6, VAR7, VAR4 + 1, VAR8);
if (!(VAR6[VAR4++] = VAR3))
VAR9 = 1;
}
FUN4(VAR6, VAR7, VAR4 + 2, VAR8);
if (VAR3 == '')
VAR6[VAR4++] = VAR3;
else if (FUN3(VAR2)) {
FUN5(NULL);
FUN6("");
return VAR8;
} else if (VAR4) {
VAR6[VAR4++] = '';
VAR10 = 1;
}
VAR6[VAR4] = '';
return (VAR9 && VAR10 && VAR4) ? --VAR4 : VAR4;
}



int
FUN7(char *VAR11, char *VAR12, int VAR13, int VAR14)
{
VAR1 *VAR2;
int VAR15;

VAR2 = (*VAR11 == '') ? popen(VAR11+1, "") : fopen(FUN8(VAR11), VAR12);
if (VAR2 == NULL) {
FUN5(VAR11);
FUN6("");
return VAR8;
} else if ((VAR15 = FUN9(VAR2, VAR13, VAR14)) < 0)
return VAR8;
else if ((*VAR11 == '') ?  FUN10(VAR2) == -1 : fclose(VAR2) == VAR5) {
FUN5(VAR11);
FUN6("");
return VAR8;
}
if (!VAR16)
FUN11("", VAR15);
return VAR13 ? VAR14 - VAR13 + 1 : 0;
}