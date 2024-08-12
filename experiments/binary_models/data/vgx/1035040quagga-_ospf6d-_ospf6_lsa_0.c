FUN1 (struct VAR1 *VAR1)
{
u_int VAR2;
struct VAR3 *VAR4;

for (VAR2 = 0; VAR2 < FUN2 (VAR5); VAR2++)
{
VAR4 = FUN3 (VAR5, VAR2);
if (VAR4 == NULL)
continue;
if (FUN4 (VAR4->VAR6, VAR7))
FUN5 (VAR1, "",
FUN6 (VAR4), VAR8);
if (FUN4 (VAR4->VAR6, VAR9))
FUN5 (VAR1, "",
FUN6 (VAR4), VAR8);
if (FUN4 (VAR4->VAR6, VAR10))
FUN5 (VAR1, "",
FUN6 (VAR4), VAR8);
if (FUN4 (VAR4->VAR6, VAR11))
FUN5 (VAR1, "",
FUN6 (VAR4), VAR8);
}

return 0;
}