static VAR1
FUN1(unsigned int VAR2, unsigned int VAR3, const char **VAR4,
VAR5 *VAR6, int VAR7)
{
VAR8 *VAR9;

FUN2(VAR2 % VAR10 == 0);
FUN2(VAR3 <= VAR10);
FUN2(VAR4 != NULL);


VAR9 = malloc(sizeof(*VAR9));
if (VAR9 == NULL)
return (VAR11);
VAR9->VAR2 = VAR2;
VAR9->VAR12 = VAR2 + VAR3 - 1;
VAR9->VAR13 = VAR4;
VAR9->VAR6 = VAR6;
VAR9->VAR7 = VAR7;
FUN3(VAR9, VAR14);

FUN4(&VAR15);

FUN5(VAR16, VAR9, VAR14);

FUN6(&VAR15);

return (VAR17);
}