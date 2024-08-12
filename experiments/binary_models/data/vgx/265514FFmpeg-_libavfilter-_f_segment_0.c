static int FUN1(VAR1 *VAR2, char *VAR3, int VAR4, VAR5 *VAR6)
{
VAR7 *VAR8 = VAR2->VAR9;
char *VAR10, *VAR11 = VAR3;
char *VAR12 = NULL;
int64_t VAR13, VAR14 = 0;
int VAR15 = 0;

for (int VAR16 = 0; VAR16 < VAR4; VAR16++) {
if (!(VAR10 = FUN2(VAR11, "", &VAR12)))
return FUN3(VAR17);

VAR11 = NULL;
VAR13 = 0;
if (*VAR10 == '') {
VAR13 = VAR14;
VAR10++;
}

if (VAR8->VAR18) {
VAR15 = FUN4(&VAR6[VAR16], VAR10, VAR8->VAR18);
} else {
if (sscanf(VAR10, ""VAR19, &VAR6[VAR16]) != 1)
VAR15 = FUN3(VAR17);
}

if (VAR15 < 0) {
FUN5(VAR2, VAR20, "", VAR10);
return VAR15;
}

VAR14 = VAR6[VAR16];
VAR6[VAR16] += VAR13;
}

return 0;
}