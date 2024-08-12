struct VAR1 *FUN1(struct VAR2 *VAR3)
{
struct VAR1 *VAR4 = NULL;

FUN2(VAR5, FUN3(VAR3, "", VAR3->VAR6));
if (VAR7->VAR8)
return FUN4(VAR3);

VAR4 = FUN5(VAR3);
if (!VAR4)
VAR4 = FUN6(VAR3);
return VAR4;
}