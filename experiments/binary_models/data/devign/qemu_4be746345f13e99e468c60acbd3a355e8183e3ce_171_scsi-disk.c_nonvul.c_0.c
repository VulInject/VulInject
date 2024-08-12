static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR5, VAR7, VAR2);
    VAR3 *VAR8 = NULL;
    if (!VAR6->VAR7.VAR9.VAR10)
    {
        FUN3(VAR4, "");
        return;
    }
    if (!(VAR6->VAR11 & (1 << VAR12)) && !FUN4(VAR6->VAR7.VAR9.VAR10))
    {
        FUN3(VAR4, "");
        return;
    }
    FUN5(&VAR6->VAR7.VAR9, &VAR6->VAR13);
    if (VAR2->VAR14 == VAR15)
    {
        FUN6(&VAR2->VAR9, NULL, 65535, 255, 255, &VAR8);
        if (VAR8)
        {
            FUN7(VAR4, VAR8);
            return;
        }
    }
    if (VAR6->VAR7.VAR9.VAR16 == -1)
    {
        VAR6->VAR7.VAR9.VAR16 = FUN8(VAR6->VAR7.VAR9.VAR17, VAR18);
    }
    if (!VAR6->VAR19)
    {
        VAR6->VAR19 = FUN9(FUN10());
    }
    if (!VAR6->VAR20)
    {
        VAR6->VAR20 = FUN9("");
    }
    if (FUN11(VAR6->VAR7.VAR9.VAR10))
    {
        FUN3(VAR4, "");
        return;
    }
    if ((VAR6->VAR11 & (1 << VAR12)) && !(VAR6->VAR11 & (1 << VAR21)))
    {
        FUN12(VAR6->VAR7.VAR9.VAR10, &VAR22, VAR6);
    }
    else
    {
        FUN12(VAR6->VAR7.VAR9.VAR10, &VAR23, VAR6);
    }
    FUN13(VAR6->VAR7.VAR9.VAR10, VAR6->VAR7.VAR24);
    FUN14(VAR6->VAR7.VAR9.VAR10);
}