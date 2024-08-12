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
    VAR5 = 0;
    while (FUN4(VAR4) != 0)
        VAR5++;
    FUN5(VAR4, "");
    if (VAR2->VAR21 == 0 || !(FUN6(VAR4, VAR2->VAR21 + 1) & 1))
    {
        FUN3(VAR2->VAR14, VAR15, "");
        for (VAR2->VAR21 = 1; VAR2->VAR21 < 16; VAR2->VAR21++)
        {
            if (VAR2->VAR7 == VAR22 || (VAR2->VAR7 == VAR23 && VAR2->VAR24 == VAR25))
            {
                if ((FUN6(VAR4, VAR2->VAR21 + 6) & 0x37) == 0x30)
                    break;
            }
            else if ((FUN6(VAR4, VAR2->VAR21 + 5) & 0x1F) == 0x18)
                break;
        }
        FUN3(VAR2->VAR14, VAR15, "", VAR2->VAR21);
    }
    if (VAR26)
        VAR6 = FUN4(VAR4);
    else
        VAR6 = FUN2(VAR4, VAR2->VAR21);
    if (VAR2->VAR7 != VAR9)
    {
        VAR2->VAR27 = VAR2->VAR28;
        VAR2->VAR28 += VAR5;
        VAR2->VAR29 = VAR2->VAR28 * VAR2->VAR14->VAR28.VAR30 + VAR6;
        if (VAR2->VAR31 & VAR32)
        {
            if (VAR2->VAR29 < VAR2->VAR33)
            {
                VAR2->VAR28++;
                VAR2->VAR29 += VAR2->VAR14->VAR28.VAR30;
            }
        }
        VAR2->VAR34 = VAR2->VAR29 - VAR2->VAR33;
        VAR2->VAR33 = VAR2->VAR29;
    }
    else
    {
        VAR2->VAR29 = (VAR2->VAR27 + VAR5) * VAR2->VAR14->VAR28.VAR30 + VAR6;
        VAR2->VAR35 = VAR2->VAR34 - (VAR2->VAR33 - VAR2->VAR29);
        if (VAR2->VAR34 <= VAR2->VAR35 || VAR2->VAR34 <= VAR2->VAR34 - VAR2->VAR35 || VAR2->VAR34 <= 0)
        {
            return VAR36;
        }
        FUN7(VAR2);
        if (VAR2->VAR37 == 0)
            VAR2->VAR37 = VAR2->VAR35;
        if (VAR2->VAR37 == 0)
            VAR2->VAR37 = 1;
        VAR2->VAR38 = (FUN8(VAR2->VAR33, VAR2->VAR37) - FUN8(VAR2->VAR33 - VAR2->VAR34, VAR2->VAR37)) * 2;
        VAR2->VAR39 = (FUN8(VAR2->VAR29, VAR2->VAR37) - FUN8(VAR2->VAR33 - VAR2->VAR34, VAR2->VAR37)) * 2;
        if (!VAR2->VAR40)
        {
            if (VAR2->VAR38 <= VAR2->VAR39 || VAR2->VAR39 <= 1)
                return VAR36;
        }
    }
    if (VAR2->VAR14->VAR28.VAR41)
        VAR2->VAR42->VAR43.VAR44 = (VAR2->VAR29 + VAR2->VAR14->VAR28.VAR41 / 2) / VAR2->VAR14->VAR28.VAR41;
    else
        VAR2->VAR42->VAR43.VAR44 = VAR45;
    if (VAR2->VAR14->VAR46 & VAR47)
        FUN3(VAR2->VAR14, VAR48, "" VAR49 "", VAR2->VAR42->VAR43.VAR44);
    FUN5(VAR4, "");
    if (FUN4(VAR4) != 1)
    {
        if (VAR2->VAR14->VAR46 & VAR50)
            FUN3(VAR2->VAR14, VAR15, "");
        return VAR36;
    }
    if (VAR2->VAR51 != VAR52 && (VAR2->VAR7 == VAR22 || (VAR2->VAR7 == VAR23 && VAR2->VAR24 == VAR25)))
    {
        VAR2->VAR53 = FUN4(VAR4);
    }
    else
    {
        VAR2->VAR53 = 0;
    }
    if (VAR2->VAR51 != VAR54)
    {
        if (VAR2->VAR24 != 1 || VAR2->VAR7 != VAR8)
        {
            FUN9(VAR4, 13);
            FUN10(VAR4);
            FUN9(VAR4, 13);
            FUN10(VAR4);
            FUN9(VAR4, 13);
            FUN10(VAR4);
            FUN9(VAR4, 13);
        }
        FUN10(VAR4);
        if (FUN4(VAR4) != 0)
        {
            FUN9(VAR4, 8);
        }
    }
    if (VAR2->VAR51 != VAR52)
    {
        FUN11(VAR4, VAR2->VAR55);
        if (VAR2->VAR7 != VAR8)
            FUN11(VAR4, VAR2->VAR56);
        if (VAR2->VAR7 == VAR9)
            FUN11(VAR4, VAR2->VAR57);
        VAR2->VAR58 = VAR59[FUN2(VAR4, 3)];
        if (!VAR2->VAR40)
        {
            VAR2->VAR60 = FUN4(VAR4);
            VAR2->VAR61 = FUN4(VAR4);
        }
        else
            VAR2->VAR61 = 0;
    }
    if (VAR2->VAR61)
    {
        FUN12(VAR2->VAR62.VAR63, &VAR2->VAR64, VAR65);
        FUN12(VAR2->VAR62.VAR63, &VAR2->VAR66, VAR65);
        FUN12(VAR2->VAR62.VAR63, &VAR2->VAR67, VAR65);
        FUN12(VAR2->VAR62.VAR63, &VAR2->VAR68, VAR65);
    }
    else
    {
        FUN12(VAR2->VAR62.VAR63, &VAR2->VAR64, VAR69);
        FUN12(VAR2->VAR62.VAR63, &VAR2->VAR66, VAR69);
        FUN12(VAR2->VAR62.VAR63, &VAR2->VAR67, VAR70);
        FUN12(VAR2->VAR62.VAR63, &VAR2->VAR68, VAR65);
    }
    if (VAR2->VAR7 == VAR23 && (VAR2->VAR24 == VAR71 || VAR2->VAR24 == VAR25))
    {
        FUN13(VAR2, VAR4);
        if (VAR2->VAR72)
            FUN3(VAR2->VAR14, VAR15, "");
        if (VAR2->VAR24 == VAR71)
            FUN3(VAR2->VAR14, VAR15, "");
    }
    if (VAR2->VAR51 != VAR52)
    {
        VAR2->VAR73 = VAR2->VAR74 = FUN2(VAR4, VAR2->VAR75);
        if (VAR2->VAR74 == 0)
        {
            FUN3(VAR2->VAR14, VAR15, "");
            return -1;
        }
        if (VAR2->VAR7 != VAR8)
        {
            VAR2->VAR76 = FUN2(VAR4, 3);
            if (VAR2->VAR76 == 0)
            {
                FUN3(VAR2->VAR14, VAR15, "");
                return -1;
            }
        }
        else
            VAR2->VAR76 = 1;
        if (VAR2->VAR7 == VAR9)
        {
            VAR2->VAR77 = FUN2(VAR4, 3);
        }
        else
            VAR2->VAR77 = 1;
        if (VAR2->VAR14->VAR46 & VAR50)
        {
            FUN3(VAR2->VAR14, VAR48, "", VAR2->VAR74, VAR2->VAR76, VAR2->VAR77, VAR2->VAR7 == VAR8 ? "" : (VAR2->VAR7 == VAR22 ? "" : (VAR2->VAR7 == VAR9 ? "" : "")), VAR4->VAR78, VAR2->VAR40, VAR2->VAR61, VAR2->VAR60, VAR2->VAR79 ? "" : "", VAR2->VAR17, VAR2->VAR80, VAR2->VAR81, VAR2->VAR82, 1 - VAR2->VAR53, VAR2->VAR83, VAR2->VAR11 ? "" : "", VAR2->VAR58, VAR2->VAR55, VAR2->VAR56, VAR2->VAR57);
        }
        if (!VAR2->VAR84)
        {
            if (VAR2->VAR51 != VAR54 && VAR2->VAR7 != VAR8)
            {
                FUN10(VAR4);
            }
        }
        else
        {
            if (VAR2->VAR85)
            {
                int VAR86 = FUN4(VAR4);
                if (VAR86)
                {
                    FUN3(VAR2->VAR14, VAR15, "");
                }
            }
            FUN9(VAR4, 2);
        }
    }
    if (VAR2->VAR83 == 0 && VAR2->VAR11 == 0 && VAR2->VAR87 == -1 && VAR2->VAR88 == 0)
    {
        FUN3(VAR2->VAR14, VAR89, "");
        VAR2->VAR10 = 1;
    }
    VAR2->VAR88++;
    VAR2->VAR90 = VAR91;
    VAR2->VAR92 = VAR93;
    if (VAR2->VAR31 & VAR94)
    {
        VAR2->VAR95 = VAR2->VAR96;
        VAR2->VAR97 = VAR2->VAR98;
    }
    return 0;
}