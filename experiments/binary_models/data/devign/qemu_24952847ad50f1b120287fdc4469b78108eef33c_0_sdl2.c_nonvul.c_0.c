static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    struct VAR5 *VAR6 = FUN2(VAR2->VAR7.VAR8);
    if (FUN3() || VAR9)
    {
        int VAR10, VAR11;
        FUN4(VAR6->VAR12, &VAR10, &VAR11);
        VAR3 = VAR10 - 1;
        VAR4 = VAR11 - 1;
        if (VAR13 && !VAR14 && (VAR2->VAR15.VAR16 == 0 || VAR2->VAR15.VAR17 == 0 || VAR2->VAR15.VAR16 == VAR3 || VAR2->VAR15.VAR17 == VAR4))
        {
            FUN5(VAR6);
        }
        if (!VAR13 && (VAR2->VAR15.VAR16 > 0 && VAR2->VAR15.VAR16 < VAR3 && VAR2->VAR15.VAR17 > 0 && VAR2->VAR15.VAR17 < VAR4))
        {
            FUN6(VAR6);
        }
    }
    if (VAR13 || FUN3() || VAR9)
    {
        FUN7(VAR6, VAR2->VAR15.VAR18, VAR2->VAR15.VAR19, VAR2->VAR15.VAR16, VAR2->VAR15.VAR17, VAR2->VAR15.VAR20);
    }
}