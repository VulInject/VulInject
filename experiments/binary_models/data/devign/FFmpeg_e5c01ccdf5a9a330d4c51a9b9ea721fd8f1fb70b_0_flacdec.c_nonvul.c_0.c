static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    VAR5 *VAR6 = &VAR2->VAR6;
    FLACFrameInfo VAR7;
    if ((VAR4 = FUN2(VAR2->VAR8, VAR6, &VAR7, 0)) < 0)
    {
        FUN3(VAR2->VAR8, VAR9, "");
        return VAR4;
    }
    if (VAR2->VAR10 && VAR7.VAR10 != VAR2->VAR10 && VAR2->VAR11)
    {
        VAR2->VAR10 = VAR2->VAR8->VAR10 = VAR7.VAR10;
        FUN4(VAR2->VAR8);
        VAR4 = FUN5(VAR2);
        if (VAR4 < 0)
            return VAR4;
    }
    VAR2->VAR10 = VAR2->VAR8->VAR10 = VAR7.VAR10;
    if (!VAR2->VAR8->VAR12)
        FUN4(VAR2->VAR8);
    VAR2->VAR13 = VAR7.VAR13;
    if (!VAR2->VAR14 && !VAR7.VAR14)
    {
        FUN3(VAR2->VAR8, VAR9, "");
        return VAR15;
    }
    if (!VAR7.VAR14)
    {
        VAR7.VAR14 = VAR2->VAR14;
    }
    else if (VAR2->VAR14 && VAR7.VAR14 != VAR2->VAR14)
    {
        FUN3(VAR2->VAR8, VAR9, ""
                                       "");
        return VAR15;
    }
    if (!VAR2->VAR14)
    {
        VAR2->VAR14 = VAR2->VAR8->VAR16 = VAR7.VAR14;
        FUN6(VAR2);
    }
    if (!VAR2->VAR17)
        VAR2->VAR17 = VAR18;
    if (VAR7.VAR19 > VAR2->VAR17)
    {
        FUN3(VAR2->VAR8, VAR9, "", VAR7.VAR19, VAR2->VAR17);
        return VAR15;
    }
    VAR2->VAR19 = VAR7.VAR19;
    if (!VAR2->VAR20 && !VAR7.VAR20)
    {
        FUN3(VAR2->VAR8, VAR9, ""
                                       "");
        return VAR15;
    }
    if (VAR7.VAR20 == 0)
        VAR7.VAR20 = VAR2->VAR20;
    VAR2->VAR20 = VAR2->VAR8->VAR21 = VAR7.VAR20;
    if (!VAR2->VAR11)
    {
        VAR4 = FUN5(VAR2);
        if (VAR4 < 0)
            return VAR4;
        VAR2->VAR11 = 1;
        FUN7(VAR2->VAR8, (VAR22 *)VAR2);
    }
    FUN8(&VAR2->VAR23, VAR2->VAR8->VAR24, VAR2->VAR10, VAR2->VAR14);
    for (VAR3 = 0; VAR3 < VAR2->VAR10; VAR3++)
    {
        if ((VAR4 = FUN9(VAR2, VAR3)) < 0)
            return VAR4;
    }
    FUN10(VAR6);
    FUN11(VAR6, 16);
    return 0;
}