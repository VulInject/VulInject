static int FUN1(virConnectPtr conn VAR1,
int *VAR2, int VAR3)
{
int VAR4 = 0;
VIR_AUTOCLOSE VAR5 = -1;
FUN2(VAR6) VAR7 = FUN3(VAR8, "", "", NULL);

FUN4(VAR7, &VAR5);
if (FUN5(VAR7, NULL) < 0)
return -1;

while (VAR4 < VAR3) {
char *VAR9;
char VAR10[32];
int VAR11;

if (FUN6(VAR5, VAR10, 32) == 0)
break;
if (FUN7(VAR10, &VAR9, 10, &VAR11) < 0) {
FUN8(VAR12,
FUN9(""), VAR10);
continue;
}
VAR2[VAR4++] = VAR11;
}

if (FUN10(VAR7, NULL) < 0)
return -1;

if (FUN11(VAR5) < 0) {
FUN12(VAR13, "", FUN9(""));
return -1;
}

return VAR4;
}