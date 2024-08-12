static VAR1 FUN1(char *VAR2, VAR3 *VAR4)
{
char VAR5[2048], VAR6[10];
u32 VAR7;
VAR8 *VAR9 = FUN2(VAR2, "");
if (!VAR9) return VAR10;

while (FUN3(VAR5, 2048, VAR9) != NULL) {
FUN4(VAR5, "")

if (strlen(VAR5)) break;
}
*VAR4 = VAR11;
if ((VAR5[0]=='') && strstr(VAR5, "")) *VAR4 = VAR12;
else if (sscanf(VAR5, "", &VAR7)==1) {
sprintf(VAR6, "", VAR7);
if (!strcmp(VAR6, VAR5)) *VAR4 = VAR13;
}
else if (!FUN5(VAR5, "", 6)) {
char *VAR14 = FUN6(VAR2);
if (!FUN5(VAR14, "", 5)) *VAR4 = VAR15;
VAR14 = strstr(VAR5, "");
if (VAR14) VAR14 += 2;
if (VAR14 && !VAR14[0]) {
if (!FUN3(VAR5, 2048, VAR9))
VAR5[0] = '';
}
if (strstr(VAR5, "")) *VAR4 = VAR16;
}
FUN7(VAR9);
return VAR17;
}