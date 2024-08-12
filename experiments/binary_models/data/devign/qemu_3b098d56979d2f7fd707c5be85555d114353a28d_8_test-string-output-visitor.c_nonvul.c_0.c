static void FUN1(VAR1 *VAR2, const void *VAR3)
{
    FUN2(VAR2->VAR4);
    VAR2->VAR4 = NULL;
    FUN3(VAR2->VAR5);
    VAR2->VAR5 = NULL;
}