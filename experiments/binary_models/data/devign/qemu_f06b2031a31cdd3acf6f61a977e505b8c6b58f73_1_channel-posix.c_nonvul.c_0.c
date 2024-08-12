static void FUN1(VAR1 *VAR2)
{
    FUN2(VAR2->VAR3);
    FUN3(VAR2->VAR3, true, NULL);
    FUN4(VAR2->VAR3);
    VAR2->VAR3 = NULL;
}