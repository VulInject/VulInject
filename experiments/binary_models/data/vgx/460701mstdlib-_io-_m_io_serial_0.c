void FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4)
{
VAR5 *VAR6;

if (VAR2 == NULL || FUN2(VAR3))
return;


if (FUN2(VAR4))
VAR4 = VAR3;

VAR6       = FUN3(sizeof(*VAR6));
VAR6->VAR4 = FUN4(VAR4);
VAR6->VAR3 = FUN4(VAR3);
FUN5(VAR2->VAR7, VAR6);
}