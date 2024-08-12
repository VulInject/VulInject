static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11, VAR12, VAR13;
    bool VAR14;
    const char *VAR15, *VAR16;
    VAR17 *VAR18;
    VAR6 *VAR19 = NULL;
    int VAR20;
    VAR21 = VAR9;
    VAR18 = FUN2(&VAR22, NULL, 0, &VAR23);
    FUN3(VAR18, VAR4, &VAR19);
    if (VAR19)
    {
        FUN4(VAR7, VAR19);
        VAR20 = -VAR24;
        goto VAR25;
    }
    VAR15 = FUN5(VAR18, "");
    if (!VAR15)
    {
        FUN6(VAR7, "");
        VAR20 = -VAR24;
        goto VAR25;
    }
    VAR9->VAR26 = FUN7(VAR18, "", 0);
    VAR14 = FUN8(VAR18, "", false);
    memset(VAR9->VAR27, '', sizeof(VAR9->VAR27));
    VAR16 = FUN5(VAR18, "");
    if (VAR16)
    {
        size_t VAR28 = strlen(VAR16);
        if (VAR28 > 11)
        {
            FUN6(VAR7, "");
            VAR20 = -VAR24;
            goto VAR25;
        }
        memcpy(VAR9->VAR27, VAR16, VAR28);
    }
    else
    {
        memcpy(VAR9->VAR27, "", 10);
    }
    if (VAR14)
    {
        if (!VAR9->VAR26)
        {
            VAR9->VAR26 = 12;
            VAR13 = 36;
            VAR9->VAR29 = 2;
        }
        else
        {
            VAR13 = VAR9->VAR26 == 12 ? 18 : 36;
            VAR9->VAR29 = 1;
        }
        VAR11 = 80;
        VAR12 = 2;
    }
    else
    {
        if (!VAR9->VAR26)
        {
            VAR9->VAR26 = 16;
        }
        VAR9->VAR30 = 0x3f;
        VAR11 = VAR9->VAR26 == 12 ? 64 : 1024;
        VAR12 = 16;
        VAR13 = 63;
    }
    switch (VAR9->VAR26)
    {
    case 32:
        FUN9(""
                    "");
        break;
    case 16:
    case 12:
        break;
    default:
        FUN6(VAR7, "");
        VAR20 = -VAR24;
        goto VAR25;
    }
    VAR9->VAR2 = VAR2;
    VAR9->VAR29 = 0x10;
    VAR9->VAR31 = 0xffffffff;
    VAR9->VAR32 = NULL;
    VAR9->VAR33 = NULL;
    VAR9->VAR34 = NULL;
    VAR9->VAR35 = 1;
    fprintf(VAR36, "", VAR15, VAR11, VAR12, VAR13);
    VAR9->VAR37 = VAR11 * VAR12 * VAR13 - VAR9->VAR30;
    if (FUN8(VAR18, "", false))
    {
        if (!FUN10(VAR2))
        {
            VAR20 = FUN11(VAR2, VAR7);
            if (VAR20 < 0)
            {
                goto VAR25;
            }
        }
        else
        {
            VAR20 = -VAR38;
            FUN6(VAR7, "");
            goto VAR25;
        }
    }
    else
    {
        VAR20 = FUN12(VAR2, true, &VAR19);
        if (VAR20 < 0)
        {
            FUN4(VAR7, VAR19);
            goto VAR25;
        }
    }
    VAR2->VAR39 = VAR11 * VAR12 * VAR13;
    if (FUN13(VAR9, VAR15, VAR12, VAR13, VAR7))
    {
        VAR20 = -VAR40;
        goto VAR25;
    }
    VAR9->VAR37 = VAR9->VAR41 + VAR9->VAR29 * VAR9->VAR42;
    if (VAR9->VAR32)
    {
        FUN6(&VAR9->VAR43, ""
                                          "",
                   FUN14(VAR2));
        VAR20 = FUN15(VAR9->VAR43, &VAR19);
        if (VAR19)
        {
            FUN4(VAR7, VAR19);
            FUN16(VAR9->VAR43);
            goto VAR25;
        }
    }
    if (VAR9->VAR30 > 0)
    {
        FUN17(VAR9, VAR11, VAR12, VAR13);
    }
    FUN18(&VAR9->VAR44);
    VAR20 = 0;
VAR25:
    FUN19(VAR18);
    return VAR20;
}