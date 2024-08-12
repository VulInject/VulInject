static void FUN1(void)
{
const char *VAR1 = "";
VAR2 *VAR3 = FUN2();

FUN3(VAR3, VAR1, 0);
FUN4(FUN5(VAR3, VAR1) == 1);

FUN6(VAR3);
}