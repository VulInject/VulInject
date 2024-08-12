static void             FUN1  (VAR1     *VAR2);



static VAR3 *VAR4      = NULL;
static VAR5 *VAR6 = NULL;





VAR3 *
FUN2 ( VAR7 *VAR8,
VAR5      *VAR9)
{

if (VAR4 != NULL)
{
FUN3 (VAR4,
(VAR10) VAR11,
VAR8);
FUN4 (VAR4);
}

VAR4 = FUN5 ((VAR12) VAR13);

if (VAR9)
{
VAR5 *VAR14;

for (VAR14 = VAR9; VAR14; VAR14 = FUN6 (VAR14))
{
FUN7 (VAR14->VAR15);
}
}



FUN8 ("", FUN9 (VAR4));
return VAR4;
}