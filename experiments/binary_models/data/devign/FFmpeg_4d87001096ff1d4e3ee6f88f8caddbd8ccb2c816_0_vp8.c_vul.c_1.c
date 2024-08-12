static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = &VAR2->VAR7;
    int VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14, VAR15, VAR16;
    int VAR17 = VAR2->VAR18->VAR17;
    int VAR19 = VAR2->VAR18->VAR19;
    VAR2->VAR20 = !(VAR4[0] & 1);
    VAR2->VAR21 = (VAR4[0] >> 1) & 7;
    VAR2->VAR22 = !(VAR4[0] & 0x10);
    VAR8 = FUN2(VAR4) >> 5;
    VAR4 += 3;
    VAR5 -= 3;
    if (VAR2->VAR21 > 3)
        FUN3(VAR2->VAR18, VAR23, "", VAR2->VAR21);
    if (!VAR2->VAR21)
        memcpy(VAR2->VAR24, VAR2->VAR25.VAR26, sizeof(VAR2->VAR24));
    else
        memcpy(VAR2->VAR24, VAR2->VAR25.VAR27, sizeof(VAR2->VAR24));
    if (VAR8 > VAR5 - 7 * VAR2->VAR20)
    {
        FUN3(VAR2->VAR18, VAR28, "");
        return VAR29;
    }
    if (VAR2->VAR20)
    {
        if (FUN2(VAR4) != 0x2a019d)
        {
            FUN3(VAR2->VAR18, VAR28, "", FUN2(VAR4));
            return VAR29;
        }
        VAR17 = FUN4(VAR4 + 3) & 0x3fff;
        VAR19 = FUN4(VAR4 + 5) & 0x3fff;
        VAR9 = VAR4[4] >> 6;
        VAR10 = VAR4[6] >> 6;
        VAR4 += 7;
        VAR5 -= 7;
        if (VAR9 || VAR10)
            FUN5(VAR2->VAR18, "", 1);
        VAR2->VAR30 = VAR2->VAR31 = VAR32;
        for (VAR11 = 0; VAR11 < 4; VAR11++)
            for (VAR12 = 0; VAR12 < 16; VAR12++)
                memcpy(VAR2->VAR33->VAR34[VAR11][VAR12], VAR35[VAR11][VAR36[VAR12]], sizeof(VAR2->VAR33->VAR34[VAR11][VAR12]));
        memcpy(VAR2->VAR33->VAR37, VAR38, sizeof(VAR2->VAR33->VAR37));
        memcpy(VAR2->VAR33->VAR39, VAR40, sizeof(VAR2->VAR33->VAR39));
        memcpy(VAR2->VAR33->VAR41, VAR42, sizeof(VAR2->VAR33->VAR41));
        memset(&VAR2->VAR43, 0, sizeof(VAR2->VAR43));
    }
    if (!VAR2->VAR44 || VAR17 != VAR2->VAR18->VAR17 || VAR19 != VAR2->VAR18->VAR19)
    {
        if ((VAR16 = FUN6(VAR2, VAR17, VAR19)) < 0)
            return VAR16;
    }
    FUN7(VAR7, VAR4, VAR8);
    VAR4 += VAR8;
    VAR5 -= VAR8;
    if (VAR2->VAR20)
    {
        if (FUN8(VAR7))
            FUN3(VAR2->VAR18, VAR23, "");
        FUN8(VAR7);
    }
    if ((VAR2->VAR43.VAR45 = FUN8(VAR7)))
        FUN9(VAR2);
    else
        VAR2->VAR43.VAR46 = 0;
    VAR2->VAR47.VAR48 = FUN8(VAR7);
    VAR2->VAR47.VAR49 = FUN10(VAR7, 6);
    VAR2->VAR47.VAR50 = FUN10(VAR7, 3);
    if ((VAR2->VAR51.VAR45 = FUN8(VAR7)))
        if (FUN8(VAR7))
            FUN11(VAR2);
    if (FUN12(VAR2, VAR4, VAR5))
    {
        FUN3(VAR2->VAR18, VAR28, "");
        return VAR29;
    }
    FUN13(VAR2);
    if (!VAR2->VAR20)
    {
        FUN14(VAR2);
        VAR2->VAR52[VAR53] = FUN8(VAR7);
        VAR2->VAR52[VAR54] = FUN8(VAR7);
    }
    if (!(VAR2->VAR55 = FUN8(VAR7)))
        VAR2->VAR33[1] = VAR2->VAR33[0];
    VAR2->VAR56 = VAR2->VAR20 || FUN8(VAR7);
    for (VAR11 = 0; VAR11 < 4; VAR11++)
        for (VAR12 = 0; VAR12 < 8; VAR12++)
            for (VAR13 = 0; VAR13 < 3; VAR13++)
                for (VAR14 = 0; VAR14 < VAR57 - 1; VAR14++)
                    if (FUN15(VAR7, VAR58[VAR11][VAR12][VAR13][VAR14]))
                    {
                        int VAR33 = FUN10(VAR7, 8);
                        for (VAR15 = 0; VAR59[VAR12][VAR15] >= 0; VAR15++)
                            VAR2->VAR33->VAR34[VAR11][VAR59[VAR12][VAR15]][VAR13][VAR14] = VAR33;
                    }
    if ((VAR2->VAR60 = FUN8(VAR7)))
        VAR2->VAR33->VAR61 = FUN10(VAR7, 8);
    if (!VAR2->VAR20)
    {
        VAR2->VAR33->VAR62 = FUN10(VAR7, 8);
        VAR2->VAR33->VAR63 = FUN10(VAR7, 8);
        VAR2->VAR33->VAR64 = FUN10(VAR7, 8);
        if (FUN8(VAR7))
            for (VAR11 = 0; VAR11 < 4; VAR11++)
                VAR2->VAR33->VAR37[VAR11] = FUN10(VAR7, 8);
        if (FUN8(VAR7))
            for (VAR11 = 0; VAR11 < 3; VAR11++)
                VAR2->VAR33->VAR39[VAR11] = FUN10(VAR7, 8);
        for (VAR11 = 0; VAR11 < 2; VAR11++)
            for (VAR12 = 0; VAR12 < 19; VAR12++)
                if (FUN15(VAR7, VAR65[VAR11][VAR12]))
                    VAR2->VAR33->VAR41[VAR11][VAR12] = FUN16(VAR7);
    }
    return 0;
}