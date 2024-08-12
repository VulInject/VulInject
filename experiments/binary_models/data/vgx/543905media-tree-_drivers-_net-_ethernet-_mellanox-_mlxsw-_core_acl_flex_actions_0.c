struct VAR1 *FUN1(struct VAR2 *VAR2)
{
struct VAR1 *VAR3;

VAR3 = FUN2(sizeof(*VAR3), VAR4);
if (!VAR3)
return NULL;
FUN3(&VAR3->VAR5);
VAR3->VAR6 = VAR2;


VAR3->VAR7 = FUN4(true);
if (!VAR3->VAR7)
goto VAR8;
VAR3->VAR9 = VAR3->VAR7;
return VAR3;

VAR8:
FUN5(VAR3);
return NULL;
}