static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    uint32_t VAR11, VAR12 = 1, VAR13;
    int VAR14;
    VAR2->VAR15 = 1;
    VAR14 = FUN2(VAR2->VAR16, 128, &VAR9->VAR17, 4);
    if (VAR14 < 0)
    {
        return VAR14;
    }
    VAR9->VAR17 = FUN3(VAR9->VAR17);
    if (VAR9->VAR17 % 512)
    {
        FUN4(VAR7, "", VAR9->VAR17);
        return -VAR18;
    }
    if (VAR9->VAR17 == 0)
    {
        FUN4(VAR7, "");
        return -VAR18;
    }
    if (VAR9->VAR17 > VAR19)
    {
        FUN4(VAR7, "", VAR9->VAR17, VAR19 / (1024 * 1024));
        return -VAR18;
    }
    VAR14 = FUN2(VAR2->VAR16, 128 + 4, &VAR9->VAR20, 4);
    if (VAR14 < 0)
    {
        return VAR14;
    }
    VAR9->VAR20 = FUN3(VAR9->VAR20);
    if (VAR9->VAR20 > VAR21 / sizeof(VAR22))
    {
        FUN4(VAR7, "", VAR9->VAR20, VAR21 / sizeof(VAR22));
        return -VAR18;
    }
    VAR11 = VAR9->VAR20 * sizeof(VAR22);
    if (VAR11 > 512 * 1024 * 1024)
    {
        FUN4(VAR7, ""
                         "");
        return -VAR18;
    }
    VAR9->VAR23 = FUN5(VAR11);
    VAR14 = FUN2(VAR2->VAR16, 128 + 4 + 4, VAR9->VAR23, VAR11);
    if (VAR14 < 0)
    {
        goto VAR24;
    }
    for (VAR13 = 0; VAR13 < VAR9->VAR20; VAR13++)
    {
        VAR9->VAR23[VAR13] = FUN6(VAR9->VAR23[VAR13]);
        if (VAR13 > 0)
        {
            uint32_t VAR25 = VAR9->VAR23[VAR13] - VAR9->VAR23[VAR13 - 1];
            if (VAR25 > VAR12)
            {
                VAR12 = VAR25;
            }
        }
    }
    VAR9->VAR26 = FUN5(VAR12 + 1);
    VAR9->VAR27 = FUN5(VAR9->VAR17);
    if (FUN7(&VAR9->VAR28) != VAR29)
    {
        VAR14 = -VAR18;
        goto VAR24;
    }
    VAR9->VAR30 = VAR9->VAR20;
    VAR9->VAR31 = VAR9->VAR17 / 512;
    VAR2->VAR32 = VAR9->VAR20 * VAR9->VAR31;
    FUN8(&VAR9->VAR33);
    return 0;
VAR24:
    FUN9(VAR9->VAR23);
    FUN9(VAR9->VAR26);
    FUN9(VAR9->VAR27);
    return VAR14;
}