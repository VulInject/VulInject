void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR4;
struct VAR5 *VAR6 = &VAR4->VAR7;

if (VAR6->VAR8->VAR9)
VAR6->VAR8->FUN2(VAR2);
else
FUN3(VAR2);
}