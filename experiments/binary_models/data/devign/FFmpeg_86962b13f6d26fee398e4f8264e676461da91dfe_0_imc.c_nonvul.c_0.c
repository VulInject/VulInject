static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    int VAR14;
    int VAR15, VAR16, VAR17, VAR18;
    int VAR19;
    int VAR20, VAR21;
    int VAR22, VAR23;
    FUN2(VAR24, VAR25, [VAR26 / 2]);
    if (VAR9 < VAR26)
    {
        FUN3(VAR2, VAR27, "");
        return -1;
    }
    VAR18 = VAR28 * FUN4(VAR2->VAR29);
    if (*VAR4 < VAR18)
    {
        FUN3(VAR2, VAR27, "");
        return FUN5(VAR30);
    }
    VAR12->VAR31.FUN6(VAR25, (const VAR24 *)VAR8, VAR26 / 2);
    VAR12->VAR32 = VAR3;
    FUN7(&VAR12->VAR33, (const VAR7 *)VAR25, VAR26 * 8);
    VAR15 = FUN8(&VAR12->VAR33, 9);
    if (VAR15 != VAR34)
    {
        FUN3(VAR2, VAR27, "");
        FUN3(VAR2, VAR27, "", VAR15);
        return -1;
    }
    VAR14 = FUN8(&VAR12->VAR33, 3);
    if (VAR14 & 1)
    {
        FUN3(VAR2, VAR27, "", VAR14);
        return -1;
    }
    if (VAR14 & 0x04)
        VAR12->VAR35 = 1;
    if (VAR12->VAR35)
    {
        memset(VAR12->VAR32, 0, sizeof(VAR12->VAR32));
        for (VAR16 = 0; VAR16 < VAR36; VAR16++)
            VAR12->VAR37[VAR16] = 1.0;
        for (VAR16 = 0; VAR16 < VAR28; VAR16++)
            VAR12->VAR38[VAR16] = 0;
        VAR12->VAR35 = 0;
    }
    VAR19 = FUN9(&VAR12->VAR33);
    FUN10(VAR12, VAR14, VAR12->VAR39);
    if (VAR14 & 0x4)
        FUN11(VAR12, VAR12->VAR39, VAR12->VAR40, VAR12->VAR41);
    else
        FUN12(VAR12, VAR12->VAR39, VAR12->VAR37, VAR12->VAR40, VAR12->VAR41);
    memcpy(VAR12->VAR37, VAR12->VAR40, 32 * sizeof(float));
    VAR22 = 0;
    for (VAR16 = 0; VAR16 < VAR36; VAR16++)
    {
        if (VAR12->VAR39[VAR16] == 16)
        {
            VAR12->VAR42[VAR16] = 0;
            VAR22++;
        }
        else
            VAR12->VAR42[VAR16] = VAR43[VAR16 + 1] - VAR43[VAR16];
    }
    memset(VAR12->VAR44, 0, VAR36 * sizeof(int));
    for (VAR16 = 0; VAR16 < VAR36 - 1; VAR16++)
    {
        if (VAR12->VAR42[VAR16])
            VAR12->VAR44[VAR16] = FUN9(&VAR12->VAR33);
    }
    FUN13(VAR12, VAR12->VAR40, VAR12->VAR41, VAR12->VAR42, VAR12->VAR45, VAR12->VAR46);
    VAR23 = 0;
    if (VAR14 & 0x2)
    {
        VAR23 += 15;
        VAR12->VAR47[0] = 5;
        VAR12->VAR48[0] = 5;
        VAR12->VAR48[1] = 5;
        VAR12->VAR48[2] = 5;
        for (VAR16 = 1; VAR16 < 4; VAR16++)
        {
            VAR20 = (VAR12->VAR39[VAR16] == 16) ? 0 : 5;
            VAR12->VAR47[VAR16] = VAR20;
            for (VAR17 = VAR43[VAR16]; VAR17 < VAR43[VAR16 + 1]; VAR17++)
            {
                VAR12->VAR48[VAR17] = VAR20;
                VAR23 += VAR20;
            }
        }
    }
    if (FUN14(VAR12, VAR14, 512 - VAR23 - FUN15(&VAR12->VAR33), VAR19) < 0)
    {
        FUN3(VAR2, VAR27, "");
        VAR12->VAR35 = 1;
        return -1;
    }
    for (VAR16 = 0; VAR16 < VAR36; VAR16++)
    {
        VAR12->VAR49[VAR16] = 0;
        VAR12->VAR50[VAR16] = 0;
        for (VAR17 = VAR43[VAR16]; VAR17 < VAR43[VAR16 + 1]; VAR17++)
            VAR12->VAR49[VAR16] += VAR12->VAR48[VAR17];
        if (VAR12->VAR44[VAR16])
            if ((((VAR43[VAR16 + 1] - VAR43[VAR16]) * 1.5) > VAR12->VAR49[VAR16]) && (VAR12->VAR49[VAR16] > 0))
                VAR12->VAR50[VAR16] = 1;
    }
    FUN16(VAR12);
    for (VAR16 = 0; VAR16 < VAR36; VAR16++)
    {
        VAR12->VAR51[VAR16] = VAR12->VAR40[VAR16];
        if (VAR12->VAR44[VAR16] && (VAR43[VAR16 + 1] - VAR43[VAR16]) != VAR12->VAR52[VAR16])
        {
            VAR12->VAR51[VAR16] *= VAR12->VAR53[VAR43[VAR16 + 1] - VAR43[VAR16]] / VAR12->VAR53[(VAR43[VAR16 + 1] - VAR43[VAR16] - VAR12->VAR52[VAR16])];
        }
    }
    VAR20 = VAR21 = 0;
    for (VAR16 = 0; VAR16 < VAR36; VAR16++)
    {
        if (VAR12->VAR44[VAR16])
        {
            for (VAR17 = VAR43[VAR16]; VAR17 < VAR43[VAR16 + 1]; VAR17++)
            {
                if (VAR12->VAR54[VAR17])
                {
                    VAR21 += VAR12->VAR48[VAR17];
                    VAR12->VAR48[VAR17] = 0;
                }
            }
            VAR20 += VAR12->VAR55[VAR16];
            VAR21 -= VAR12->VAR55[VAR16];
        }
    }
    FUN17(VAR12, VAR21);
    for (VAR16 = 0; VAR16 < VAR36; VAR16++)
    {
        VAR12->VAR49[VAR16] = 0;
        for (VAR17 = VAR43[VAR16]; VAR17 < VAR43[VAR16 + 1]; VAR17++)
            if (!VAR12->VAR54[VAR17])
                VAR12->VAR49[VAR16] += VAR12->VAR48[VAR17];
    }
    memset(VAR12->VAR56, 0, sizeof(VAR12->VAR56));
    if (FUN18(VAR12) < 0)
    {
        FUN3(VAR2, VAR27, "");
        VAR12->VAR35 = 1;
        return 0;
    }
    if (FUN19(VAR12, VAR14) < 0)
    {
        FUN3(VAR2, VAR27, "");
        VAR12->VAR35 = 1;
        return 0;
    }
    memset(VAR12->VAR54, 0, sizeof(VAR12->VAR54));
    FUN20(VAR12);
    *VAR4 = VAR18;
    return VAR26;
}