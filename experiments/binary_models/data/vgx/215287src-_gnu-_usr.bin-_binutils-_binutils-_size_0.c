FUN1 (char *VAR1)
{
VAR2 *VAR3;

if (FUN2 (VAR1) < 1)
return;

VAR3 = FUN3 (VAR1, VAR4);
if (VAR3 == NULL)
{
FUN4 (VAR1);
VAR5 = 1;
return;
}

if (FUN5 (VAR3, VAR6))
FUN6 (VAR3);
else
FUN7 (VAR3);

if (!FUN8 (VAR3))
{
FUN4 (VAR1);
VAR5 = 1;
return;
}
}