void FUN1(struct VAR1 **VAR2)
{
if (!VAR2 || !*VAR2)
return;

struct VAR1 *VAR3 = *VAR2;

FUN2(VAR3);
FUN3(&VAR3->VAR4);
FUN3(&VAR3->VAR5);
FUN3(&VAR3->VAR6);
FUN3(&VAR3->VAR7);
FUN3(VAR2);
}