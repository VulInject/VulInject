static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = &VAR2->VAR7;
    int VAR8, VAR9, VAR10, VAR11, VAR12, VAR13;
    int VAR14 = VAR2->VAR15->VAR14;
    int VAR16 = VAR2->VAR15->VAR16;
    VAR2->VAR17 = (VAR4[0] >> 1) & 7;
    if (VAR2->VAR17 > 1)
    {
        FUN2(VAR2->VAR15, "", VAR2->VAR17);
        return VAR18;
    }
    VAR2->VAR19 = !(VAR4[0] & 1);
    VAR2->VAR20 = 0;
    VAR8 = FUN3(VAR4) >> 4;
    VAR4 += 4 - VAR2->VAR17;
    VAR5 -= 4 - VAR2->VAR17;
    memcpy(VAR2->VAR21, VAR2->VAR22.VAR23, sizeof(VAR2->VAR21));
    FUN4(VAR7, VAR4, VAR8);
    VAR4 += VAR8;
    VAR5 -= VAR8;
    if (VAR2->VAR19)
    {
        VAR14 = FUN5(VAR7, 12);
        VAR16 = FUN5(VAR7, 12);
        VAR9 = FUN5(VAR7, 2);
        VAR10 = FUN5(VAR7, 2);
        if (VAR9 || VAR10)
            FUN2(VAR2->VAR15, "");
        VAR2->VAR24 = VAR2->VAR25 = VAR26;
        FUN6(VAR2);
        memcpy(VAR2->VAR27->VAR28, VAR29, sizeof(VAR2->VAR27->VAR28));
        memcpy(VAR2->VAR27->VAR30, VAR31, sizeof(VAR2->VAR27->VAR30));
        for (VAR11 = 0; VAR11 < 2; VAR11++)
            memcpy(VAR2->VAR27->VAR32[VAR11], VAR33[VAR11], sizeof(VAR33[VAR11]));
        memset(&VAR2->VAR34, 0, sizeof(VAR2->VAR34));
        memset(&VAR2->VAR35, 0, sizeof(VAR2->VAR35));
        memcpy(VAR2->VAR27[0].VAR36, VAR37, sizeof(VAR2->VAR27[0].VAR36));
    }
    if (VAR2->VAR19 || VAR2->VAR17 > 0)
        memset(VAR2->VAR38, 0, sizeof(VAR2->VAR38));
    for (VAR11 = 0; VAR11 < 4; VAR11++)
    {
        VAR2->VAR39[VAR11] = FUN7(VAR7);
        if (VAR2->VAR39[VAR11])
        {
            VAR2->VAR40[VAR11] = FUN5(VAR7, 8);
            for (VAR12 = 0; VAR12 < 3; VAR12++)
                VAR2->VAR41[VAR11][VAR12] = FUN7(VAR7) ? FUN5(VAR7, 8) : 255;
            if (VAR42[VAR2->VAR17][VAR11])
                for (VAR12 = 0; VAR12 < 4; VAR12++)
                    VAR2->VAR43[VAR11][VAR12] = FUN7(VAR7) ? FUN5(VAR7, VAR42[VAR2->VAR17][VAR11]) : 0;
        }
    }
    VAR2->VAR34.VAR44 = 0;
    VAR2->VAR34.VAR45 = 0;
    VAR2->VAR35.VAR44 = 0;
    VAR2->VAR46 = 1;
    FUN4(&VAR2->VAR47[0], VAR4, VAR5);
    if (!VAR2->VAR48 || VAR14 != VAR2->VAR15->VAR14 || VAR16 != VAR2->VAR15->VAR16 || (VAR14 + 15) / 16 != VAR2->VAR49 || (VAR16 + 15) / 16 != VAR2->VAR50)
    {
        if ((VAR13 = FUN8(VAR2, VAR14, VAR16)) < 0)
            return VAR13;
    }
    FUN9(VAR2);
    if (!VAR2->VAR19)
    {
        VAR2->VAR24 = FUN7(VAR7) ? VAR26 : VAR51;
        VAR2->VAR52[VAR53] = 0;
    }
    VAR2->VAR54 = 1;
    VAR2->VAR55 = 1;
    VAR2->VAR56 = 1;
    if (VAR2->VAR17 > 0)
    {
        VAR2->VAR55 = FUN7(VAR7);
        if (!VAR2->VAR55)
            VAR2->VAR27[1] = VAR2->VAR27[0];
        if (!VAR2->VAR19)
            VAR2->VAR56 = FUN7(VAR7);
    }
    if (VAR2->VAR56 && FUN7(VAR7))
    {
        if ((VAR13 = FUN10(VAR2, VAR7)) < 0)
            return VAR13;
    }
    if (!VAR2->VAR17)
        VAR2->VAR57.VAR58 = FUN7(VAR7);
    if (FUN7(VAR7))
        for (VAR11 = 1; VAR11 < 16; VAR11++)
            VAR2->VAR27[0].VAR36[VAR11] = VAR37[FUN5(VAR7, 4)];
    if (VAR2->VAR17 > 0)
        VAR2->VAR57.VAR58 = FUN7(VAR7);
    VAR2->VAR57.VAR59 = FUN5(VAR7, 6);
    VAR2->VAR57.VAR60 = FUN5(VAR7, 3);
    FUN11(VAR2);
    VAR2->VAR61 = 0;
    if (!VAR2->VAR19)
    {
        VAR2->VAR27->VAR62 = FUN5(VAR7, 8);
        VAR2->VAR27->VAR63 = FUN5(VAR7, 8);
        FUN12(VAR2, VAR64);
    }
    return 0;
}