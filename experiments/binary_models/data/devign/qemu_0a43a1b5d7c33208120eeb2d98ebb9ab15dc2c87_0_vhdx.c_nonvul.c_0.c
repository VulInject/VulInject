static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11 = 0;
    uint32_t VAR12;
    uint64_t VAR13;
    uint32_t VAR14, VAR15;
    bool VAR16 = false;
    VAR9->VAR17 = NULL;
    VAR9->VAR18 = true;
    FUN2(&VAR9->VAR19);
    VAR11 = FUN3(VAR2->VAR20, 0, &VAR13, sizeof(VAR21));
    if (VAR11 < 0)
    {
        goto VAR22;
    }
    if (memcmp(&VAR13, "", 8))
    {
        VAR11 = -VAR23;
        goto VAR22;
    }
    FUN4(&VAR9->VAR24);
    VAR11 = FUN5(VAR2, VAR9);
    if (VAR11 < 0)
    {
        goto VAR22;
    }
    VAR11 = FUN6(VAR2, VAR9, &VAR16);
    if (VAR11 < 0)
    {
        goto VAR22;
    }
    VAR11 = FUN7(VAR2, VAR9);
    if (VAR11 < 0)
    {
        goto VAR22;
    }
    VAR11 = FUN8(VAR2, VAR9);
    if (VAR11 < 0)
    {
        goto VAR22;
    }
    VAR9->VAR25 = VAR9->VAR26.VAR25;
    VAR2->VAR27 = VAR9->VAR28 >> VAR9->VAR29;
    VAR14 = VAR9->VAR28 >> VAR9->VAR30;
    if (VAR9->VAR28 - (VAR14 << VAR9->VAR30))
    {
        VAR14++;
    }
    VAR15 = VAR14 >> VAR9->VAR31;
    if (VAR14 - (VAR15 << VAR9->VAR31))
    {
        VAR15++;
    }
    if (VAR9->VAR32)
    {
        VAR9->VAR33 = VAR15 * (VAR9->VAR34 + 1);
    }
    else
    {
        VAR9->VAR33 = VAR14 + ((VAR14 - 1) >> VAR9->VAR31);
    }
    VAR9->VAR35 = VAR9->VAR36.VAR37;
    if (VAR9->VAR33 > VAR9->VAR36.VAR38 / sizeof(VAR39))
    {
        VAR11 = -VAR23;
        goto VAR22;
    }
    VAR9->VAR17 = FUN9(VAR2, VAR9->VAR36.VAR38);
    VAR11 = FUN3(VAR2->VAR20, VAR9->VAR35, VAR9->VAR17, VAR9->VAR36.VAR38);
    if (VAR11 < 0)
    {
        goto VAR22;
    }
    for (VAR12 = 0; VAR12 < VAR9->VAR33; VAR12++)
    {
        FUN10(&VAR9->VAR17[VAR12]);
    }
    if (VAR5 & VAR40)
    {
        VAR11 = FUN11(VAR2, VAR9, false, NULL);
        if (VAR11 < 0)
        {
            goto VAR22;
        }
    }
    FUN12(&VAR9->VAR41, VAR42, "", VAR2->VAR43, "");
    FUN13(VAR9->VAR41);
    return 0;
VAR22:
    FUN14(VAR2);
    return VAR11;
}