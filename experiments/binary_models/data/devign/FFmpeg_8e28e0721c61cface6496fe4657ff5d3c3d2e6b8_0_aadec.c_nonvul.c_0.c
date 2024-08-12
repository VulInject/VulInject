static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6 = -1;
    uint32_t VAR7, VAR8, VAR9, VAR10, VAR11 = 0, VAR12;
    char VAR13[128], VAR14[128], VAR15[64] = {0};
    uint8_t VAR16[24], VAR17[8], VAR18[8];
    int64_t VAR19 = -1, VAR20 = -1;
    struct VAR21
    {
        uint32_t VAR22;
        uint32_t VAR23;
    } VAR24[VAR25];
    uint32_t VAR26[4];
    uint8_t VAR27[16] = {0};
    VAR28 *VAR29 = VAR2->VAR30;
    VAR31 *VAR32 = VAR2->VAR32;
    VAR33 *VAR34;
    FUN2(VAR32, 4);
    FUN2(VAR32, 4);
    VAR9 = FUN3(VAR32);
    FUN2(VAR32, 4);
    if (VAR9 > VAR25)
        return VAR35;
    for (VAR3 = 0; VAR3 < VAR9; VAR3++)
    {
        FUN2(VAR32, 4);
        VAR24[VAR3].VAR22 = FUN3(VAR32);
        VAR24[VAR3].VAR23 = FUN3(VAR32);
    }
    FUN2(VAR32, 24);
    VAR10 = FUN3(VAR32);
    if (VAR10 > VAR36)
        return VAR35;
    for (VAR3 = 0; VAR3 < VAR10; VAR3++)
    {
        memset(VAR14, 0, sizeof(VAR14));
        memset(VAR13, 0, sizeof(VAR13));
        FUN2(VAR32, 1);
        VAR7 = FUN3(VAR32);
        VAR8 = FUN3(VAR32);
        if (VAR7 > sizeof(VAR13))
        {
            FUN2(VAR32, VAR7);
        }
        else
        {
            FUN4(VAR32, VAR13, VAR7);
        }
        if (VAR8 > sizeof(VAR14))
        {
            FUN2(VAR32, VAR8);
        }
        else
        {
            FUN4(VAR32, VAR14, VAR8);
        }
        if (!strcmp(VAR13, ""))
        {
            FUN5(VAR2, VAR37, "", VAR14);
            strncpy(VAR15, VAR14, sizeof(VAR15) - 1);
        }
        if (!strcmp(VAR13, ""))
        {
            FUN5(VAR2, VAR37, "", VAR14);
            VAR11 = FUN6(VAR14);
        }
        if (!strcmp(VAR13, ""))
        {
            FUN5(VAR2, VAR37, "", VAR14);
            sscanf(VAR14, "", &VAR26[0], &VAR26[1], &VAR26[2], &VAR26[3]);
            for (VAR5 = 0; VAR5 < 4; VAR5++)
            {
                FUN7(&VAR27[VAR5 * 4], VAR26[VAR5]);
            }
            FUN5(VAR2, VAR37, "");
            for (VAR3 = 0; VAR3 < 16; VAR3++)
                FUN5(VAR2, VAR37, "", VAR27[VAR3]);
            FUN5(VAR2, VAR37, "");
        }
    }
    if (VAR29->VAR38 != 16)
    {
        FUN5(VAR2, VAR39, "");
        return FUN8(VAR40);
    }
    if ((VAR29->VAR41 = FUN9(VAR15)) == -1)
    {
        FUN5(VAR2, VAR39, "", VAR15);
        return FUN8(VAR40);
    }
    VAR29->VAR42 = FUN10();
    if (!VAR29->VAR42)
        return FUN8(VAR43);
    FUN11(VAR29->VAR42, VAR29->VAR44, 16);
    VAR16[0] = VAR16[1] = 0;
    memcpy(VAR16 + 2, VAR27, 16);
    VAR5 = 0;
    for (VAR3 = 0; VAR3 < 3; VAR3++)
    {
        FUN7(VAR18, VAR11);
        FUN7(VAR18 + 4, VAR11 + 1);
        VAR11 += 2;
        FUN12(VAR29->VAR42, VAR17, VAR18, 1, NULL, 0);
        for (VAR4 = 0; VAR4 < VAR45 && VAR5 < 18; VAR4 += 1, VAR5 += 1)
        {
            VAR16[VAR5] = VAR16[VAR5] ^ VAR17[VAR4];
        }
    }
    memcpy(VAR29->VAR46, VAR16 + 2, 16);
    FUN5(VAR2, VAR37, "");
    for (VAR3 = 0; VAR3 < 16; VAR3++)
        FUN5(VAR2, VAR37, "", VAR29->VAR46[VAR3]);
    FUN5(VAR2, VAR37, "");
    VAR34 = FUN13(VAR2, NULL);
    if (!VAR34)
    {
        FUN14(&VAR29->VAR42);
        return FUN8(VAR43);
    }
    VAR34->VAR47->VAR48 = VAR49;
    if (!strcmp(VAR15, ""))
    {
        VAR34->VAR47->VAR50 = VAR51;
        VAR34->VAR47->VAR52 = 22050;
        VAR34->VAR53 = VAR54;
        VAR34->VAR55 = 0;
    }
    else if (!strcmp(VAR15, ""))
    {
        VAR34->VAR47->VAR50 = VAR56;
        VAR34->VAR47->VAR57 = 19;
        VAR34->VAR47->VAR58 = 1;
        VAR34->VAR47->VAR52 = 8500;
    }
    else if (!strcmp(VAR15, ""))
    {
        VAR34->VAR47->VAR50 = VAR56;
        VAR34->VAR47->VAR57 = 20;
        VAR34->VAR47->VAR58 = 1;
        VAR34->VAR47->VAR52 = 16000;
    }
    for (VAR3 = 1; VAR3 < VAR9; VAR3++)
    {
        VAR20 = VAR24[VAR3].VAR23;
        if (VAR20 > VAR19)
        {
            VAR6 = VAR3;
            VAR19 = VAR20;
        }
    }
    VAR12 = VAR24[VAR6].VAR22;
    FUN15(VAR32, VAR12, VAR59);
    VAR29->VAR60 = 0;
    return 0;
}