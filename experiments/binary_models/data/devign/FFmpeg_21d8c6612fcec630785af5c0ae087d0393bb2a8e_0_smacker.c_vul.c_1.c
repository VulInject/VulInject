static int FUN1(VAR1 *VAR2)
{
    GetBitContext VAR3;
    int VAR4, VAR5, VAR6, VAR7, VAR8;
    VAR4 = FUN2(VAR2->VAR9->VAR10);
    VAR5 = FUN2(VAR2->VAR9->VAR10 + 4);
    VAR6 = FUN2(VAR2->VAR9->VAR10 + 8);
    VAR7 = FUN2(VAR2->VAR9->VAR10 + 12);
    FUN3(&VAR3, VAR2->VAR9->VAR10 + 16, VAR2->VAR9->VAR11 - 16);
    if (!FUN4(&VAR3))
    {
        FUN5(VAR2->VAR9, VAR12, "");
        VAR2->VAR13 = FUN6(sizeof(int) * 2);
        if (!VAR2->VAR13)
            return FUN7(VAR14);
        VAR2->VAR13[0] = 0;
        VAR2->VAR15[0] = VAR2->VAR15[1] = VAR2->VAR15[2] = 1;
    }
    else
    {
        VAR8 = FUN8(VAR2, &VAR3, &VAR2->VAR13, VAR2->VAR15, VAR4);
        if (VAR8 < 0)
            return VAR8;
    }
    if (!FUN4(&VAR3))
    {
        FUN5(VAR2->VAR9, VAR12, "");
        VAR2->VAR16 = FUN6(sizeof(int) * 2);
        if (!VAR2->VAR16)
            return FUN7(VAR14);
        VAR2->VAR16[0] = 0;
        VAR2->VAR17[0] = VAR2->VAR17[1] = VAR2->VAR17[2] = 1;
    }
    else
    {
        VAR8 = FUN8(VAR2, &VAR3, &VAR2->VAR16, VAR2->VAR17, VAR5);
        if (VAR8 < 0)
            return VAR8;
    }
    if (!FUN4(&VAR3))
    {
        FUN5(VAR2->VAR9, VAR12, "");
        VAR2->VAR18 = FUN6(sizeof(int) * 2);
        if (!VAR2->VAR18)
            return FUN7(VAR14);
        VAR2->VAR18[0] = 0;
        VAR2->VAR19[0] = VAR2->VAR19[1] = VAR2->VAR19[2] = 1;
    }
    else
    {
        VAR8 = FUN8(VAR2, &VAR3, &VAR2->VAR18, VAR2->VAR19, VAR6);
        if (VAR8 < 0)
            return VAR8;
    }
    if (!FUN4(&VAR3))
    {
        FUN5(VAR2->VAR9, VAR12, "");
        VAR2->VAR20 = FUN6(sizeof(int) * 2);
        if (!VAR2->VAR20)
            return FUN7(VAR14);
        VAR2->VAR20[0] = 0;
        VAR2->VAR21[0] = VAR2->VAR21[1] = VAR2->VAR21[2] = 1;
    }
    else
    {
        VAR8 = FUN8(VAR2, &VAR3, &VAR2->VAR20, VAR2->VAR21, VAR7);
        if (VAR8 < 0)
            return VAR8;
    }
    return 0;
}