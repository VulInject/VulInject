void FUN1(struct VAR1 *VAR1)
{
unsigned long VAR2;
struct VAR3 *VAR3 = &VAR1->VAR3;
struct VAR4 *VAR5 = FUN2(VAR3);
struct VAR6 *VAR7;

FUN3(&VAR3->VAR8, VAR2);
VAR7 = VAR1->VAR9;
VAR1->VAR9 = NULL;
FUN4(&VAR3->VAR8, VAR2);
if (VAR7)
FUN5(VAR7);
else
FUN6(1, VAR5, "");
}