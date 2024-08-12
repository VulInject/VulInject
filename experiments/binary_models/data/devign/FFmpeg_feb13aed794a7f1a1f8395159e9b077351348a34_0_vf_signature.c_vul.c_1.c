static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = &(VAR9->VAR13[FUN2(VAR2)]);
    VAR14 *VAR15;
    static const uint8_t VAR16[5] = {3 * 3 * 3 * 3, 3 * 3 * 3, 3 * 3, 3, 1};
    static const unsigned int VAR17[25] = {44, 57, 70, 100, 101, 102, 103, 111, 175, 210, 217, 219, 233, 237, 269, 270, 273, 274, 275, 285, 295, 296, 334, 337, 354};
    static const uint8_t VAR18[25] = {5, 10, 11, 15, 20, 21, 12, 22, 6, 0, 1, 2, 7, 13, 14, 8, 9, 3, 23, 16, 17, 24, 4, 18, 19};
    uint8_t VAR19[5] = {0, 0, 0, 0, 0};
    uint64_t VAR20[32][32];
    uint64_t VAR21;
    VAR22 *VAR23 = VAR4->VAR24[0];
    int VAR25, VAR26;
    int *VAR27;
    uint64_t VAR28[VAR29];
    int VAR30 = 0, VAR31 = 0, VAR32 = 0;
    int32_t VAR33 = 1, VAR34 = 1, VAR35 = 1, VAR36 = 1, VAR37, VAR38;
    int64_t VAR39;
    int VAR40, VAR41, VAR42, VAR43;
    uint64_t VAR44;
    int VAR45;
    int64_t VAR46;
    int64_t VAR47;
    int64_t VAR48 = (VAR12->VAR49) ? 65536 : VAR50;
    if (VAR12->VAR51)
    {
        VAR15 = FUN3(sizeof(VAR14));
        if (!VAR15)
            return FUN4(VAR52);
        VAR12->VAR51->VAR53 = VAR15;
        VAR15->VAR54 = VAR12->VAR51;
        VAR12->VAR51 = VAR15;
    }
    else
    {
        VAR15 = VAR12->VAR51 = VAR12->VAR55;
        VAR12->VAR56->VAR57 = VAR15;
    }
    VAR15->VAR58 = VAR4->VAR58;
    VAR15->VAR59 = VAR12->VAR60++;
    memset(VAR20, 0, sizeof(VAR61) * 32 * 32);
    VAR27 = FUN5(VAR2->VAR32, sizeof(int));
    if (!VAR27)
        return FUN4(VAR52);
    for (VAR40 = 0; VAR40 < VAR2->VAR32; VAR40++)
    {
        VAR27[VAR40] = (VAR40 * 32) / VAR2->VAR32;
    }
    for (VAR40 = 0; VAR40 < VAR2->VAR62; VAR40++)
    {
        VAR25 = (VAR40 * 32) / VAR2->VAR62;
        for (VAR41 = 0; VAR41 < VAR2->VAR32; VAR41++)
        {
            VAR26 = VAR27[VAR41];
            VAR20[VAR25][VAR26] += VAR23[VAR41];
        }
        VAR23 += VAR4->VAR63[0];
    }
    FUN6(&VAR27);
    VAR33 = VAR2->VAR62 / 32;
    if (VAR2->VAR62 % 32)
        VAR34 = VAR33 + 1;
    VAR35 = VAR2->VAR32 / 32;
    if (VAR2->VAR32 % 32)
        VAR36 = VAR35 + 1;
    VAR39 = (VAR12->VAR49) ? VAR33 * VAR34 * VAR35 * VAR36 : 1;
    for (VAR40 = 0; VAR40 < 32; VAR40++)
    {
        VAR21 = 0;
        VAR37 = 1;
        if (VAR34 > 1)
        {
            VAR37 = ((VAR2->VAR62 * (VAR40 + 1)) % 32 == 0) ? (VAR2->VAR62 * (VAR40 + 1)) / 32 - 1 : (VAR2->VAR62 * (VAR40 + 1)) / 32;
            VAR37 -= ((VAR2->VAR62 * VAR40) % 32 == 0) ? (VAR2->VAR62 * VAR40) / 32 - 1 : (VAR2->VAR62 * VAR40) / 32;
            VAR37 = (VAR37 == VAR33) ? VAR34 : VAR33;
        }
        for (VAR41 = 0; VAR41 < 32; VAR41++)
        {
            VAR38 = 1;
            if (VAR36 > 1)
            {
                VAR38 = ((VAR2->VAR32 * (VAR41 + 1)) % 32 == 0) ? (VAR2->VAR32 * (VAR41 + 1)) / 32 - 1 : (VAR2->VAR32 * (VAR41 + 1)) / 32;
                VAR38 -= ((VAR2->VAR32 * VAR41) % 32 == 0) ? (VAR2->VAR32 * VAR41) / 32 - 1 : (VAR2->VAR32 * VAR41) / 32;
                VAR38 = (VAR38 == VAR35) ? VAR36 : VAR35;
            }
            VAR21 += VAR20[VAR40][VAR41] * VAR37 * VAR38 * VAR48 / VAR39;
            if (VAR40 > 0)
            {
                VAR20[VAR40][VAR41] = VAR20[VAR40 - 1][VAR41] + VAR21;
            }
            else
            {
                VAR20[VAR40][VAR41] = VAR21;
            }
        }
    }
    VAR39 = (VAR12->VAR49) ? 1 : VAR33 * VAR34 * VAR35 * VAR36;
    for (VAR40 = 0; VAR40 < VAR64; VAR40++)
    {
        const VAR65 *VAR66 = VAR67[VAR40];
        VAR68 *VAR69;
        VAR61 *VAR70;
        VAR69 = FUN5(VAR66->VAR71, sizeof(VAR68));
        if (!VAR69)
            return FUN4(VAR52);
        VAR70 = FUN5(VAR66->VAR71, sizeof(VAR68));
        if (!VAR70)
            return FUN4(VAR52);
        for (VAR41 = 0; VAR41 < VAR66->VAR71; VAR41++)
        {
            VAR44 = 0;
            VAR45 = 0;
            for (VAR42 = 0; VAR42 < VAR66->VAR72; VAR42++)
            {
                VAR44 += FUN7(VAR12, VAR20, &VAR66->VAR73[VAR41 * VAR66->VAR74 + VAR42]);
                VAR45 += FUN8(&VAR66->VAR73[VAR41 * VAR66->VAR74 + VAR42]);
            }
            VAR47 = VAR44 / VAR45;
            if (VAR66->VAR75)
            {
                VAR47 -= 128 * VAR48 * VAR39;
            }
            else
            {
                VAR44 = 0;
                VAR45 = 0;
                for (; VAR42 < VAR66->VAR74; VAR42++)
                {
                    VAR44 += FUN7(VAR12, VAR20, &VAR66->VAR73[VAR41 * VAR66->VAR74 + VAR42]);
                    VAR45 += FUN8(&VAR66->VAR73[VAR41 * VAR66->VAR74 + VAR42]);
                }
                VAR47 -= VAR44 / VAR45;
                VAR28[VAR31++] = FUN9(VAR47 * 8 / (VAR48 * VAR39));
            }
            VAR69[VAR41] = VAR47;
            VAR70[VAR41] = FUN9(VAR47);
        }
        FUN10(VAR70, VAR66->VAR71, sizeof(VAR61), (void *)VAR76);
        VAR46 = VAR70[(int)(VAR66->VAR71 * 0.333)];
        for (VAR41 = 0; VAR41 < VAR66->VAR71; VAR41++)
        {
            if (VAR69[VAR41] < -VAR46)
            {
                VAR43 = 0;
            }
            else if (VAR69[VAR41] <= VAR46)
            {
                VAR43 = 1;
            }
            else
            {
                VAR43 = 2;
            }
            VAR15->VAR77[VAR30 / 5] += VAR43 * VAR16[VAR30 % 5];
            if (VAR30 == VAR17[VAR32])
            {
                VAR15->VAR78[VAR18[VAR32] / 5] += VAR43 * VAR16[VAR19[VAR18[VAR32] / 5]++];
                if (VAR32 < 24)
                    VAR32++;
            }
            VAR30++;
        }
        FUN6(&VAR69);
        FUN6(&VAR70);
    }
    FUN10(VAR28, VAR29, sizeof(VAR61), (void *)VAR76);
    VAR15->VAR79 = FUN11(VAR28[VAR29 / 2], 255);
    if (VAR12->VAR80 == 0)
    {
        if (VAR12->VAR81)
        {
            VAR12->VAR56 = FUN3(sizeof(VAR82));
            if (!VAR12->VAR56)
                return FUN4(VAR52);
            VAR12->VAR56->VAR57 = VAR15;
            VAR12->VAR81->VAR53 = VAR12->VAR56;
            VAR12->VAR83 = VAR12->VAR56;
        }
    }
    if (VAR12->VAR80 == 45)
    {
        VAR12->VAR84 = 1;
        VAR12->VAR81 = FUN3(sizeof(VAR82));
        if (!VAR12->VAR81)
            return FUN4(VAR52);
        VAR12->VAR81->VAR57 = VAR15;
        VAR12->VAR56->VAR53 = VAR12->VAR81;
        VAR12->VAR83 = VAR12->VAR81;
    }
    for (VAR40 = 0; VAR40 < 5; VAR40++)
    {
        FUN12(VAR12->VAR56->VAR24[VAR40], VAR15->VAR78[VAR40]);
    }
    VAR12->VAR56->VAR85 = VAR15;
    if (VAR12->VAR84)
    {
        for (VAR40 = 0; VAR40 < 5; VAR40++)
        {
            FUN12(VAR12->VAR81->VAR24[VAR40], VAR15->VAR78[VAR40]);
        }
        VAR12->VAR81->VAR85 = VAR15;
    }
    VAR12->VAR80 = (VAR12->VAR80 + 1) % 90;
    if (FUN13() == VAR86)
    {
        FUN14(VAR6, VAR86, "", FUN2(VAR2), VAR15->VAR79);
        FUN14(VAR6, VAR86, "");
        for (VAR40 = 0; VAR40 < 5; VAR40++)
        {
            FUN14(VAR6, VAR86, "", VAR15->VAR78[VAR40]);
            FUN14(VAR6, VAR86, "", VAR15->VAR78[VAR40] / VAR16[0]);
            for (VAR41 = 1; VAR41 < 5; VAR41++)
                FUN14(VAR6, VAR86, "", VAR15->VAR78[VAR40] % VAR16[VAR41 - 1] / VAR16[VAR41]);
            FUN14(VAR6, VAR86, "");
        }
        FUN14(VAR6, VAR86, "");
        FUN14(VAR6, VAR86, "");
        for (VAR40 = 0; VAR40 < VAR87 / 5; VAR40++)
        {
            FUN14(VAR6, VAR86, "", VAR15->VAR77[VAR40] / VAR16[0]);
            for (VAR41 = 1; VAR41 < 5; VAR41++)
                FUN14(VAR6, VAR86, "", VAR15->VAR77[VAR40] % VAR16[VAR41 - 1] / VAR16[VAR41]);
        }
        FUN14(VAR6, VAR86, "");
    }
    if (FUN2(VAR2) == 0)
        return FUN15(VAR2->VAR7->VAR88[0], VAR4);
    return 1;
}