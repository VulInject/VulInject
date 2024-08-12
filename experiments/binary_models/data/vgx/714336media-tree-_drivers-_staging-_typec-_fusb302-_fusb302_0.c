static void FUN1(struct VAR1 *VAR2, const char *VAR3,
va_list VAR4)
{
char VAR5[VAR6];
u64 VAR7 = FUN2();
unsigned long VAR8;

if (!VAR2->VAR9[VAR2->VAR10]) {
VAR2->VAR9[VAR2->VAR10] =
FUN3(VAR6, VAR11);
if (!VAR2->VAR9[VAR2->VAR10])
return;
}

vsnprintf(VAR5, sizeof(VAR5), VAR3, VAR4);

FUN4(&VAR2->VAR12);

if (FUN5(VAR2)) {
VAR2->VAR10 = FUN6(VAR2->VAR10 - 1, 0);
FUN7(VAR5, "", sizeof(VAR5));
}

if (VAR2->VAR10 < 0 ||
VAR2->VAR10 >= VAR13) {
FUN8(VAR2->VAR14,
"", VAR2->VAR10);
goto VAR15;
}

if (!VAR2->VAR9[VAR2->VAR10]) {
FUN8(VAR2->VAR14,
"", VAR2->VAR10);
goto VAR15;
}

VAR8 = FUN9(VAR7, 1000000000);
FUN10(VAR2->VAR9[VAR2->VAR10],
VAR6, "",
(unsigned long)VAR7, VAR8 / 1000,
VAR5);
VAR2->VAR10 = (VAR2->VAR10 + 1) % VAR13;

VAR15:
FUN11(&VAR2->VAR12);
}