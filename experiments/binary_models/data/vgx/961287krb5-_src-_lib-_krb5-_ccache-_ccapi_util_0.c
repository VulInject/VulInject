void
FUN1(VAR1 *VAR2)
{
VAR3 *VAR4;

if (VAR2 == NULL)
return;
if (VAR2->VAR5 != VAR6)
return;
if (VAR2->VAR7.VAR8 == NULL)
return;

VAR4 = VAR2->VAR7.VAR8;

free(VAR4->VAR9);
free(VAR4->VAR10);
free(VAR4->VAR11.VAR12);
free(VAR4->VAR13.VAR12);
free(VAR4->VAR14.VAR12);
FUN2(VAR4->VAR15);
FUN2(VAR4->VAR16);
free(VAR4);
free(VAR2);
}