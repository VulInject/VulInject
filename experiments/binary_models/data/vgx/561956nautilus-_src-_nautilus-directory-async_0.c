FUN1 (VAR1      *VAR2,
VAR3 *VAR4,
gpointer      VAR5)
{
VAR6 *VAR7;
VAR8 *VAR9;
VAR10 *VAR11;

VAR11 = VAR5;

if (VAR11->VAR7 == NULL)
{

FUN2 (VAR11);
return;
}

VAR7 = FUN3 (VAR11->VAR7);


VAR9 = FUN4 (FUN5 (VAR2), VAR4, NULL);
if (VAR9 != NULL)
{
FUN6 (VAR7, VAR9);
FUN7 (VAR9);
}

FUN2 (VAR11);

FUN8 (VAR7);
}