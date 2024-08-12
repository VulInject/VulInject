static void
FUN1(struct VAR1 *VAR2)
{
char	*VAR3;

if (asprintf(&VAR3, "", FUN2(&VAR2->VAR4), VAR2->VAR5) == -1)
FUN3(1, NULL);
FUN4("", FUN5(VAR2->VAR6), VAR2->VAR7, VAR3);
free(VAR3);

if (VAR2->VAR6 & VAR8)
FUN4("", VAR2->VAR9);
else
FUN4("", FUN2(&VAR2->VAR10));
if (VAR2->VAR6 & VAR11)
FUN4("", FUN6(VAR2->VAR12) >> VAR13);
FUN4("");
}