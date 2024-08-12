static int FUN1(uint32_t VAR1)
{
    VAR2 *VAR3 = FUN2();
    int VAR4, VAR5, VAR6, VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11 = &VAR12;
    gint VAR13;
    static struct timeval VAR14;
    VAR6 = 0;
    for (VAR9 = VAR15; VAR9 != NULL; VAR9 = VAR9->VAR16)
    {
        VAR6 |= VAR9->FUN3(VAR9->VAR17);
    }
    if (VAR6 != 0)
    {
        return VAR6;
    }
    FUN4(VAR3, &VAR18);
    VAR19 = FUN5(VAR3, VAR18, &VAR13, VAR20, FUN6(VAR20));
    FUN7(VAR19 <= FUN6(VAR20));
    for (VAR7 = 0; VAR7 < VAR11->VAR21; VAR7++)
    {
        VAR20[VAR19 + VAR7].VAR22 = (VAR23)VAR11->VAR24[VAR7];
        VAR20[VAR19 + VAR7].VAR24 = VAR25;
    }
    if (VAR13 < 0 || VAR1 < VAR13)
    {
        VAR13 = VAR1;
    }
    FUN8();
    VAR5 = FUN9(VAR20, VAR19 + VAR11->VAR21, VAR13);
    FUN10();
    if (VAR5 > 0)
    {
        for (VAR7 = 0; VAR7 < VAR11->VAR21; VAR7++)
        {
            VAR11->VAR26[VAR7] = VAR20[VAR19 + VAR7].VAR26;
        }
        for (VAR7 = 0; VAR7 < VAR11->VAR21; VAR7++)
        {
            if (VAR11->VAR26[VAR7] && VAR11->VAR27[VAR7])
            {
                VAR11->VAR27[VAR7](VAR11->VAR17[VAR7]);
            }
        }
    }
    if (FUN11(VAR3, VAR18, VAR20, VAR19))
    {
        FUN12(VAR3);
    }
    if (VAR28 >= 0)
    {
        VAR4 = FUN13(VAR28 + 1, &VAR29, &VAR30, &VAR31, &VAR14);
        if (VAR4 != 0)
        {
            VAR1 = 0;
        }
    }
    return VAR4 || VAR5;
}