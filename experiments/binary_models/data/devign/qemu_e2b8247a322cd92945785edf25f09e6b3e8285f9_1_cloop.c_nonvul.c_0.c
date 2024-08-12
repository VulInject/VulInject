static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    uint32_t VAR11, VAR12 = 1, VAR13;
    int VAR14;
    VAR2->VAR15 = FUN2(NULL, VAR4, "", VAR2, &VAR16, false, VAR7);
    if (!VAR2->VAR15)
    {
        return -VAR17;
    }
    VAR14 = FUN3(VAR2, true, VAR7);
    if (VAR14 < 0)
    {
        return VAR14;
    }
    VAR14 = FUN4(VAR2->VAR15, 128, &VAR9->VAR18, 4);
    if (VAR14 < 0)
    {
        return VAR14;
    }
    VAR9->VAR18 = FUN5(VAR9->VAR18);
    if (VAR9->VAR18 % 512)
    {
        FUN6(VAR7, "" VAR19 "", VAR9->VAR18);
        return -VAR17;
    }
    if (VAR9->VAR18 == 0)
    {
        FUN6(VAR7, "");
        return -VAR17;
    }
    if (VAR9->VAR18 > VAR20)
    {
        FUN6(VAR7, "" VAR19 "", VAR9->VAR18, VAR20 / (1024 * 1024));
        return -VAR17;
    }
    VAR14 = FUN4(VAR2->VAR15, 128 + 4, &VAR9->VAR21, 4);
    if (VAR14 < 0)
    {
        return VAR14;
    }
    VAR9->VAR21 = FUN5(VAR9->VAR21);
    if (VAR9->VAR21 > (VAR22 - 1) / sizeof(VAR23))
    {
        FUN6(VAR7, "" VAR19 "", VAR9->VAR21, (VAR22 - 1) / sizeof(VAR23));
        return -VAR17;
    }
    VAR11 = (VAR9->VAR21 + 1) * sizeof(VAR23);
    if (VAR11 > 512 * 1024 * 1024)
    {
        FUN6(VAR7, ""
                         "");
        return -VAR17;
    }
    VAR9->VAR24 = FUN7(VAR11);
    if (VAR9->VAR24 == NULL)
    {
        FUN6(VAR7, "");
        return -VAR25;
    }
    VAR14 = FUN4(VAR2->VAR15, 128 + 4 + 4, VAR9->VAR24, VAR11);
    if (VAR14 < 0)
    {
        goto VAR26;
    }
    for (VAR13 = 0; VAR13 < VAR9->VAR21 + 1; VAR13++)
    {
        uint64_t VAR27;
        VAR9->VAR24[VAR13] = FUN8(VAR9->VAR24[VAR13]);
        if (VAR13 == 0)
        {
            continue;
        }
        if (VAR9->VAR24[VAR13] < VAR9->VAR24[VAR13 - 1])
        {
            FUN6(VAR7, ""
                             "" VAR19 "",
                       VAR13);
            VAR14 = -VAR17;
            goto VAR26;
        }
        VAR27 = VAR9->VAR24[VAR13] - VAR9->VAR24[VAR13 - 1];
        if (VAR27 > 2 * VAR20)
        {
            FUN6(VAR7, "" VAR19 "", VAR13);
            VAR14 = -VAR17;
            goto VAR26;
        }
        if (VAR27 > VAR12)
        {
            VAR12 = VAR27;
        }
    }
    VAR9->VAR28 = FUN7(VAR12 + 1);
    if (VAR9->VAR28 == NULL)
    {
        FUN6(VAR7, "");
        VAR14 = -VAR25;
        goto VAR26;
    }
    VAR9->VAR29 = FUN7(VAR9->VAR18);
    if (VAR9->VAR29 == NULL)
    {
        FUN6(VAR7, "");
        VAR14 = -VAR25;
        goto VAR26;
    }
    if (FUN9(&VAR9->VAR30) != VAR31)
    {
        VAR14 = -VAR17;
        goto VAR26;
    }
    VAR9->VAR32 = VAR9->VAR21;
    VAR9->VAR33 = VAR9->VAR18 / 512;
    VAR2->VAR34 = VAR9->VAR21 * VAR9->VAR33;
    FUN10(&VAR9->VAR35);
    return 0;
VAR26:
    FUN11(VAR9->VAR24);
    FUN11(VAR9->VAR28);
    FUN11(VAR9->VAR29);
    return VAR14;
}