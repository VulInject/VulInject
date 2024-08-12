static void
FUN1(struct VAR1 *VAR2, u_int VAR3, const char *VAR4)
{
struct VAR5 *VAR5;

if ((VAR5 = xcalloc(1, sizeof(*VAR5))) == NULL)
FUN2("");
VAR5->VAR3 = VAR3;
VAR5->VAR4 = xstrdup(VAR4);
if (FUN3(VAR1, VAR2, VAR5) != NULL)
FUN4(VAR5);
}