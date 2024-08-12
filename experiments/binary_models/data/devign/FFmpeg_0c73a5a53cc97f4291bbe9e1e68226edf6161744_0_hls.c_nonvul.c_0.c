static int FUN1(VAR1 *VAR2, const char *VAR3, struct VAR4 *VAR5, VAR6 *VAR7)
{
    int VAR8 = 0, VAR9 = 0, VAR10 = 0, VAR11 = 0;
    int64_t VAR12 = 0;
    enum KeyType VAR13 = VAR14;
    uint8_t VAR15[16] = "";
    int VAR16 = 0;
    char VAR17[VAR18] = "";
    char VAR19[1024];
    const char *VAR20;
    int VAR21 = 0;
    VAR22 *VAR23 = NULL;
    if (!VAR7)
    {
        VAR8 = FUN2(VAR2, &VAR7, VAR3);
        if (VAR8 < 0)
            return VAR8;
        VAR21 = 1;
    }
    if (FUN3(VAR7, "", VAR24, &VAR23) >= 0)
        VAR3 = VAR23;
    FUN4(VAR7, VAR19, sizeof(VAR19));
    if (strcmp(VAR19, ""))
    {
        VAR8 = VAR25;
        goto VAR26;
    }
    if (VAR5)
    {
        FUN5(VAR5);
        VAR5->VAR27 = 0;
    }
    while (!VAR7->VAR28)
    {
        FUN4(VAR7, VAR19, sizeof(VAR19));
        if (FUN6(VAR19, "", &VAR20))
        {
            struct variant_info VAR29 = {{0}};
            VAR10 = 1;
            FUN7(VAR20, (VAR30)VAR31, &VAR29);
            VAR11 = FUN8(VAR29.VAR11);
        }
        else if (FUN6(VAR19, "", &VAR20))
        {
            struct key_info VAR29 = {{0}};
            FUN7(VAR20, (VAR30)VAR32, &VAR29);
            VAR13 = VAR14;
            VAR16 = 0;
            if (!strcmp(VAR29.VAR33, ""))
                VAR13 = VAR34;
            if (!FUN9(VAR29.VAR15, "", 2) || !FUN9(VAR29.VAR15, "", 2))
            {
                FUN10(VAR15, VAR29.VAR15 + 2);
                VAR16 = 1;
            }
            FUN11(VAR17, VAR29.VAR35, sizeof(VAR17));
        }
        else if (FUN6(VAR19, "", &VAR20))
        {
            if (!VAR5)
            {
                VAR5 = FUN12(VAR2, 0, VAR3, NULL);
                if (!VAR5)
                {
                    VAR8 = FUN13(VAR36);
                    goto VAR26;
                }
            }
            VAR5->VAR37 = FUN8(VAR20) * VAR38;
        }
        else if (FUN6(VAR19, "", &VAR20))
        {
            if (!VAR5)
            {
                VAR5 = FUN12(VAR2, 0, VAR3, NULL);
                if (!VAR5)
                {
                    VAR8 = FUN13(VAR36);
                    goto VAR26;
                }
            }
            VAR5->VAR39 = FUN8(VAR20);
        }
        else if (FUN6(VAR19, "", &VAR20))
        {
            if (VAR5)
                VAR5->VAR27 = 1;
        }
        else if (FUN6(VAR19, "", &VAR20))
        {
            VAR9 = 1;
            VAR12 = FUN14(VAR20) * VAR38;
        }
        else if (FUN6(VAR19, "", NULL))
        {
            continue;
        }
        else if (VAR19[0])
        {
            if (VAR10)
            {
                if (!FUN12(VAR2, VAR11, VAR19, VAR3))
                {
                    VAR8 = FUN13(VAR36);
                    goto VAR26;
                }
                VAR10 = 0;
                VAR11 = 0;
            }
            if (VAR9)
            {
                struct VAR40 *VAR41;
                if (!VAR5)
                {
                    VAR5 = FUN12(VAR2, 0, VAR3, NULL);
                    if (!VAR5)
                    {
                        VAR8 = FUN13(VAR36);
                        goto VAR26;
                    }
                }
                VAR41 = FUN15(sizeof(struct VAR40));
                if (!VAR41)
                {
                    VAR8 = FUN13(VAR36);
                    goto VAR26;
                }
                VAR41->VAR12 = VAR12;
                VAR41->VAR13 = VAR13;
                if (VAR16)
                {
                    memcpy(VAR41->VAR15, VAR15, sizeof(VAR15));
                }
                else
                {
                    int VAR42 = VAR5->VAR39 + VAR5->VAR43;
                    memset(VAR41->VAR15, 0, sizeof(VAR41->VAR15));
                    FUN16(VAR41->VAR15 + 12, VAR42);
                }
                FUN17(VAR41->VAR17, sizeof(VAR41->VAR17), VAR3, VAR17);
                FUN17(VAR41->VAR3, sizeof(VAR41->VAR3), VAR3, VAR19);
                FUN18(&VAR5->VAR44, &VAR5->VAR43, VAR41);
                VAR9 = 0;
            }
        }
    }
    if (VAR5)
        VAR5->VAR45 = FUN19();
VAR26:
    FUN20(VAR23);
    if (VAR21)
        FUN21(VAR7);
    return VAR8;
}