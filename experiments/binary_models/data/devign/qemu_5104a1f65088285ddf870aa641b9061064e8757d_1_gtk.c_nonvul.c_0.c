static void FUN1(VAR1 *VAR2, gboolean override)
{
    VAR3 *VAR4;
    bool VAR5;
    VAR4 = FUN2(FUN3(VAR2->VAR6));
    VAR5 = FUN4(VAR2);
    if ((override || VAR5) && (FUN5() || FUN6(VAR2)))
    {
        FUN7(VAR4, VAR2->VAR7);
    }
    else
    {
        FUN7(VAR4, NULL);
    }
}