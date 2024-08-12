static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = NULL;
    VAR2->VAR5 = FUN2(sizeof(*VAR2->VAR5));
    FUN3(VAR2->VAR6, FUN4(VAR2->VAR5), &VAR4);
    if (VAR4)
    {
        FUN5(VAR2->VAR5);
        VAR2->VAR5 = NULL;
        FUN6(VAR4);
    }
}