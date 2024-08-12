static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9;
    int VAR10, VAR11;
    VAR10 = FUN2(NULL, VAR2->VAR12, VAR4->VAR13, VAR2->VAR14, 0);
    if (VAR10 < 0)
        return FUN3(VAR15);
    if (!VAR6->VAR16)
    {
        VAR6->VAR16 = FUN4(sizeof(VAR8));
        if (!VAR6->VAR16)
            return FUN3(VAR17);
    }
    VAR9 = VAR6->VAR16;
    if (VAR9->VAR18)
    {
        if (VAR9->VAR18[0] && VAR10 > VAR9->VAR19)
        {
            FUN5(VAR9->VAR18[0]);
            if (VAR9->VAR18 != VAR9->VAR20)
                FUN5(VAR9->VAR18);
            VAR9->VAR18 = NULL;
            VAR9->VAR20[0] = NULL;
        }
        if (VAR9->VAR21 != VAR2->VAR12)
        {
            if (VAR9->VAR18 != VAR9->VAR20)
                FUN5(VAR9->VAR18);
            VAR9->VAR18 = NULL;
        }
    }
    if (!VAR9->VAR18)
    {
        if (!VAR9->VAR20[0])
        {
            if (!(VAR9->VAR20[0] = FUN4(VAR10)))
                return FUN3(VAR17);
            VAR9->VAR19 = VAR10;
        }
        if ((VAR11 = FUN6(VAR4, VAR2->VAR12, VAR2->VAR14, VAR9->VAR20[0], VAR9->VAR19, 0)) < 0)
            return VAR11;
        if (VAR4->VAR18 == VAR4->VAR20)
            VAR9->VAR18 = VAR9->VAR20;
        else
            VAR9->VAR18 = VAR4->VAR18;
        memcpy(VAR9->VAR20, VAR4->VAR20, sizeof(VAR4->VAR20));
        VAR9->VAR22[0] = VAR4->VAR22[0];
        VAR9->VAR21 = VAR2->VAR12;
    }
    else
    {
        VAR4->VAR18 = VAR9->VAR18;
        VAR4->VAR22[0] = VAR9->VAR22[0];
        memcpy(VAR4->VAR20, VAR9->VAR20, sizeof(VAR4->VAR20));
    }
    VAR4->VAR23 = VAR24;
    FUN7(VAR2, VAR4);
    if (VAR2->VAR25 & VAR26)
        FUN8(VAR2, VAR27, ""
                                    "",
               VAR4);
    return 0;
}