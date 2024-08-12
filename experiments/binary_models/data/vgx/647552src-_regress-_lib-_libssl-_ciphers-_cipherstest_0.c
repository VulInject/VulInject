static int
FUN1(void)
{
struct VAR1 *VAR2;
FUN2(VAR3) *VAR4 = NULL;
VAR3 *VAR5;
VAR6 *VAR7 = NULL;
VAR8 *VAR9 = NULL;
int VAR10 = 0;
size_t VAR11;
int VAR12;

for (VAR11 = 0; VAR11 < VAR13; VAR11++) {
VAR2 = &VAR14[VAR11];

if (!FUN3() && VAR2->VAR15) {
VAR2->VAR16[0] = VAR17;
VAR2->VAR16[1] = VAR18;
}

if ((VAR7 = FUN4(FUN5())) == NULL)
FUN6(1, "");

if (VAR2->VAR19 && VAR2->VAR20 != NULL) {
if (!FUN7(VAR7, VAR2->VAR20))
FUN6(1, "");
}
if (VAR2->VAR21 != NULL) {
if (!FUN8(VAR7, VAR2->VAR21))
FUN6(1, "");
}
if (!VAR2->VAR19 && VAR2->VAR20 != NULL) {
if (!FUN7(VAR7, VAR2->VAR20))
FUN6(1, "");
}



if ((VAR9 = FUN9(VAR7)) == NULL)
FUN6(1, "");

if (VAR2->VAR22 && VAR2->VAR23 != NULL) {
if (!FUN10(VAR9, VAR2->VAR23))
FUN6(1, "");
}
if (VAR2->VAR24 != NULL) {
if (!FUN11(VAR9, VAR2->VAR24))
FUN6(1, "");
}
if (!VAR2->VAR22 && VAR2->VAR23 != NULL) {
if (!FUN10(VAR9, VAR2->VAR23))
FUN6(1, "");
}

VAR4 = FUN12(VAR9);

for (VAR12 = 0; VAR12 < FUN13(VAR4); VAR12++) {
VAR5 = FUN14(VAR4, VAR12);
if (FUN15(VAR5) == VAR2->VAR16[VAR12])
continue;
fprintf(VAR25, ""
"", VAR11, VAR12,
FUN15(VAR5), VAR2->VAR16[VAR12]);
VAR10 |= 1;
}
if (VAR2->VAR16[VAR12] != 0) {
fprintf(VAR25, ""
"", VAR11, FUN13(VAR4));
VAR10 |= 1;
}

FUN16(VAR7);
FUN17(VAR9);
}

return VAR10;
}