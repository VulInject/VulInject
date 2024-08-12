static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = &VAR6->VAR9;
    VAR10 *VAR11 = VAR9->VAR12;
    AVPacket VAR13;
    int VAR14, VAR15, VAR16;
    int VAR17;
    if (!VAR11->VAR18 && !VAR6->VAR19)
    {
        FUN2(VAR11);
        VAR17 = FUN3(VAR2, VAR11);
        if (VAR17 < 0 && VAR17 != VAR20)
            return VAR17;
    }
    if (VAR6->VAR21)
        return VAR20;
    if (!VAR11->VAR18 && !(VAR2->VAR22->VAR23 & VAR24 || VAR2->VAR25 & VAR26))
        return VAR20;
    VAR13 = *VAR11;
    FF_DISABLE_DEPRECATION_WARNINGS VAR16 = FUN4(&VAR13);
    if (VAR16)
    {
        VAR17 = FUN5(VAR2->VAR7, &VAR13);
        if (VAR17 < 0)
            return VAR17;
        VAR17 = FUN6(VAR2, &VAR13);
        if (VAR17 < 0)
            return VAR17;
    }
    FF_ENABLE_DEPRECATION_WARNINGS VAR14 = 0;
    if (VAR27 && VAR2->VAR25 & VAR26)
    {
        VAR17 = FUN7(VAR2, VAR4, &VAR14, &VAR13);
    }
    else
    {
        VAR17 = VAR2->VAR22->FUN8(VAR2, VAR4, &VAR14, &VAR13);
        if (!(VAR2->VAR22->VAR28 & VAR29))
            VAR4->VAR30 = VAR11->VAR31;
        if (VAR2->VAR22->VAR32 == VAR33)
        {
            if (!VAR2->VAR34)
                VAR4->VAR35 = VAR11->VAR36;
            if (!(VAR2->VAR22->VAR23 & VAR37))
            {
                if (!VAR4->VAR38.VAR39)
                    VAR4->VAR38 = VAR2->VAR38;
                if (!VAR4->VAR40)
                    VAR4->VAR40 = VAR2->VAR40;
                if (!VAR4->VAR41)
                    VAR4->VAR41 = VAR2->VAR41;
                if (VAR4->VAR42 == VAR43)
                    VAR4->VAR42 = VAR2->VAR44;
            }
        }
    }
    FUN9();
    VAR15 = VAR14;
    if (VAR2->VAR22->VAR32 == VAR33)
    {
        if (VAR4->VAR45 & VAR46)
            VAR14 = 0;
        if (VAR14)
            VAR4->VAR47 = FUN10(VAR2, VAR4->VAR48, VAR4->VAR30);
    }
    else if (VAR2->VAR22->VAR32 == VAR49)
    {
        VAR50 *VAR51;
        int VAR52;
        uint32_t VAR53 = 0;
        uint8_t VAR54 = 0;
        uint8_t VAR55 = 0;
        if (VAR17 >= 0 && VAR14)
        {
            VAR4->VAR47 = FUN10(VAR2, VAR4->VAR48, VAR4->VAR30);
            if (VAR4->VAR42 == VAR56)
                VAR4->VAR42 = VAR2->VAR57;
            if (!VAR4->VAR58)
                VAR4->VAR58 = VAR2->VAR58;
            if (!VAR4->VAR59)
                VAR4->VAR59 = VAR2->VAR59;
            if (!VAR4->VAR60)
                VAR4->VAR60 = VAR2->VAR60;
        }
        VAR51 = FUN11(VAR11, VAR61, &VAR52);
        if (VAR51 && VAR52 >= 10)
        {
            VAR2->VAR7->VAR62 = FUN12(VAR51) * VAR2->VAR7->VAR63;
            VAR53 = FUN12(VAR51 + 4);
            FUN13(VAR2, VAR64, "", VAR2->VAR7->VAR62, (int)VAR53);
            VAR54 = FUN14(VAR51 + 8);
            VAR55 = FUN14(VAR51 + 9);
        }
        if ((VAR4->VAR45 & VAR46) && VAR14 && !(VAR2->VAR65 & VAR66))
        {
            VAR2->VAR7->VAR62 = FUN15(0, VAR2->VAR7->VAR62 - VAR4->VAR67);
            VAR14 = 0;
        }
        if (VAR2->VAR7->VAR62 > 0 && VAR14 && !(VAR2->VAR65 & VAR66))
        {
            if (VAR4->VAR67 <= VAR2->VAR7->VAR62)
            {
                VAR14 = 0;
                VAR2->VAR7->VAR62 -= VAR4->VAR67;
                FUN13(VAR2, VAR64, "", VAR2->VAR7->VAR62);
            }
            else
            {
                FUN16(VAR4->VAR68, VAR4->VAR68, 0, VAR2->VAR7->VAR62, VAR4->VAR67 - VAR2->VAR7->VAR62, VAR2->VAR59, VAR4->VAR42);
                if (VAR2->VAR69.VAR39 && VAR2->VAR60)
                {
                    int64_t VAR70 = FUN17(VAR2->VAR7->VAR62, (VAR71){1, VAR2->VAR60}, VAR2->VAR69);
                    if (VAR4->VAR48 != VAR72)
                        VAR4->VAR48 += VAR70;
                    FF_DISABLE_DEPRECATION_WARNINGS if (VAR4->VAR73 != VAR72) VAR4->VAR73 += VAR70;
                    FF_ENABLE_DEPRECATION_WARNINGS if (VAR4->VAR30 != VAR72) VAR4->VAR30 += VAR70;
                    if (VAR4->VAR74 >= VAR70)
                        VAR4->VAR74 -= VAR70;
                }
                else
                {
                    FUN13(VAR2, VAR75, "");
                }
                FUN13(VAR2, VAR64, "", VAR2->VAR7->VAR62, VAR4->VAR67);
                VAR4->VAR67 -= VAR2->VAR7->VAR62;
                VAR2->VAR7->VAR62 = 0;
            }
        }
        if (VAR53 > 0 && VAR53 <= VAR4->VAR67 && VAR14 && !(VAR2->VAR65 & VAR66))
        {
            if (VAR53 == VAR4->VAR67)
            {
                VAR14 = 0;
            }
            else
            {
                if (VAR2->VAR69.VAR39 && VAR2->VAR60)
                {
                    int64_t VAR70 = FUN17(VAR4->VAR67 - VAR53, (VAR71){1, VAR2->VAR60}, VAR2->VAR69);
                    VAR4->VAR74 = VAR70;
                }
                else
                {
                    FUN13(VAR2, VAR75, "");
                }
                FUN13(VAR2, VAR64, "", (int)VAR53, VAR4->VAR67);
                VAR4->VAR67 -= VAR53;
            }
        }
        if ((VAR2->VAR65 & VAR66) && VAR14)
        {
            VAR76 *VAR77 = FUN18(VAR4, VAR78, 10);
            if (VAR77)
            {
                FUN19(VAR77->VAR18, VAR2->VAR7->VAR62);
                FUN19(VAR77->VAR18 + 4, VAR53);
                FUN20(VAR77->VAR18 + 8, VAR54);
                FUN20(VAR77->VAR18 + 9, VAR55);
                VAR2->VAR7->VAR62 = 0;
            }
        }
    }
    if (VAR16)
    {
        FUN21(&VAR13);
        if (VAR17 == VAR13.VAR79)
            VAR17 = VAR11->VAR79;
    }
    if (VAR2->VAR22->VAR32 == VAR49 && !VAR6->VAR80 && VAR17 >= 0 && VAR17 != VAR11->VAR79 && !(VAR2->VAR22->VAR23 & VAR81))
    {
        FUN13(VAR2, VAR75, "");
        VAR6->VAR80 = 1;
    }
    if (!VAR14)
        FUN22(VAR4);
    if (VAR17 >= 0 && VAR2->VAR22->VAR32 == VAR33 && !(VAR2->VAR45 & VAR82))
        VAR17 = VAR11->VAR79;
    if (VAR2->VAR83.VAR39 > 0 && VAR2->VAR83.VAR84 > 0)
        VAR2->VAR85 = FUN23(FUN24(VAR2->VAR83, (VAR71){VAR2->VAR86, 1}));
    if (VAR2->VAR7->VAR19 && !VAR15)
    {
        if (VAR17 < 0)
        {
            int VAR87 = 20 + (VAR27 && VAR2->VAR25 & VAR26 ? VAR2->VAR88 : 1);
            if (VAR6->VAR89++ >= VAR87)
            {
                FUN13(VAR2, VAR90, ""
                                            "");
                VAR6->VAR21 = 1;
                VAR17 = VAR91;
            }
        }
        else
        {
            VAR6->VAR21 = 1;
        }
    }
    VAR6->VAR92 += VAR17;
    if (VAR17 >= VAR11->VAR79 || VAR17 < 0)
    {
        FUN2(VAR11);
    }
    else
    {
        int VAR93 = VAR17;
        VAR11->VAR18 += VAR93;
        VAR11->VAR79 -= VAR93;
        VAR6->VAR94->VAR79 -= VAR93;
        VAR11->VAR48 = VAR72;
        VAR11->VAR31 = VAR72;
        VAR6->VAR94->VAR48 = VAR72;
        VAR6->VAR94->VAR31 = VAR72;
    }
    if (VAR14)
        FUN25(VAR4->VAR95[0]);
    return VAR17 < 0 ? VAR17 : 0;
}