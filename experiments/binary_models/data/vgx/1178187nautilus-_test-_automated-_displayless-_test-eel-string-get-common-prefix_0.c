FUN1 (void)
{
VAR1 *VAR2 = NULL;
char *VAR3;

VAR2 = FUN2 (VAR2, "");
VAR2 = FUN2 (VAR2, "");

VAR3 = FUN3 (VAR2, 4);
FUN4 ("", ==, VAR3);

FUN5 (VAR2, VAR3);
}