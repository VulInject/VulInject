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
    if (!VAR7)
    {
        VAR22 *VAR23 = NULL;
        VAR21 = 1;
        FUN2(&VAR23, "", "", 0);
        FUN2(&VAR23, "", VAR2->VAR24, 0);
        FUN2(&VAR23, "", VAR2->VAR25, 0);
        VAR8 = FUN3(&VAR7, VAR3, VAR26, VAR2->VAR27, &VAR23);
        FUN4(&VAR23);
        if (VAR8 < 0)
            return VAR8;
    }
    FUN5(VAR7, VAR19, sizeof(VAR19));
    if (strcmp(VAR19, ""))
    {
        VAR8 = VAR28;
        goto VAR29;
    }
    if (VAR5)
    {
        FUN6(VAR5);
        VAR5->VAR30 = 0;
    }
    while (!FUN7(VAR7))
    {
        FUN5(VAR7, VAR19, sizeof(VAR19));
        if (FUN8(VAR19, "", &VAR20))
        {
            struct variant_info VAR31 = {{0}};
            VAR10 = 1;
            FUN9(VAR20, (VAR32)VAR33, &VAR31);
            VAR11 = FUN10(VAR31.VAR11);
        }
        else if (FUN8(VAR19, "", &VAR20))
        {
            struct key_info VAR31 = {{0}};
            FUN9(VAR20, (VAR32)VAR34, &VAR31);
            VAR13 = VAR14;
            VAR16 = 0;
            if (!strcmp(VAR31.VAR35, ""))
                VAR13 = VAR36;
            if (!FUN11(VAR31.VAR15, "", 2) || !FUN11(VAR31.VAR15, "", 2))
            {
                FUN12(VAR15, VAR31.VAR15 + 2);
                VAR16 = 1;
            }
            FUN13(VAR17, VAR31.VAR37, sizeof(VAR17));
        }
        else if (FUN8(VAR19, "", &VAR20))
        {
            if (!VAR5)
            {
                VAR5 = FUN14(VAR2, 0, VAR3, NULL);
                if (!VAR5)
                {
                    VAR8 = FUN15(VAR38);
                    goto VAR29;
                }
            }
            VAR5->VAR39 = FUN10(VAR20) * VAR40;
        }
        else if (FUN8(VAR19, "", &VAR20))
        {
            if (!VAR5)
            {
                VAR5 = FUN14(VAR2, 0, VAR3, NULL);
                if (!VAR5)
                {
                    VAR8 = FUN15(VAR38);
                    goto VAR29;
                }
            }
            VAR5->VAR41 = FUN10(VAR20);
        }
        else if (FUN8(VAR19, "", &VAR20))
        {
            if (VAR5)
                VAR5->VAR30 = 1;
        }
        else if (FUN8(VAR19, "", &VAR20))
        {
            VAR9 = 1;
            VAR12 = FUN16(VAR20) * VAR40;
        }
        else if (FUN8(VAR19, "", NULL))
        {
            continue;
        }
        else if (VAR19[0])
        {
            if (VAR10)
            {
                if (!FUN14(VAR2, VAR11, VAR19, VAR3))
                {
                    VAR8 = FUN15(VAR38);
                    goto VAR29;
                }
                VAR10 = 0;
                VAR11 = 0;
            }
            if (VAR9)
            {
                struct VAR42 *VAR43;
                if (!VAR5)
                {
                    VAR5 = FUN14(VAR2, 0, VAR3, NULL);
                    if (!VAR5)
                    {
                        VAR8 = FUN15(VAR38);
                        goto VAR29;
                    }
                }
                VAR43 = FUN17(sizeof(struct VAR42));
                if (!VAR43)
                {
                    VAR8 = FUN15(VAR38);
                    goto VAR29;
                }
                VAR43->VAR12 = VAR12;
                VAR43->VAR13 = VAR13;
                if (VAR16)
                {
                    memcpy(VAR43->VAR15, VAR15, sizeof(VAR15));
                }
                else
                {
                    int VAR44 = VAR5->VAR41 + VAR5->VAR45;
                    memset(VAR43->VAR15, 0, sizeof(VAR43->VAR15));
                    FUN18(VAR43->VAR15 + 12, VAR44);
                }
                FUN19(VAR43->VAR17, sizeof(VAR43->VAR17), VAR3, VAR17);
                FUN19(VAR43->VAR3, sizeof(VAR43->VAR3), VAR3, VAR19);
                FUN20(&VAR5->VAR46, &VAR5->VAR45, VAR43);
                VAR9 = 0;
            }
        }
    }
    if (VAR5)
        VAR5->VAR47 = FUN21();
VAR29:
    if (VAR21)
        FUN22(VAR7);
    return VAR8;
}