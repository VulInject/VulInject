static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11 = 0;
    uint32_t VAR12;
    uint64_t VAR13;
    bool VAR14 = false;
    VAR9->VAR15 = NULL;
    VAR9->VAR16 = true;
    FUN2(&VAR9->VAR17);
    FUN3(&VAR9->VAR18);
    VAR11 = FUN4(VAR2->VAR19, 0, &VAR13, sizeof(VAR20));
    if (VAR11 < 0)
    {
        goto VAR21;
    }
    if (memcmp(&VAR13, "", 8))
    {
        VAR11 = -VAR22;
        goto VAR21;
    }
    FUN5(&VAR9->VAR23);
    VAR11 = FUN6(VAR2, VAR9);
    if (VAR11 < 0)
    {
        goto VAR21;
    }
    VAR11 = FUN7(VAR2, VAR9, &VAR14);
    if (VAR11 < 0)
    {
        goto VAR21;
    }
    VAR11 = FUN8(VAR2, VAR9);
    if (VAR11 < 0)
    {
        goto VAR21;
    }
    VAR11 = FUN9(VAR2, VAR9);
    if (VAR11 < 0)
    {
        goto VAR21;
    }
    VAR9->VAR24 = VAR9->VAR25.VAR24;
    VAR2->VAR26 = VAR9->VAR27 >> VAR9->VAR28;
    FUN10(VAR9);
    VAR9->VAR29 = VAR9->VAR30.VAR31;
    if (VAR9->VAR32 > VAR9->VAR30.VAR33 / sizeof(VAR34))
    {
        VAR11 = -VAR22;
        goto VAR21;
    }
    VAR9->VAR15 = FUN11(VAR2, VAR9->VAR30.VAR33);
    VAR11 = FUN4(VAR2->VAR19, VAR9->VAR29, VAR9->VAR15, VAR9->VAR30.VAR33);
    if (VAR11 < 0)
    {
        goto VAR21;
    }
    uint64_t VAR35 = VAR9->VAR36;
    for (VAR12 = 0; VAR12 < VAR9->VAR32; VAR12++)
    {
        FUN12(&VAR9->VAR15[VAR12]);
        if (VAR35--)
        {
            if ((VAR9->VAR15[VAR12] & VAR37) == VAR38)
            {
                VAR11 = FUN13(VAR9, VAR9->VAR15[VAR12] & VAR39, VAR9->VAR24);
                if (VAR11 < 0)
                {
                    goto VAR21;
                }
            }
        }
        else
        {
            VAR35 = VAR9->VAR36;
        }
    }
    if (VAR5 & VAR40)
    {
        VAR11 = FUN14(VAR2, VAR9, false, NULL);
        if (VAR11 < 0)
        {
            goto VAR21;
        }
    }
    FUN15(&VAR9->VAR41, VAR42, "", VAR2->VAR43, "");
    FUN16(VAR9->VAR41);
    return 0;
VAR21:
    FUN17(VAR2);
    return VAR11;
}