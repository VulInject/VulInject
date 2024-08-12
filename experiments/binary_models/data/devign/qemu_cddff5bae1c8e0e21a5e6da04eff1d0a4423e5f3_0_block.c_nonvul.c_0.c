VAR1 *FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7)
{
    assert(VAR4 != NULL);
    VAR8 *VAR9;
    VAR10 *VAR11;
    VAR5 *VAR12;
    if (VAR2 == NULL)
    {
        VAR2 = FUN2(VAR1, 1);
        FUN3(VAR2);
    }
    if (!VAR6)
    {
        VAR6 = FUN4();
    }
    VAR12 = FUN5(VAR4->VAR6);
    FUN6(VAR4, VAR6, VAR12);
    FUN7(VAR12);
    VAR7 &= ~VAR13;
    FUN8(VAR11, &VAR4->VAR14, VAR15)
    {
        int VAR16;
        if (VAR11->VAR4->VAR17 != VAR4)
        {
            continue;
        }
        VAR16 = VAR11->VAR18->FUN9(VAR7);
        FUN1(VAR2, VAR11->VAR4, NULL, VAR16);
    }
    VAR9 = FUN2(VAR8, 1);
    FUN10(VAR2, VAR9, VAR19);
    VAR9->VAR20.VAR4 = VAR4;
    VAR9->VAR20.VAR6 = VAR6;
    VAR9->VAR20.VAR7 = VAR7;
    return VAR2;
}