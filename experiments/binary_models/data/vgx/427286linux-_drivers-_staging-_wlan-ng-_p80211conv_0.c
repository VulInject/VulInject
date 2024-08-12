void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct VAR5 *VAR6;

VAR6 = FUN2(VAR4);
if (VAR6 && VAR6->VAR7)
FUN3(VAR4);
else
FUN4(VAR2->VAR8,
"", VAR4);
FUN5(VAR4);
}