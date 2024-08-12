static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *const VAR7 = &VAR4->VAR7;
    VAR6 *const VAR8 = &VAR4->VAR8;
    struct v4l2_selection VAR9;
    int VAR10;
    if (!VAR8->VAR11)
    {
        VAR10 = FUN2(VAR8, VAR12);
        if (VAR10 < 0)
        {
            FUN3(VAR2, VAR13, "");
            return VAR10;
        }
    }
    if (VAR7->VAR11)
        return 0;
    VAR7->VAR14.VAR15 = VAR7->VAR15;
    VAR10 = FUN4(VAR4->VAR16, VAR17, &VAR7->VAR14);
    if (VAR10)
    {
        FUN3(VAR2, VAR18, "");
        return VAR10;
    }
    VAR2->VAR19 = FUN5(VAR7->VAR14.VAR20.VAR21.VAR22, VAR23);
    VAR7->VAR24 = VAR2->VAR19;
    VAR9.VAR15 = VAR25;
    VAR9.VAR26.VAR27 = VAR2->VAR28;
    VAR9.VAR26.VAR29 = VAR2->VAR30;
    VAR10 = FUN4(VAR4->VAR16, VAR31, &VAR9);
    if (!VAR10)
    {
        VAR10 = FUN4(VAR4->VAR16, VAR32, &VAR9);
        if (VAR10)
        {
            FUN3(VAR2, VAR18, "");
        }
        else
        {
            FUN3(VAR2, VAR13, "", VAR9.VAR26.VAR29, VAR9.VAR26.VAR27);
            VAR7->VAR27 = VAR9.VAR26.VAR27;
            VAR7->VAR29 = VAR9.VAR26.VAR29;
        }
    }
    if (!VAR7->VAR33)
    {
        VAR10 = FUN6(VAR7);
        if (VAR10)
        {
            FUN3(VAR2, VAR13, "");
            return VAR10;
        }
    }
    VAR10 = FUN2(VAR7, VAR12);
    if (VAR10)
    {
        FUN3(VAR2, VAR13, "");
        return VAR10;
    }
    return 0;
}