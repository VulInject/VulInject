static int FUN1(VAR1 *VAR2, unsigned char *VAR3, int VAR4, void *VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *const VAR10 = &VAR7->VAR10;
    VAR11 *VAR12 = VAR5;
    const int VAR13 = VAR7->VAR2->VAR13;
    const int VAR14 = VAR7->VAR2->VAR14;
    int VAR15 = 0;
    int VAR16, VAR17, VAR18, VAR19, VAR20;
    FUN2(VAR10, VAR3, VAR4);
    FUN3(VAR10, VAR21, VAR22, VAR23, 64);
    VAR7->VAR24 = *VAR12;
    memset(VAR7->VAR25, 0, sizeof(VAR7->VAR25));
    VAR7->VAR26 = VAR2->VAR27 == 0 || VAR2->VAR28 % VAR2->VAR27 == 0;
    VAR12->VAR29 = VAR7->VAR26 ? VAR30 : VAR31;
    if (VAR12->VAR32)
    {
        VAR7->VAR33 = FUN4(VAR34 * FUN5(VAR12->VAR32 / (float)VAR35) / FUN5(2));
        VAR7->VAR33 += 61;
    }
    else
    {
        VAR7->VAR33 = VAR36;
    }
    FUN6(VAR7);
    if (VAR12->VAR29 == VAR37)
    {
        int VAR38 = (VAR13 + 15) >> 4;
        int VAR39 = (VAR14 + 15) >> 4;
        int VAR40 = VAR7->VAR41.VAR42[0];
        VAR43 *VAR44 = VAR7->VAR24.VAR5[0];
        int VAR45 = VAR7->VAR24.VAR42[0];
        int VAR46, VAR47;
        assert(VAR7->VAR41.VAR5[0]);
        assert(VAR7->VAR48.VAR5[0]);
        VAR7->VAR49.VAR2 = VAR7->VAR2;
        VAR7->VAR49.VAR41.VAR5[0] = VAR7->VAR41.VAR5[0];
        VAR7->VAR49.VAR48.VAR5[0] = VAR7->VAR48.VAR5[0];
        VAR7->VAR49.VAR50.VAR5[0] = VAR7->VAR24.VAR5[0];
        VAR7->VAR49.VAR51 = &VAR7->VAR49.VAR41;
        VAR7->VAR49.VAR52 = &VAR7->VAR49.VAR48;
        VAR7->VAR49.VAR42 = VAR7->VAR49.VAR48.VAR42[0] = VAR7->VAR49.VAR50.VAR42[0] = VAR7->VAR49.VAR41.VAR42[0] = VAR40;
        VAR7->VAR49.VAR53 = VAR7->VAR41.VAR42[1];
        VAR7->VAR49.VAR13 = VAR13;
        VAR7->VAR49.VAR14 = VAR14;
        VAR7->VAR49.VAR54 = VAR38;
        VAR7->VAR49.VAR55 = VAR39;
        VAR7->VAR49.VAR56 = VAR7->VAR49.VAR54 + 1;
        VAR7->VAR49.VAR57 = 2 * VAR7->VAR49.VAR54 + 1;
        VAR7->VAR49.VAR58 = 1;
        VAR7->VAR49.VAR29 = VAR12->VAR29;
        VAR7->VAR49.VAR59 = VAR7->VAR2->VAR59;
        VAR7->VAR49.VAR60.VAR61 = 0;
        VAR7->VAR49.VAR62 = VAR7->VAR2->VAR62;
        VAR7->VAR49.VAR63 = (VAR7->VAR2->VAR62 & VAR64) != 0;
        VAR7->VAR49.VAR65 = VAR66;
        VAR7->VAR49.VAR67 = 1;
        VAR7->VAR68 = VAR7->VAR49.VAR68 = VAR12->VAR32 * 3 / 2;
        VAR7->VAR49.VAR69 = (VAR7->VAR49.VAR68 * 139 + VAR70 * 64) >> (VAR71 + 7);
        VAR7->VAR72 = VAR7->VAR49.VAR72 = (VAR7->VAR49.VAR68 * VAR7->VAR49.VAR68 + VAR70 / 2) >> VAR71;
        VAR7->VAR49.VAR73 = VAR7->VAR73;
        FUN7(&VAR7->VAR49);
    }
VAR74:
    VAR7->VAR75 = VAR12->VAR29 == VAR37 ? 2 : 0;
    FUN8(VAR7);
    FUN9(VAR7);
    for (VAR19 = 0; VAR19 < 3; VAR19++)
    {
        VAR76 *VAR77 = &VAR7->VAR78[VAR19];
        int VAR79 = VAR77->VAR13;
        int VAR80 = VAR77->VAR14;
        int VAR46, VAR47;
        int VAR81 = FUN10(&VAR7->VAR10.VAR82);
        if (VAR12->VAR5[VAR19])
            for (VAR47 = 0; VAR47 < VAR80; VAR47++)
            {
                for (VAR46 = 0; VAR46 < VAR79; VAR46++)
                {
                    VAR7->VAR83[VAR47 * VAR79 + VAR46] = VAR12->VAR5[VAR19][VAR47 * VAR12->VAR42[VAR19] + VAR46] << 8;
                }
            }
        FUN11(VAR7, VAR7->VAR83, VAR19, 0);
        if (VAR19 == 0 && VAR12->VAR29 == VAR37 && VAR7->VAR49.VAR60.VAR61 > VAR7->VAR2->VAR84)
        {
            FUN2(VAR10, VAR3, VAR4);
            FUN3(VAR10, VAR21, VAR22, VAR23, 64);
            VAR12->VAR29 = VAR30;
            VAR7->VAR26 = 1;
            FUN12(VAR7);
            goto VAR74;
        }
        if (VAR7->VAR33 == VAR36)
        {
            for (VAR47 = 0; VAR47 < VAR80; VAR47++)
            {
                for (VAR46 = 0; VAR46 < VAR79; VAR46++)
                {
                    VAR7->VAR83[VAR47 * VAR79 + VAR46] = (VAR7->VAR83[VAR47 * VAR79 + VAR46] + 127) >> 8;
                }
            }
        }
        FUN13(VAR7->VAR83, VAR79, VAR80, VAR79, VAR7->VAR85, VAR7->VAR86);
        for (VAR17 = 0; VAR17 < VAR7->VAR86; VAR17++)
        {
            for (VAR18 = VAR17 ? 1 : 0; VAR18 < 4; VAR18++)
            {
                VAR87 *VAR88 = &VAR77->VAR89[VAR17][VAR18];
                FUN14(VAR7, VAR88, VAR88->VAR3, VAR88->VAR40, VAR7->VAR75);
                if (VAR18 == 0)
                    FUN15(VAR7, VAR88, VAR88->VAR3, VAR88->VAR40, VAR12->VAR29 == VAR37, 0);
                FUN16(VAR7, VAR88, VAR88->VAR3, VAR88->VAR90 ? VAR88->VAR90->VAR3 : NULL, VAR88->VAR40, VAR18);
                assert(VAR88->VAR90 == NULL || VAR88->VAR90->VAR40 == VAR88->VAR40 * 2);
                if (VAR18 == 0)
                    FUN17(VAR7, VAR88, VAR88->VAR3, VAR88->VAR40, 1, 0);
            }
        }
        for (VAR17 = 0; VAR17 < VAR7->VAR86; VAR17++)
        {
            for (VAR18 = VAR17 ? 1 : 0; VAR18 < 4; VAR18++)
            {
                VAR87 *VAR88 = &VAR77->VAR89[VAR17][VAR18];
                FUN18(VAR7, VAR88, VAR88->VAR3, VAR88->VAR40);
            }
        }
        FUN19(VAR7->VAR83, VAR79, VAR80, VAR79, VAR7->VAR85, VAR7->VAR86);
        if (VAR7->VAR33 == VAR36)
        {
            for (VAR47 = 0; VAR47 < VAR80; VAR47++)
            {
                for (VAR46 = 0; VAR46 < VAR79; VAR46++)
                {
                    VAR7->VAR83[VAR47 * VAR79 + VAR46] <<= 8;
                }
            }
        }
        FUN11(VAR7, VAR7->VAR83, VAR19, 1);
        for (VAR47 = 0; VAR47 < VAR80; VAR47++)
        {
            for (VAR46 = 0; VAR46 < VAR79; VAR46++)
            {
                int VAR91 = (VAR7->VAR83[VAR47 * VAR79 + VAR46] + 128) >> 8;
                if (VAR91 & (~255))
                    VAR91 = ~(VAR91 >> 31);
                VAR7->VAR41.VAR5[VAR19][VAR47 * VAR7->VAR41.VAR42[VAR19] + VAR46] = VAR91;
            }
        }
        if (VAR7->VAR2->VAR62 & VAR92)
        {
            int64_t VAR93 = 0;
            if (VAR12->VAR5[VAR19])
                for (VAR47 = 0; VAR47 < VAR80; VAR47++)
                {
                    for (VAR46 = 0; VAR46 < VAR79; VAR46++)
                    {
                        int VAR94 = VAR7->VAR41.VAR5[VAR19][VAR47 * VAR7->VAR41.VAR42[VAR19] + VAR46] - VAR12->VAR5[VAR19][VAR47 * VAR12->VAR42[VAR19] + VAR46];
                        VAR93 += VAR94 * VAR94;
                    }
                }
            VAR7->VAR2->VAR93[VAR19] += VAR93;
            VAR7->VAR2->VAR93[3] += VAR93;
        }
    }
    if (VAR7->VAR48.VAR5[0])
        VAR2->FUN20(VAR2, &VAR7->VAR48);
    FUN21();
    return FUN22(VAR10, 1);
}