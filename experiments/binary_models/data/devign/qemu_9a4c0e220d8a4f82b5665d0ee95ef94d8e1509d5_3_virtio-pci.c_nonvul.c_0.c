static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    bool VAR5 = FUN3(VAR4);
    bool VAR6 = VAR4->VAR7 & VAR8;
    FUN4(VAR4);
    if (VAR5)
    {
        FUN5(VAR4, &VAR4->VAR9);
        FUN5(VAR4, &VAR4->VAR10);
        FUN5(VAR4, &VAR4->VAR11);
        FUN5(VAR4, &VAR4->VAR12);
        if (VAR6)
        {
            FUN6(VAR4, &VAR4->VAR13);
        }
    }
}