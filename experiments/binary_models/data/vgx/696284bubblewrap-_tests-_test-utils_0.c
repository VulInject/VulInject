FUN1 (void)
{
const char *VAR1 = "";
const char *VAR2 = "";
const char *VAR3 = "";
char *VAR4 = FUN2 (VAR1, VAR2, VAR3);
FUN3 (VAR4, ==, "");
free (VAR4);
}