static int FUN1(struct VAR1 *VAR2, VAR3 *VAR4, const char *VAR5,
int *VAR6, int *VAR7)
{
int VAR8, VAR9, VAR10, VAR11, VAR12 = 0;
const struct VAR13 *VAR14;
const struct VAR15 *VAR16;
const char *VAR17;

if (!VAR2->VAR18) {
FUN2("", VAR2->VAR19);
return -VAR20;
}

VAR10 = FUN3(VAR2->VAR18);
for (VAR8 = 1; VAR8 < VAR10; VAR8++) {
VAR14 = FUN4(VAR2->VAR18, VAR8);


if (FUN5(VAR14)) {
VAR17 = FUN6(VAR2->VAR18, VAR14->VAR21);
if (strcmp(VAR17, VAR5) != 0)
continue;


VAR12 = VAR8;
continue;
}

if (!FUN7(VAR14))
continue;

VAR16 = FUN8(VAR14);
for (VAR9 = 0, VAR11 = FUN9(VAR14); VAR9 < VAR11; VAR9++, VAR16++) {
VAR14 = FUN4(VAR2->VAR18, VAR16->VAR22);
VAR17 = FUN6(VAR2->VAR18, VAR14->VAR21);

if (strcmp(VAR17, VAR5) != 0)
continue;
if (FUN10(VAR14) && FUN11(VAR14)->VAR23 == VAR24)
continue;
if (FUN12(VAR14) && FUN13(VAR14) == VAR25)
continue;

if (VAR12 && VAR12 != VAR16->VAR22) {
FUN2("",
VAR5, VAR12, VAR16->VAR22);
return -VAR20;
}

*VAR6 = VAR8;
*VAR7 = VAR16->VAR22;

return 0;
}
}


if (VAR12) {
*VAR6 = 0;
*VAR7 = VAR12;
return 0;
}

FUN2("", VAR5);
return -VAR26;
}