int FUN1(char *VAR1, char *VAR2, int VAR3)
{
char *VAR4;
char *VAR5;


VAR4 = VAR1 + VAR3 * 2;

VAR5 = VAR4 - 1;
while (VAR5 >= VAR1) {
VAR4--;
*VAR4 = FUN2(*VAR5--);
*VAR4 |= FUN2(*VAR5--) << 4;
}

return FUN3(VAR2, VAR4, VAR3);
}