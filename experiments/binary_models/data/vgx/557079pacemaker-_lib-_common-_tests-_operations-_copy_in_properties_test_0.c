static void
FUN1(void **VAR1)
{
VAR2 *VAR3 = FUN2(NULL, "");
VAR2 *VAR4 = NULL;

FUN3(VAR3, "", "", NULL);

FUN4(VAR4, VAR3);

FUN5(VAR4, NULL);
}