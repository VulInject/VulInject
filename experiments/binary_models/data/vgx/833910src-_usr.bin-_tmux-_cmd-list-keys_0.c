static char *
FUN1(struct VAR1 *VAR1, VAR2 *VAR3)
{
char	*VAR4;

*VAR3 = FUN2(VAR5, "");
if (!FUN3(VAR1, '')) {
if (*VAR3 != VAR6)
FUN4(&VAR4, "", FUN5(*VAR3, 0));
else
VAR4 = xstrdup("");
} else
VAR4 = xstrdup(FUN6(VAR1, ''));
return (VAR4);
}