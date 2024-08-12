char *FUN1(const char *VAR1, char **VAR2)
{
VAR3    *VAR4     = NULL;
VAR3   **VAR5      = NULL;
VAR6  *VAR7    = NULL;
char          *VAR8 = NULL;
size_t         VAR9  = 0;
size_t         VAR10;
char          *VAR11;

VAR4  = FUN2((const unsigned char *)VAR1, FUN3(VAR1), VAR12);
VAR5   = FUN4(VAR4, '', 0, VAR13, &VAR9);
VAR7 = FUN5(VAR14);

for (VAR10=0; VAR10<VAR9; VAR10++) {
FUN6(VAR5[VAR10], VAR15);
FUN7(VAR5[VAR10], VAR15);


FUN8(VAR5[VAR10]);
if (FUN9(VAR8) && FUN10(VAR5[VAR10], "", VAR16) != 0) {
FUN11(VAR5[VAR10]);

FUN12(VAR5[VAR10], (const unsigned char *)""", 1, VAR16);
FUN13(VAR5[VAR10], (const unsigned char *)""", 1, VAR16);

FUN14(VAR8);
VAR8 = FUN15(VAR5[VAR10], FUN16(VAR5[VAR10]));
} else {
VAR11 = FUN15(VAR5[VAR10], FUN16(VAR5[VAR10]));
FUN17(VAR7, VAR11);
FUN14(VAR11);
}
}

FUN18(VAR4);
FUN19(VAR5, VAR9);

VAR11 = FUN20(VAR7, "");
FUN21(VAR7);
if (VAR2 != NULL) {
*VAR2 = VAR8;
} else {
FUN14(VAR8);
}

return VAR11;
}