static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8;
    VAR9 *VAR10 = NULL;
    VAR11 *VAR12 = NULL;
    VAR3 *VAR13 = NULL;
    VAR5 *VAR14 = NULL;
    char *VAR15 = NULL;
    const char *VAR16;
    size_t VAR17;
    int VAR18, VAR19;
    VAR8 = FUN2(&VAR20, NULL, 0, &VAR21);
    FUN3(VAR8, VAR4, &VAR14);
    if (VAR14)
    {
        goto VAR22;
    }
    VAR17 = FUN4(VAR4, VAR23);
    if (VAR17 < 1)
    {
        FUN5(&VAR14, VAR24, "");
        goto VAR22;
    }
    VAR16 = FUN6(VAR8, VAR25);
    if (!VAR16)
    {
        FUN5(&VAR14, VAR24, VAR25);
        goto VAR22;
    }
    VAR2->VAR26 = FUN7(VAR16);
    VAR16 = FUN6(VAR8, VAR27);
    if (!VAR16)
    {
        FUN5(&VAR14, VAR24, VAR27);
        goto VAR22;
    }
    VAR2->VAR28 = FUN7(VAR16);
    FUN8(VAR8);
    for (VAR18 = 0; VAR18 < VAR17; VAR18++)
    {
        VAR15 = FUN9(VAR23 "", VAR18);
        FUN10(VAR4, &VAR13, VAR15);
        VAR8 = FUN2(&VAR29, NULL, 0, &VAR21);
        FUN3(VAR8, VAR13, &VAR14);
        if (VAR14)
        {
            goto VAR22;
        }
        VAR16 = FUN6(VAR8, VAR30);
        if (!VAR16)
        {
            FUN5(&VAR14, VAR24, VAR30);
            FUN11(&VAR14, VAR31, VAR18);
            goto VAR22;
        }
        VAR10 = FUN12(VAR9, 1);
        if (!strcmp(VAR16, ""))
        {
            VAR16 = "";
        }
        VAR19 = FUN13(VAR32, VAR16, VAR33, -1, NULL);
        if (VAR19 != VAR34 && VAR19 != VAR35)
        {
            FUN5(&VAR14, "", VAR30);
            FUN11(&VAR14, VAR31, VAR18);
            goto VAR22;
        }
        VAR10->VAR19 = VAR19;
        FUN8(VAR8);
        if (VAR10->VAR19 == VAR34)
        {
            VAR8 = FUN2(&VAR36, NULL, 0, &VAR21);
            FUN3(VAR8, VAR13, &VAR14);
            if (VAR14)
            {
                goto VAR22;
            }
            VAR16 = FUN6(VAR8, VAR37);
            if (!VAR16)
            {
                FUN5(&VAR14, VAR24, VAR37);
                FUN11(&VAR14, VAR31, VAR18);
                goto VAR22;
            }
            VAR10->VAR38.VAR39.VAR40 = FUN7(VAR16);
            VAR16 = FUN6(VAR8, VAR41);
            if (!VAR16)
            {
                FUN5(&VAR14, VAR24, VAR41);
                FUN11(&VAR14, VAR31, VAR18);
                goto VAR22;
            }
            VAR10->VAR38.VAR39.VAR42 = FUN7(VAR16);
            VAR16 = FUN6(VAR8, VAR43);
            if (VAR16)
            {
                VAR10->VAR38.VAR39.VAR44 = true;
            }
            VAR16 = FUN6(VAR8, VAR45);
            if (VAR16)
            {
                VAR10->VAR38.VAR39.VAR46 = true;
            }
            VAR16 = FUN6(VAR8, VAR47);
            if (VAR16)
            {
                VAR10->VAR38.VAR39.VAR48 = true;
            }
            if (VAR10->VAR38.VAR39.VAR44)
            {
                FUN5(&VAR14, "");
                goto VAR22;
            }
            if (VAR10->VAR38.VAR39.VAR46 || VAR10->VAR38.VAR39.VAR48)
            {
                FUN5(&VAR14, "");
                goto VAR22;
            }
            FUN8(VAR8);
        }
        else
        {
            VAR8 = FUN2(&VAR49, NULL, 0, &VAR21);
            FUN3(VAR8, VAR13, &VAR14);
            if (VAR14)
            {
                goto VAR22;
            }
            VAR16 = FUN6(VAR8, VAR50);
            if (!VAR16)
            {
                FUN5(&VAR14, VAR24, VAR50);
                FUN11(&VAR14, VAR31, VAR18);
                goto VAR22;
            }
            VAR10->VAR38.VAR51.VAR28 = FUN7(VAR16);
            FUN8(VAR8);
        }
        if (VAR2->VAR52 == NULL)
        {
            VAR2->VAR52 = FUN12(VAR11, 1);
            VAR2->VAR52->VAR53 = VAR10;
            VAR12 = VAR2->VAR52;
        }
        else
        {
            VAR12->VAR54 = FUN12(VAR11, 1);
            VAR12->VAR54->VAR53 = VAR10;
            VAR12 = VAR12->VAR54;
        }
        VAR10 = NULL;
        FUN14(VAR13);
        VAR13 = NULL;
        FUN15(VAR15);
        VAR15 = NULL;
    }
    return 0;
VAR22:
    FUN16(VAR6, VAR14);
    FUN17(VAR10);
    FUN8(VAR8);
    FUN15(VAR15);
    FUN14(VAR13);
    VAR55 = VAR56;
    return -VAR55;
}