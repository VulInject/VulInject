static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    int VAR11;
    int VAR12 = 0;
    int VAR13, VAR14;
    float *VAR15 = VAR3;
    VAR16 *VAR17 = VAR3;
    int VAR18;
    VAR19 *VAR20 = VAR2->VAR21;
    int VAR22;
    int VAR23;
    VAR20->VAR24 = 0;
    VAR20->VAR25 = FUN2(VAR8, VAR9, VAR20->VAR26, VAR27 + VAR28);
    if (VAR20->VAR25 == VAR29)
    {
        FUN3(VAR2, VAR30, "");
        return VAR29;
    }
    FUN4(&VAR20->VAR31, VAR20->VAR26, VAR20->VAR25 * 8);
    if ((VAR14 = FUN5(VAR20)) < 0)
    {
        return VAR14;
    }
    VAR2->VAR32 = VAR20->VAR32;
    VAR2->VAR33 = VAR20->VAR33;
    VAR2->VAR34 = VAR20->VAR35 * 32;
    VAR20->VAR36 = VAR37;
    for (VAR13 = 0; VAR13 < (VAR20->VAR35 / 8); VAR13++)
    {
        FUN6(VAR20, 0, VAR13);
    }
    VAR12 = VAR20->VAR38;
    if (VAR20->VAR39)
        VAR20->VAR40 = VAR41[VAR20->VAR42];
    else
        VAR20->VAR40 = 0;
    VAR23 = FUN7(VAR20->VAR34, VAR20->VAR25) * 8;
    if (VAR20->VAR40 < 0 || VAR20->VAR40 & VAR43)
    {
        VAR20->VAR40 = FUN8(VAR20->VAR40, 0);
        FUN9(&VAR20->VAR31, (-FUN10(&VAR20->VAR31)) & 31);
        while (VAR23 - FUN10(&VAR20->VAR31) >= 32)
        {
            uint32_t VAR44 = FUN11(&VAR20->VAR31, 32);
            switch (VAR44)
            {
            case 0x5a5a5a5a:
            {
                int VAR45, VAR46;
                VAR20->VAR47 = VAR20->VAR38;
                VAR46 = FUN12(&VAR20->VAR31, 10);
                if ((VAR20->VAR34 != (FUN10(&VAR20->VAR31) >> 3) - 4 + VAR46) && (VAR20->VAR34 != (FUN10(&VAR20->VAR31) >> 3) - 4 + VAR46 + 1))
                    continue;
                FUN13(&VAR20->VAR31, 10);
                VAR20->VAR40 |= VAR43;
                if ((VAR45 = FUN14(&VAR20->VAR31, 4)) != 1)
                {
                    FUN3(VAR2, VAR30, ""
                                                "",
                           VAR45);
                    continue;
                }
                FUN15(VAR20, VAR20->VAR47);
                for (VAR13 = 0; VAR13 < (VAR20->VAR35 / 8); VAR13++)
                {
                    FUN6(VAR20, VAR20->VAR47, VAR13);
                }
                VAR20->VAR24 = 1;
                break;
            }
            case 0x47004a03:
                VAR20->VAR40 |= VAR48;
                break;
            case 0x1d95f262:
            {
                int VAR49 = FUN12(&VAR20->VAR31, 12) + 1;
                if (VAR20->VAR34 != (FUN10(&VAR20->VAR31) >> 3) - 4 + VAR49)
                    continue;
                FUN3(VAR2, VAR50, "", FUN10(&VAR20->VAR31));
                FUN13(&VAR20->VAR31, 12);
                FUN3(VAR2, VAR50, "", VAR49);
                FUN3(VAR2, VAR50, "", FUN14(&VAR20->VAR31, 4));
                VAR20->VAR40 |= VAR51;
                break;
            }
            }
            FUN9(&VAR20->VAR31, (-FUN10(&VAR20->VAR31)) & 31);
        }
    }
    else
    {
        FUN9(&VAR20->VAR31, VAR23 - FUN10(&VAR20->VAR31));
    }
    if (VAR20->VAR40 & VAR51)
        VAR20->VAR36 = VAR52;
    else if (VAR20->VAR40 & (VAR43 | VAR48))
        VAR20->VAR36 = VAR53;
    if (VAR20->VAR25 - VAR20->VAR34 > 32 && FUN11(&VAR20->VAR31, 32) == VAR54)
        FUN16(VAR20);
    VAR2->VAR36 = VAR20->VAR36;
    VAR22 = VAR20->VAR38 + !!VAR20->VAR55;
    if (VAR20->VAR56 < 16)
    {
        VAR2->VAR57 = VAR58[VAR20->VAR56];
        if (VAR20->VAR24 && (!VAR2->VAR59 || VAR2->VAR59 > VAR12 + !!VAR20->VAR55))
        {
            VAR2->VAR57 |= VAR60;
            if (VAR20->VAR55)
            {
                VAR2->VAR57 |= VAR61;
                VAR20->VAR62 = VAR63[VAR20->VAR56];
            }
            else
            {
                VAR20->VAR62 = VAR64[VAR20->VAR56];
            }
        }
        else
        {
            VAR22 = VAR12 + !!VAR20->VAR55;
            VAR20->VAR24 = 0;
            if (VAR20->VAR55)
            {
                VAR2->VAR57 |= VAR61;
                VAR20->VAR62 = VAR65[VAR20->VAR56];
            }
            else
                VAR20->VAR62 = VAR66[VAR20->VAR56];
        }
        if (VAR22 > !!VAR20->VAR55 && VAR20->VAR62[VAR22 - 1 - !!VAR20->VAR55] < 0)
            return VAR29;
        if (VAR2->VAR59 == 2 && VAR20->VAR38 > 2)
        {
            VAR22 = 2;
            VAR20->VAR67 = VAR68;
            VAR2->VAR57 = VAR69;
        }
    }
    else
    {
        FUN3(VAR2, VAR30, "", VAR20->VAR56);
        return VAR29;
    }
    if (VAR20->VAR70 == 0)
    {
        VAR20->VAR70 = 1;
        VAR2->VAR22 = VAR22;
    }
    if (VAR2->VAR22 != VAR22)
    {
        FUN3(VAR2, VAR30, ""
                                    "");
        return VAR71;
    }
    VAR18 = 256 / 8 * VAR20->VAR35 * VAR22 * FUN17(VAR2->VAR72);
    if (*VAR4 < VAR18)
        return FUN18(VAR73);
    *VAR4 = VAR18;
    for (VAR13 = 0; VAR13 < (VAR20->VAR35 / 8); VAR13++)
    {
        FUN19(VAR20, VAR13);
        if ((VAR20->VAR74 & 1) && VAR20->VAR24)
        {
            float *VAR75 = VAR20->VAR76 + VAR20->VAR62[VAR20->VAR47] * 256;
            float *VAR77 = VAR20->VAR76 + VAR20->VAR62[VAR20->VAR47 - 2] * 256;
            float *VAR78 = VAR20->VAR76 + VAR20->VAR62[VAR20->VAR47 - 1] * 256;
            VAR20->VAR79.FUN20(VAR77, VAR75, -VAR80, 256);
            VAR20->VAR79.FUN20(VAR78, VAR75, -VAR80, 256);
        }
        if (VAR2->VAR72 == VAR81)
        {
            VAR20->VAR82.FUN21(VAR15, VAR20->VAR83, 256, VAR22);
            VAR15 += 256 * VAR22;
        }
        else
        {
            VAR20->VAR82.FUN22(VAR17, VAR20->VAR83, 256, VAR22);
            VAR17 += 256 * VAR22;
        }
    }
    VAR11 = 2 * VAR20->VAR55 * (VAR20->VAR35 / 8);
    for (VAR13 = 0; VAR13 < 2 * VAR20->VAR55 * 4; VAR13++)
    {
        VAR20->VAR84[VAR13] = VAR20->VAR84[VAR13 + VAR11];
    }
    return VAR9;
}