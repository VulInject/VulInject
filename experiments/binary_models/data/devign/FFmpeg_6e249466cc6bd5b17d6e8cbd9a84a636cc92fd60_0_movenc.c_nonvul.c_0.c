int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    VAR10 *VAR11 = &VAR6->VAR12[VAR4->VAR13];
    VAR14 *VAR15 = VAR11->VAR15;
    unsigned int VAR16 = 0;
    int VAR17 = VAR4->VAR17, VAR18 = 0;
    VAR19 *VAR20 = NULL;
    if (VAR11->VAR21)
    {
        int64_t VAR22 = VAR4->VAR23 - VAR11->VAR24[VAR11->VAR21 - 1].VAR23;
        if (VAR22 < 0 || VAR22 > VAR25)
        {
            FUN2(VAR2, VAR26, "" VAR27 "" VAR27 "", VAR22, VAR4->VAR23);
            VAR4->VAR23 = VAR11->VAR24[VAR11->VAR21 - 1].VAR23 + 1;
            VAR4->VAR28 = VAR29;
        }
    }
    if (VAR4->VAR22 < 0 || VAR4->VAR22 > VAR25)
    {
        FUN2(VAR2, VAR26, "" VAR27 "", VAR4->VAR22);
        return FUN3(VAR30);
    }
    if (VAR6->VAR31 & VAR32)
    {
        int VAR18;
        if (VAR6->VAR33 || VAR6->VAR31 & VAR34)
        {
            if (VAR6->VAR35 && VAR6->VAR36 > 0)
            {
                if (VAR11->VAR21 - VAR11->VAR37 >= VAR6->VAR35)
                {
                    if ((VAR18 = FUN4(VAR2, VAR11)) < 0)
                        return VAR18;
                }
            }
            if (!VAR11->VAR38)
            {
                if ((VAR18 = FUN5(&VAR11->VAR38)) < 0)
                    return VAR18;
            }
            VAR9 = VAR11->VAR38;
        }
        else
        {
            if (!VAR6->VAR38)
            {
                if ((VAR18 = FUN5(&VAR6->VAR38)) < 0)
                    return VAR18;
            }
            VAR9 = VAR6->VAR38;
        }
    }
    if (VAR15->VAR39 == VAR40)
    {
        static const uint16_t VAR41[16] = {13, 14, 16, 18, 20, 21, 27, 32, 6, 0, 0, 0, 0, 0, 0, 1};
        int VAR42 = 0;
        while (VAR42 < VAR17 && VAR16 < 100)
        {
            VAR42 += VAR41[(VAR4->VAR43[VAR42] >> 3) & 0x0F];
            VAR16++;
        }
        if (VAR16 > 1)
        {
            FUN2(VAR2, VAR26, "");
            return -1;
        }
    }
    else if (VAR15->VAR39 == VAR44 || VAR15->VAR39 == VAR45)
    {
        VAR16 = VAR15->VAR46;
    }
    else if (VAR11->VAR47)
        VAR16 = VAR17 / VAR11->VAR47;
    else
        VAR16 = 1;
    if (VAR11->VAR48 == 0 && VAR15->VAR49 > 0 && !FUN6(VAR11->VAR50) && (VAR15->VAR39 != VAR51))
    {
        VAR11->VAR48 = VAR15->VAR49;
        VAR11->VAR52 = FUN7(VAR11->VAR48);
        if (!VAR11->VAR52)
        {
            VAR18 = FUN3(VAR53);
            goto VAR54;
        }
        memcpy(VAR11->VAR52, VAR15->VAR55, VAR11->VAR48);
    }
    if (VAR15->VAR39 == VAR56 && VAR4->VAR17 > 2 && (FUN8(VAR4->VAR43) & 0xfff0) == 0xfff0)
    {
        if (!VAR2->VAR57[VAR4->VAR13]->VAR58)
        {
            FUN2(VAR2, VAR26, ""
                                    ""
                                    "");
            return -1;
        }
        FUN2(VAR2, VAR59, "");
    }
    if (VAR15->VAR39 == VAR60 && VAR11->VAR48 > 0 && *(VAR19 *)VAR11->VAR52 != 1 && !FUN6(VAR11->VAR50))
    {
        if (VAR11->VAR61 >= 0 && VAR11->VAR61 < VAR6->VAR62)
        {
            FUN9(VAR4->VAR43, &VAR20, &VAR17);
            FUN10(VAR9, VAR20, VAR17);
        }
        else
        {
            if (VAR6->VAR63 == VAR64)
            {
                VAR17 = FUN11(&VAR11->VAR65, VAR9, VAR4->VAR43, VAR17);
                if (VAR17 < 0)
                {
                    VAR18 = VAR17;
                    goto VAR54;
                }
            }
            else
            {
                VAR17 = FUN12(VAR9, VAR4->VAR43, VAR4->VAR17);
            }
        }
    }
    else if (VAR15->VAR39 == VAR66 && VAR11->VAR48 > 6 && (FUN13(VAR11->VAR52) == 1 || FUN14(VAR11->VAR52) == 1))
    {
        if (VAR11->VAR61 >= 0 && VAR11->VAR61 < VAR6->VAR62)
        {
            FUN15(VAR4->VAR43, &VAR20, &VAR17, 0, NULL);
            FUN10(VAR9, VAR20, VAR17);
        }
        else
        {
            VAR17 = FUN16(VAR9, VAR4->VAR43, VAR4->VAR17, 0, NULL);
        }
    }
    else if (VAR15->VAR39 == VAR67)
    {
        VAR17 = FUN17(VAR6, VAR4, VAR11);
        if (VAR17 < 0)
            return VAR17;
        else if (!VAR17)
            goto VAR68;
        FUN10(VAR9, VAR4->VAR43, VAR17);
    }
    else
    {
        if (VAR6->VAR63 == VAR64)
        {
            if (VAR15->VAR39 == VAR60 && VAR15->VAR49 > 4)
            {
                int VAR69 = (VAR15->VAR55[4] & 0x3) + 1;
                VAR18 = FUN18(VAR2, &VAR11->VAR65, VAR69, VAR9, VAR4->VAR43, VAR17);
            }
            else
            {
                VAR18 = FUN19(&VAR11->VAR65, VAR9, VAR4->VAR43, VAR17);
            }
            if (VAR18)
            {
                goto VAR54;
            }
        }
        else
        {
            FUN10(VAR9, VAR4->VAR43, VAR17);
        }
    }
    if ((VAR15->VAR39 == VAR51 || VAR15->VAR39 == VAR70) && !VAR11->VAR48)
    {
        VAR11->VAR48 = VAR17;
        VAR11->VAR52 = FUN7(VAR17);
        if (!VAR11->VAR52)
        {
            VAR18 = FUN3(VAR53);
            goto VAR54;
        }
        memcpy(VAR11->VAR52, VAR4->VAR43, VAR17);
    }
    if (VAR11->VAR21 >= VAR11->VAR71)
    {
        unsigned VAR72 = 2 * (VAR11->VAR21 + VAR73);
        if (FUN20(&VAR11->VAR24, VAR72, sizeof(*VAR11->VAR24)))
        {
            VAR18 = FUN3(VAR53);
            goto VAR54;
        }
        VAR11->VAR71 = VAR72;
    }
    VAR11->VAR24[VAR11->VAR21].VAR74 = FUN21(VAR9) - VAR17;
    VAR11->VAR24[VAR11->VAR21].VAR16 = VAR16;
    VAR11->VAR24[VAR11->VAR21].VAR75 = 0;
    VAR11->VAR24[VAR11->VAR21].VAR17 = VAR17;
    VAR11->VAR24[VAR11->VAR21].VAR76 = VAR16;
    VAR11->VAR24[VAR11->VAR21].VAR23 = VAR4->VAR23;
    if (!VAR11->VAR21 && VAR11->VAR77 != VAR29)
    {
        if (!VAR11->VAR78)
        {
            VAR11->VAR24[VAR11->VAR21].VAR23 = VAR11->VAR77 + VAR11->VAR79;
            if ((VAR6->VAR31 & VAR80 && !(VAR6->VAR31 & VAR81)) || VAR6->VAR82 == VAR83)
                VAR4->VAR28 = VAR4->VAR23 + VAR11->VAR84 - VAR11->VAR24[VAR11->VAR21].VAR23;
        }
        else
        {
            VAR11->VAR85 = VAR4->VAR23 - VAR11->VAR77;
            VAR11->VAR84 = VAR29;
            VAR11->VAR78 = 0;
        }
    }
    if (!VAR11->VAR21 && VAR11->VAR77 == VAR29 && !VAR6->VAR86 && VAR2->VAR87 == VAR88)
    {
        VAR11->VAR24[VAR11->VAR21].VAR23 = VAR11->VAR77 = 0;
    }
    if (VAR11->VAR77 == VAR29)
    {
        VAR11->VAR77 = VAR4->VAR23;
        if (VAR11->VAR78)
        {
            if (VAR6->VAR86)
            {
                VAR11->VAR85 = VAR4->VAR28;
                VAR11->VAR77 = VAR4->VAR23 - VAR4->VAR28;
            }
            else
            {
                VAR11->VAR85 = VAR4->VAR23;
                VAR11->VAR77 = 0;
            }
            VAR11->VAR78 = 0;
        }
        else if (VAR4->VAR23 && VAR6->VAR33)
            FUN2(VAR2, VAR59, "" VAR27 ""
                                      ""
                                      "",
                   VAR4->VAR13, VAR4->VAR23);
    }
    VAR11->VAR79 = VAR4->VAR23 - VAR11->VAR77 + VAR4->VAR22;
    VAR11->VAR89 = 0;
    if (VAR4->VAR28 == VAR29)
    {
        FUN2(VAR2, VAR59, "");
        VAR4->VAR28 = VAR4->VAR23;
    }
    if (VAR4->VAR23 != VAR4->VAR28)
        VAR11->VAR31 |= VAR90;
    VAR11->VAR24[VAR11->VAR21].VAR91 = VAR4->VAR28 - VAR4->VAR23;
    VAR11->VAR24[VAR11->VAR21].VAR31 = 0;
    if (VAR11->VAR92 == VAR29)
        VAR11->VAR92 = VAR4->VAR28 - VAR4->VAR23;
    if (VAR11->VAR84 == VAR29)
        VAR11->VAR84 = VAR11->VAR24[VAR11->VAR21].VAR23 + VAR11->VAR24[VAR11->VAR21].VAR91 + VAR4->VAR22;
    else
        VAR11->VAR84 = FUN22(VAR11->VAR84, VAR11->VAR24[VAR11->VAR21].VAR23 + VAR11->VAR24[VAR11->VAR21].VAR91 + VAR4->VAR22);
    if (VAR15->VAR39 == VAR93)
    {
        FUN23(VAR4, VAR11);
    }
    else if (VAR4->VAR31 & VAR94)
    {
        if (VAR6->VAR82 == VAR95 && VAR15->VAR39 == VAR96 && VAR11->VAR21 > 0)
        {
            FUN24(VAR4, &VAR11->VAR24[VAR11->VAR21].VAR31);
            if (VAR11->VAR24[VAR11->VAR21].VAR31 & VAR97)
                VAR11->VAR31 |= VAR98;
        }
        else
        {
            VAR11->VAR24[VAR11->VAR21].VAR31 = VAR99;
        }
        if (VAR11->VAR24[VAR11->VAR21].VAR31 & VAR99)
            VAR11->VAR100++;
    }
    VAR11->VAR21++;
    VAR11->VAR101 += VAR16;
    VAR6->VAR102 += VAR17;
    if (VAR11->VAR61 >= 0 && VAR11->VAR61 < VAR6->VAR62)
        FUN25(VAR2, VAR4, VAR11->VAR61, VAR11->VAR21, VAR20, VAR17);
VAR68:
VAR54:
    FUN26(VAR20);
    return VAR18;
}