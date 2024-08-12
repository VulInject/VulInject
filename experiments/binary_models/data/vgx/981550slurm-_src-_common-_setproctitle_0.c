static void FUN1 (const char *VAR1)
{
char *VAR2 = strrchr (VAR1, '');
FUN2 (VAR3, VAR2 ? (VAR2 + 1) : VAR1, sizeof (VAR3));
return;
}