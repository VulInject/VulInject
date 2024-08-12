int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    int VAR5;
    SyncClocks VAR6;
    VAR7 = VAR2;
    if (FUN3(VAR2))
    {
        return VAR8;
    }
    FUN4();
    VAR4->FUN5(VAR2);
    FUN6(&VAR6, VAR2);
    if (FUN7(VAR2->VAR9, 0) != 0)
    {
        VAR2 = VAR7;
        VAR4 = FUN2(VAR2);
        FUN8(VAR2 == VAR7);
        FUN8(VAR4 == FUN2(VAR2));
        VAR2->VAR10 = 1;
        FUN9();
        if (FUN10())
        {
            FUN11();
        }
    }
    while (!FUN12(VAR2, &VAR5))
    {
        VAR11 *VAR12 = NULL;
        int VAR13 = 0;
        while (!FUN13(VAR2, &VAR12))
        {
            VAR11 *VAR14 = FUN14(VAR2, VAR12, VAR13);
            FUN15(VAR2, VAR14, &VAR12, &VAR13, &VAR6);
            FUN16(&VAR6, VAR2);
        }
    }
    VAR4->FUN17(VAR2);
    FUN18();
    VAR7 = NULL;
    return VAR5;
}