static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR7;
    int VAR8;
    VAR4->VAR9 = VAR4->VAR10 + VAR4->VAR11;
    FUN2(VAR2);
    VAR4->VAR12 = FUN3(VAR7);
    if (VAR4->VAR13)
    {
        if ((VAR8 = FUN4(VAR2, 0, 0, VAR14, 0)) < 0)
            return VAR8;
    }
    else
    {
        if ((VAR8 = FUN4(VAR2, 0, 2, VAR14, 0)) < 0)
            return VAR8;
        FUN2(VAR2);
        FUN5(VAR2);
    }
    FUN2(VAR2);
    FUN6(VAR2);
    if (VAR2->VAR7->VAR15)
    {
        FUN7(VAR7, 0, VAR16);
        if (VAR4->VAR13)
        {
            if ((VAR8 = FUN4(VAR2, 1, 2, VAR17, 1)) < 0)
                return VAR8;
            FUN2(VAR2);
            FUN5(VAR2);
        }
        else
        {
            if ((VAR8 = FUN4(VAR2, 0, 0, VAR17, 1)) < 0)
                return VAR8;
        }
    }
    FUN8(VAR2);
    FUN9(&VAR4->VAR18);
    FUN9(&VAR4->VAR19);
    FUN9(&VAR4->VAR20->VAR5);
    FUN9(&VAR4->VAR20);
    FUN10(VAR2);
    return 0;
}