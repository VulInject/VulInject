FUN1 (struct VAR1 *VAR2)
{
struct VAR1 *VAR3, *VAR4;

if (!VAR2)
return;

for (VAR3 = FUN2 (VAR2); VAR3; VAR3 = VAR4)
{
VAR4 = FUN3 (VAR3);
FUN4 (VAR3);
}

FUN5 (VAR2, 0);
FUN6 (VAR2->VAR5, VAR6);
assert (FUN2 (VAR2) == 0);
}