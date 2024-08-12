FUN1 (void)
{
unsigned VAR1;
struct VAR2 *VAR2;
struct VAR3 *VAR4;

for (VAR1 = 0; VAR1 < FUN2 (VAR5); VAR1++)
{
struct VAR6 * VAR7 = FUN3 (VAR5, VAR1);
if (!VAR7)
continue;

VAR4 = FUN4 (VAR7);
if (!VAR4)
continue;

VAR2 = VAR4->VAR2;
FUN5 (VAR2 != NULL);

FUN6 (VAR2->VAR8);
free (VAR2);
FUN4 (VAR7) = NULL;
}

for (VAR1 = 0; FUN7 (VAR9, VAR10, VAR1, VAR4); VAR1++)
{
FUN8 (VAR4->VAR11);
free (VAR4);
}
FUN9 (VAR9, VAR12, VAR10);
}