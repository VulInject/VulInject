void *FUN1(VAR1 *VAR2, size_t VAR3)
{
    unsigned int VAR4, VAR5, VAR6;
    hwaddr VAR7 = VAR2->VAR8.VAR9;
    VAR10 *VAR11 = VAR2->VAR11;
    VAR12 *VAR13;
    unsigned VAR14, VAR15;
    hwaddr VAR16[VAR17];
    struct iovec VAR18[VAR17];
    VRingDesc VAR9;
    if (FUN2(VAR2))
    {
        return NULL;
    }
    FUN3();
    VAR14 = VAR15 = 0;
    VAR6 = VAR2->VAR8.VAR19;
    VAR4 = VAR5 = FUN4(VAR2, VAR2->VAR20++);
    if (FUN5(VAR11, VAR21))
    {
        FUN6(VAR2, VAR2->VAR20);
    }
    FUN7(VAR11, &VAR9, VAR7, VAR4);
    if (VAR9.VAR22 & VAR23)
    {
        if (VAR9.VAR24 % sizeof(VAR25))
        {
            FUN8("");
            FUN9(1);
        }
        VAR6 = VAR9.VAR24 / sizeof(VAR25);
        VAR7 = VAR9.VAR16;
        VAR4 = 0;
        FUN7(VAR11, &VAR9, VAR7, VAR4);
    }
    do
    {
        if (VAR9.VAR22 & VAR26)
        {
            FUN10(&VAR15, VAR16 + VAR14, VAR18 + VAR14, VAR17 - VAR14, true, VAR9.VAR16, VAR9.VAR24);
        }
        else
        {
            if (VAR15)
            {
                FUN8("");
                FUN9(1);
            }
            FUN10(&VAR14, VAR16, VAR18, VAR17, false, VAR9.VAR16, VAR9.VAR24);
        }
        if ((VAR15 + VAR14) > VAR6)
        {
            FUN8("");
            FUN9(1);
        }
    } while ((VAR4 = FUN11(VAR11, &VAR9, VAR7, VAR6)) != VAR6);
    VAR13 = FUN12(VAR3, VAR14, VAR15);
    VAR13->VAR27 = VAR5;
    for (VAR4 = 0; VAR4 < VAR14; VAR4++)
    {
        VAR13->VAR28[VAR4] = VAR16[VAR4];
        VAR13->VAR29[VAR4] = VAR18[VAR4];
    }
    for (VAR4 = 0; VAR4 < VAR15; VAR4++)
    {
        VAR13->VAR30[VAR4] = VAR16[VAR14 + VAR4];
        VAR13->VAR31[VAR4] = VAR18[VAR14 + VAR4];
    }
    VAR2->VAR32++;
    FUN13(VAR2, VAR13, VAR13->VAR15, VAR13->VAR14);
    return VAR13;
}