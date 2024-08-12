static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8->VAR7;
    VAR9 *VAR10 = NULL;
    VAR11 *VAR12 = NULL;
    VAStatus VAR13;
    int VAR14, VAR15, VAR16;
    int VAR17 = VAR5 ? VAR18 : VAR19;
    const VAR20 *VAR21;
    const VAR22 *VAR23;
    enum AVPixelFormat VAR24;
    VAProfile VAR25, *VAR26 = NULL;
    int VAR27, VAR28, VAR29;
    VAR21 = FUN2(VAR4->VAR30);
    if (!VAR21)
    {
        VAR14 = FUN3(VAR31);
        goto VAR32;
    }
    VAR27 = FUN4(VAR7->VAR33);
    VAR26 = FUN5(VAR27 * sizeof(VAR34));
    if (!VAR26)
    {
        VAR14 = FUN3(VAR35);
        goto VAR32;
    }
    VAR13 = FUN6(VAR7->VAR33, VAR26, &VAR27);
    if (VAR13 != VAR36)
    {
        FUN7(VAR2, VAR17, "", VAR13, FUN8(VAR13));
        VAR14 = FUN3(VAR37);
        goto VAR32;
    }
    VAR25 = VAR38;
    VAR28 = 0;
    for (VAR15 = 0; VAR15 < FUN9(VAR39); VAR15++)
    {
        int VAR40 = 0;
        if (VAR4->VAR30 != VAR39[VAR15].VAR30)
            continue;
        if (VAR4->VAR25 == VAR39[VAR15].VAR41)
            VAR40 = 1;
        VAR25 = VAR39[VAR15].VAR42;
        for (VAR16 = 0; VAR16 < VAR27; VAR16++)
        {
            if (VAR25 == VAR26[VAR16])
            {
                VAR28 = VAR40;
                break;
            }
        }
        if (VAR16 < VAR27)
        {
            if (VAR28)
                break;
            VAR29 = VAR39[VAR15].VAR41;
        }
    }
    FUN10(&VAR26);
    if (VAR25 == VAR38)
    {
        FUN7(VAR2, VAR17, "", VAR21->VAR43);
        VAR14 = FUN3(VAR44);
        goto VAR32;
    }
    if (!VAR28)
    {
        if (VAR5 || !VAR45)
        {
            FUN7(VAR2, VAR17, ""
                                  "",
                   VAR21->VAR43, VAR4->VAR25);
            if (!VAR5)
            {
                FUN7(VAR2, VAR46, ""
                                            ""
                                            "");
            }
            VAR14 = FUN3(VAR31);
            goto VAR32;
        }
        else
        {
            FUN7(VAR2, VAR46, ""
                                        "",
                   VAR21->VAR43, VAR4->VAR25, VAR29);
            FUN7(VAR2, VAR46, ""
                                        "");
        }
    }
    VAR2->VAR42 = VAR25;
    VAR2->VAR47 = VAR48;
    VAR13 = FUN11(VAR7->VAR33, VAR2->VAR42, VAR2->VAR47, 0, 0, &VAR2->VAR49);
    if (VAR13 != VAR36)
    {
        FUN7(VAR2, VAR19, ""
                                  "",
               VAR13, FUN8(VAR13));
        VAR14 = FUN3(VAR37);
        goto VAR32;
    }
    VAR10 = FUN12(VAR2->VAR50);
    if (!VAR10)
    {
        VAR14 = FUN3(VAR35);
        goto VAR32;
    }
    VAR10->VAR51 = VAR2->VAR49;
    VAR12 = FUN13(VAR2->VAR50, VAR10);
    if (!VAR12)
        goto VAR32;
    VAR2->VAR52 = VAR53;
    if (VAR2->VAR54 != VAR53 && VAR2->VAR54 != VAR55)
    {
        for (VAR15 = 0; VAR12->VAR56[VAR15] != VAR53; VAR15++)
        {
            if (VAR12->VAR56[VAR15] == VAR2->VAR54)
            {
                VAR2->VAR52 = VAR2->VAR54;
                FUN7(VAR2, VAR57, ""
                                          "",
                       FUN14(VAR2->VAR52));
                break;
            }
        }
    }
    if (VAR2->VAR52 == VAR53)
    {
        for (VAR15 = 0; VAR12->VAR56[VAR15] != VAR53; VAR15++)
        {
            VAR24 = VAR12->VAR56[VAR15];
            VAR23 = FUN15(VAR24);
            if (VAR23->VAR58 == 3 && VAR23->VAR59 == 1 && VAR23->VAR60 == 1)
            {
                VAR2->VAR52 = VAR24;
                FUN7(VAR2, VAR57, ""
                                          "",
                       FUN14(VAR2->VAR52));
                break;
            }
        }
    }
    if (VAR2->VAR52 == VAR53)
    {
        VAR2->VAR52 = VAR12->VAR56[0];
        FUN7(VAR2, VAR57, "", FUN14(VAR2->VAR52));
        if (VAR15 > 1)
        {
            FUN7(VAR2, VAR46, ""
                                        "",
                   FUN14(VAR2->VAR52));
        }
    }
    VAR2->VAR61 = VAR4->VAR62;
    VAR2->VAR63 = VAR4->VAR64;
    if (VAR2->VAR61 < VAR12->VAR65 || VAR2->VAR63 < VAR12->VAR66 || VAR2->VAR61 > VAR12->VAR67 || VAR2->VAR63 > VAR12->VAR68)
    {
        FUN7(VAR2, VAR19, ""
                                  "",
               VAR2->VAR61, VAR2->VAR63, VAR12->VAR65, VAR12->VAR67, VAR12->VAR66, VAR12->VAR68);
        VAR14 = FUN3(VAR31);
        goto VAR32;
    }
    FUN16(&VAR12);
    FUN10(&VAR10);
    VAR2->VAR69 = VAR70;
    if (VAR4->VAR71 & VAR72)
        VAR2->VAR69 += VAR4->VAR73;
    return 0;
VAR32:
    FUN16(&VAR12);
    FUN10(&VAR10);
    FUN17(VAR7->VAR33, VAR2->VAR49);
    FUN10(&VAR26);
    return VAR14;
}