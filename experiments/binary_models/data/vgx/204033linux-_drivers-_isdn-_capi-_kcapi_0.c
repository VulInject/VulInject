static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4;
struct VAR5 *VAR6 =
FUN2(VAR2, struct VAR5, VAR7);

if ((!VAR6) || (VAR6->VAR8))
return;

FUN3(&VAR6->VAR9);
while ((VAR4 = FUN4(&VAR6->VAR10))) {
if (FUN5(VAR4->VAR11) == VAR12)
VAR6->VAR13++;
else
VAR6->VAR14++;

VAR6->FUN6(VAR6, VAR4);
}
FUN7(&VAR6->VAR9);
}