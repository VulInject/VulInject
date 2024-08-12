static void FUN1(VAR1 *VAR2, struct VAR3 *VAR3)
{
    VAR2->VAR4 = FUN2(VAR3);
    if (VAR2->VAR5 != NULL)
    {
        FUN3(VAR2->VAR5);
        VAR2->VAR5 = NULL;
    }
    if (VAR2->VAR4 - FUN4(NULL) > 0)
        FUN5(VAR2->VAR5, VAR2->VAR4 * 1000);
}