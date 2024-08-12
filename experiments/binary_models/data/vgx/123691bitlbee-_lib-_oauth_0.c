static char *FUN1(const char *VAR1, const char *VAR2,
const char *VAR3, struct VAR4 *VAR5)
{
uint8_t VAR6[VAR7];
VAR8 *VAR9 = FUN2("");
char *VAR10;
char *VAR11;

VAR10 = FUN3("", VAR5->VAR12->VAR13, VAR5->VAR14 ? VAR5->VAR14 : "");

FUN4(VAR9, "", VAR1);

VAR11 = FUN5(char, strlen(VAR2) * 3 + 1);
strcpy(VAR11, VAR2);
FUN6(VAR11);
FUN4(VAR9, "", VAR11);
FUN7(VAR11);

VAR11 = FUN5(char, strlen(VAR3) * 3 + 1);
strcpy(VAR11, VAR3);
FUN6(VAR11);
FUN8(VAR9, VAR11);
FUN7(VAR11);

FUN9(VAR10, 0, VAR9->VAR15, 0, VAR6);

FUN7(VAR10);
FUN10(VAR9, VAR16);


VAR11 = FUN11(VAR6, VAR7);
VAR11 = FUN12(VAR11, strlen(VAR11) * 3 + 1);
FUN6(VAR11);

return VAR11;
}