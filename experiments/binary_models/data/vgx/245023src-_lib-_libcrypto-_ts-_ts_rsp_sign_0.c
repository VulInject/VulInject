static VAR1 *
FUN1(struct VAR2 *VAR3, void *VAR4)
{
VAR1 *VAR5 = FUN2();

if (!VAR5)
goto VAR6;
if (!FUN3(VAR5, 1))
goto VAR6;
return VAR5;

VAR6:
FUN4(VAR7);
FUN5(VAR3, VAR8,
"");
return NULL;
}