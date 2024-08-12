static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR6);
    VAR3 *VAR9 = NULL;
    FUN4("");
    VAR8->FUN5(VAR2, &VAR9);
    if (VAR9)
    {
        FUN6(VAR4, VAR9);
        return;
    }
    if (VAR6->VAR10)
    {
        FUN7(VAR4, ""
                         "");
        return;
    }
    FUN8(VAR6, VAR11, NULL);
    VAR6->VAR12 = FUN9(VAR13, VAR14, false);
    if (VAR6->VAR12 < 0)
    {
        FUN10(VAR4, -VAR6->VAR12, "");
        return;
    }
    FUN11(VAR6->VAR12, VAR15, 0, &VAR6->VAR16, true);
    FUN11(VAR6->VAR12, VAR17, VAR18, NULL, true);
    FUN12(&VAR6->VAR19, -1, VAR20, VAR21, VAR6->VAR12);
    FUN12(&VAR6->VAR22, -1, VAR20, VAR23, VAR6->VAR12);
    FUN7(&VAR6->VAR24, "");
    FUN13(VAR6->VAR24);
    if (FUN14())
    {
        FUN15(VAR13);
        for (VAR25 = 0; VAR25 < VAR6->VAR16 - VAR26; ++VAR25)
        {
            FUN16(VAR13, VAR25, 0, VAR25);
        }
        VAR27 = true;
        FUN17(VAR13);
    }