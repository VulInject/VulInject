static void FUN1(VAR1 *VAR2)
{
    FUN2(VAR2, VAR3);
    if (FUN3(VAR2->VAR4 || !VAR2->VAR5))
    {
        FUN2(VAR2, VAR3);
        return;
    }
    FUN4(VAR6);
    FUN5(VAR2);
}