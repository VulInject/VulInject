static VAR1 *
FUN1(VAR2 *VAR3)
{
VAR1 *VAR4;
char	   *VAR5;

VAR4 = FUN2(VAR3, &VAR5);

if (VAR4 == NULL)
{
VAR6 *VAR7;


VAR7 = (VAR6 *)
VAR3->VAR7;

if (VAR7->VAR8)
return NULL;

if (VAR5)
FUN3(VAR9,
(FUN4(),
FUN5("",
FUN6(VAR3->VAR10), VAR5)));
else
FUN3(VAR9,
(FUN4(),
FUN5("",
FUN6(VAR3->VAR10))));
}

return VAR4;
}