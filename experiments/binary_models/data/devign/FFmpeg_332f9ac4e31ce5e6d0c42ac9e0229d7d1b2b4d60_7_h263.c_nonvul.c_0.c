static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6;
    VAR2->VAR7 = FUN2(VAR4, 2) + VAR8;
    if (VAR2->VAR7 == VAR9 && VAR2->VAR10 && VAR2->VAR11 == 0 && !(VAR2->VAR12 & VAR13))
    {
        FUN3(VAR2->VAR14, VAR15, "");
        VAR2->VAR10 = 0;
    }
    VAR2->VAR16 = VAR2->VAR17 && VAR2->VAR7 != VAR9;
    if (VAR2->VAR16)
        VAR2->VAR18 = VAR19;
    else
        VAR2->VAR18 = VAR20;
    if (VAR2->VAR21 == 0)
    {
        VAR2->VAR21 = 1;
    }
    VAR5 = 0;
    while (FUN4(VAR4) != 0)
        VAR5++;
    FUN5(VAR4, "");
    if (VAR2->VAR22 == 0)
    {
        FUN3(VAR2->VAR14, VAR15, "");
        for (VAR2->VAR22 = 1; VAR2->VAR22 < 16; VAR2->VAR22++)
        {
            if (FUN6(VAR4, VAR2->VAR22 + 1) & 1)
                break;
        }
        FUN3(VAR2->VAR14, VAR15, "", VAR2->VAR22);
    }
    if (VAR23)
        VAR6 = FUN4(VAR4);
    else
        VAR6 = FUN2(VAR4, VAR2->VAR22);
    if (VAR2->VAR7 != VAR9)
    {
        VAR2->VAR24 = VAR2->VAR25;
        VAR2->VAR25 += VAR5;
        VAR2->VAR26 = VAR2->VAR25 * VAR2->VAR21 + VAR6;
        if (VAR2->VAR27 & VAR28)
        {
            if (VAR2->VAR26 < VAR2->VAR29)
            {
                VAR2->VAR25++;
                VAR2->VAR26 += VAR2->VAR21;
            }
        }
        VAR2->VAR30 = VAR2->VAR26 - VAR2->VAR29;
        VAR2->VAR29 = VAR2->VAR26;
    }
    else
    {
        VAR2->VAR26 = (VAR2->VAR24 + VAR5) * VAR2->VAR21 + VAR6;
        VAR2->VAR31 = VAR2->VAR30 - (VAR2->VAR29 - VAR2->VAR26);
        if (VAR2->VAR30 <= VAR2->VAR31 || VAR2->VAR30 <= VAR2->VAR30 - VAR2->VAR31 || VAR2->VAR30 <= 0)
        {
            return VAR32;
        }
        if (VAR2->VAR33 == 0)
            VAR2->VAR33 = VAR2->VAR26 - VAR2->VAR24;
        if (VAR2->VAR33 == 0)
            VAR2->VAR33 = 1;
        VAR2->VAR34 = (FUN7(VAR2->VAR29, VAR2->VAR33) - FUN7(VAR2->VAR29 - VAR2->VAR30, VAR2->VAR33)) * 2;
        VAR2->VAR35 = (FUN7(VAR2->VAR26, VAR2->VAR33) - FUN7(VAR2->VAR29 - VAR2->VAR30, VAR2->VAR33)) * 2;
    }
    VAR2->VAR36->VAR37 = VAR2->VAR26 * 1000LL * 1000LL / VAR2->VAR21;
    if (VAR2->VAR14->VAR38 & VAR39)
        FUN3(VAR2->VAR14, VAR40, "", VAR2->VAR36->VAR37 / (1000.0 * 1000.0));
    FUN5(VAR4, "");
    if (FUN4(VAR4) != 1)
    {
        FUN3(VAR2->VAR14, VAR15, "");
        return VAR32;
    }
    if (VAR2->VAR41 != VAR42 && (VAR2->VAR7 == VAR43 || (VAR2->VAR7 == VAR44 && VAR2->VAR45 == VAR46)))
    {
        VAR2->VAR47 = FUN4(VAR4);
    }
    else
    {
        VAR2->VAR47 = 0;
    }
    if (VAR2->VAR41 != VAR48)
    {
        if (VAR2->VAR45 != 1 || VAR2->VAR7 != VAR8)
        {
            int VAR49, VAR50, VAR51, VAR52;
            VAR49 = FUN2(VAR4, 13);
            FUN8(VAR4);
            VAR50 = FUN2(VAR4, 13);
            FUN8(VAR4);
            VAR51 = FUN2(VAR4, 13);
            FUN8(VAR4);
            VAR52 = FUN2(VAR4, 13);
        }
        FUN8(VAR4);
        if (FUN4(VAR4) != 0)
        {
            FUN9(VAR4, 8);
        }
    }
    if (VAR2->VAR41 != VAR42)
    {
        VAR2->VAR53 = VAR54[FUN2(VAR4, 3)];
        if (!VAR2->VAR55)
        {
            VAR2->VAR56 = FUN4(VAR4);
            VAR2->VAR57 = FUN4(VAR4);
        }
        else
            VAR2->VAR57 = 0;
    }
    if (VAR2->VAR57)
    {
        FUN10(VAR2->VAR58.VAR59, &VAR2->VAR60, VAR61);
        FUN10(VAR2->VAR58.VAR59, &VAR2->VAR62, VAR61);
        FUN10(VAR2->VAR58.VAR59, &VAR2->VAR63, VAR61);
        FUN10(VAR2->VAR58.VAR59, &VAR2->VAR64, VAR61);
    }
    else
    {
        FUN10(VAR2->VAR58.VAR59, &VAR2->VAR60, VAR65);
        FUN10(VAR2->VAR58.VAR59, &VAR2->VAR62, VAR65);
        FUN10(VAR2->VAR58.VAR59, &VAR2->VAR63, VAR66);
        FUN10(VAR2->VAR58.VAR59, &VAR2->VAR64, VAR61);
    }
    if (VAR2->VAR7 == VAR44 && (VAR2->VAR45 == VAR67 || VAR2->VAR45 == VAR46))
    {
        FUN11(VAR2);
        if (VAR2->VAR68)
            FUN3(VAR2->VAR14, VAR15, "");
        if (VAR2->VAR45 == VAR67)
            FUN3(VAR2->VAR14, VAR15, "");
    }
    if (VAR2->VAR41 != VAR42)
    {
        VAR2->VAR69 = VAR2->VAR70 = FUN2(VAR4, VAR2->VAR71);
        if (VAR2->VAR70 == 0)
        {
            FUN3(VAR2->VAR14, VAR15, "");
            return -1;
        }
        if (VAR2->VAR7 != VAR8)
        {
            VAR2->VAR72 = FUN2(VAR4, 3);
            if (VAR2->VAR72 == 0)
            {
                FUN3(VAR2->VAR14, VAR15, "");
                return -1;
            }
        }
        else
            VAR2->VAR72 = 1;
        if (VAR2->VAR7 == VAR9)
        {
            VAR2->VAR73 = FUN2(VAR4, 3);
        }
        else
            VAR2->VAR73 = 1;
        if (VAR2->VAR14->VAR38 & VAR74)
        {
            FUN3(VAR2->VAR14, VAR40, "", VAR2->VAR70, VAR2->VAR72, VAR2->VAR73, VAR2->VAR7 == VAR8 ? "" : (VAR2->VAR7 == VAR43 ? "" : (VAR2->VAR7 == VAR9 ? "" : "")), VAR4->VAR75, VAR2->VAR55, VAR2->VAR57, VAR2->VAR56, VAR2->VAR76 ? "" : "", VAR2->VAR17, VAR2->VAR77, VAR2->VAR78, VAR2->VAR79, 1 - VAR2->VAR47, VAR2->VAR80, VAR2->VAR11 ? "" : "", VAR2->VAR53);
        }
        if (!VAR2->VAR81)
        {
            if (VAR2->VAR41 != VAR48 && VAR2->VAR7 != VAR8)
            {
                FUN8(VAR4);
            }
        }
        else
        {
            if (VAR2->VAR82)
            {
                int VAR83 = FUN4(VAR4);
                if (VAR83)
                {
                    FUN3(VAR2->VAR14, VAR15, "");
                }
            }
            FUN9(VAR4, 2);
        }
    }
    if (VAR2->VAR80 == 0 && VAR2->VAR11 == 0 && VAR2->VAR84 == 0 && VAR2->VAR85 == 0)
    {
        FUN3(VAR2->VAR14, VAR15, "");
        VAR2->VAR10 = 1;
    }
    VAR2->VAR85++;
    VAR2->VAR86 = VAR87;
    VAR2->VAR88 = VAR89;
    if (VAR2->VAR27 & VAR90)
    {
        VAR2->VAR91 = VAR2->VAR49;
        VAR2->VAR92 = VAR2->VAR50;
    }
    return 0;
}