static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7 = FUN2(VAR6, VAR8, VAR3->VAR9);
    VAR10 *VAR11 = FUN2(VAR10, VAR3, VAR3);
    int VAR12;
    if (VAR5[0] != VAR13 && VAR3->VAR14 != VAR7->VAR8.VAR14)
    {
        FUN3("", VAR3->VAR14);
        FUN4(&VAR11->VAR3, FUN5(VAR15));
        FUN6(&VAR11->VAR3, VAR16);
        return 0;
    }
    FUN7(&VAR11->VAR3);
    FUN3("", VAR14, VAR17, VAR11->VAR3.VAR5.VAR18, VAR5[0]);
    {
        int VAR19;
        for (VAR19 = 1; VAR19 < VAR11->VAR3.VAR5.VAR20; VAR19++)
        {
            FUN8("", VAR5[VAR19]);
        }
        FUN8("");
    }
    if (VAR11->VAR3.VAR5.VAR18 == 0)
    {
        if (VAR11->VAR21 != NULL)
            FUN9(VAR11->VAR21);
        VAR11->VAR22 = 0;
        VAR11->VAR21 = NULL;
        VAR12 = FUN10(VAR7->VAR23, VAR11, VAR24, VAR25);
        if (VAR12 < 0)
        {
            FUN11(VAR11, VAR12);
            return 0;
        }
        return 0;
    }
    if (VAR11->VAR22 != VAR11->VAR3.VAR5.VAR18)
    {
        if (VAR11->VAR21 != NULL)
            FUN9(VAR11->VAR21);
        VAR11->VAR21 = FUN12(VAR11->VAR3.VAR5.VAR18);
        VAR11->VAR22 = VAR11->VAR3.VAR5.VAR18;
    }
    memset(VAR11->VAR21, 0, VAR11->VAR22);
    VAR11->VAR20 = VAR11->VAR3.VAR5.VAR18;
    if (VAR11->VAR3.VAR5.VAR26 == VAR27)
    {
        VAR11->VAR20 = 0;
        return -VAR11->VAR3.VAR5.VAR18;
    }
    else
    {
        return VAR11->VAR3.VAR5.VAR18;
    }
}