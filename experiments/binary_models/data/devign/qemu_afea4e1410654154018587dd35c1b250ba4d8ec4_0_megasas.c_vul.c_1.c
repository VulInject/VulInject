static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    if (FUN3(VAR4))
    {
        FUN4(VAR2, &VAR4->VAR5, &VAR4->VAR5);
    }
    if (FUN5(VAR4))
    {
        FUN6(VAR2);
    }
}