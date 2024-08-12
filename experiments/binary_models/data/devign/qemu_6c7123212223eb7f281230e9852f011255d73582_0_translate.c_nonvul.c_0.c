static inline void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    DisasContext VAR6, *VAR7 = &VAR6;
    VAR8 **VAR9, *VAR10;
    target_ulong VAR11;
    VAR12 *VAR13;
    VAR14 *VAR15;
    int VAR16, VAR17 = -1;
    int VAR18;
    int VAR19;
    VAR11 = VAR4->VAR20;
    VAR13 = VAR21 + VAR22;
    VAR6.VAR23 = VAR11;
    VAR6.VAR4 = VAR4;
    VAR6.VAR24 = VAR25;
    VAR6.VAR26 = VAR2->VAR26;
    VAR6.VAR27 = VAR2->VAR28;
    VAR6.VAR29 = -1;
    VAR6.VAR30 = VAR2->VAR31 & (1 << VAR32) ? 1 : 0;
    VAR6.VAR33 = VAR34;
    VAR6.VAR35 = VAR36;
    if ((VAR2->VAR37 & VAR38) && VAR39)
        VAR6.VAR40 = VAR39;
    else
        VAR6.VAR40 = 0;
    if ((VAR2->VAR37 & VAR41) && VAR42)
        VAR6.VAR43 = VAR42;
    else
        VAR6.VAR43 = 0;
    if ((VAR2->VAR37 & VAR44) && VAR45)
        VAR6.VAR46 = VAR47;
    else
        VAR6.VAR46 = 0;
    if ((VAR2->VAR37 & VAR48) && VAR49)
        VAR6.VAR46 |= VAR50;
    if (FUN2(VAR2->VAR46))
        VAR6.VAR46 |= VAR51;
    VAR45 = 1;
    VAR18 = 0;
    VAR19 = VAR4->VAR52 & VAR53;
    if (VAR19 == 0)
        VAR19 = VAR53;
    FUN3();
    while (VAR6.VAR24 == VAR25 && VAR54 < VAR13)
    {
        if (FUN2(!FUN4(&VAR2->VAR55)))
        {
            FUN5(VAR15, &VAR2->VAR55, VAR56)
            {
                if (VAR15->VAR20 == VAR6.VAR23)
                {
                    FUN6(VAR7);
                    break;
                }
            }
        }
        if (FUN2(VAR5))
        {
            VAR16 = VAR54 - VAR21;
            if (VAR17 < VAR16)
            {
                VAR17++;
                while (VAR17 < VAR16)
                    VAR57[VAR17++] = 0;
            }
            VAR58[VAR17] = VAR6.VAR23;
            VAR57[VAR17] = 1;
            VAR59[VAR17] = VAR18;
        }
        FUN7("");
        FUN7("" VAR60 "", VAR6.VAR23, VAR6.VAR27, (int)VAR61);
        if (VAR18 + 1 == VAR19 && (VAR4->VAR52 & VAR62))
            FUN8();
        if (FUN2(VAR6.VAR30))
        {
            VAR6.VAR63 = FUN9(FUN10(VAR6.VAR23));
        }
        else
        {
            VAR6.VAR63 = FUN10(VAR6.VAR23);
        }
        FUN7("", VAR6.VAR63, FUN11(VAR6.VAR63), FUN12(VAR6.VAR63), FUN13(VAR6.VAR63), VAR64 ? "" : "");
        if (FUN2(FUN14(VAR65)))
            FUN15(VAR6.VAR23);
        VAR6.VAR23 += 4;
        VAR9 = VAR2->VAR66;
        VAR18++;
        VAR10 = VAR9[FUN11(VAR6.VAR63)];
        if (FUN16(VAR10))
        {
            VAR9 = FUN17(VAR10);
            VAR10 = VAR9[FUN12(VAR6.VAR63)];
            if (FUN16(VAR10))
            {
                VAR9 = FUN17(VAR10);
                VAR10 = VAR9[FUN13(VAR6.VAR63)];
            }
        }
        if (FUN2(VAR10->VAR10 == &VAR67))
        {
            if (FUN18())
            {
                FUN19(""
                         "" VAR60 "",
                         FUN11(VAR6.VAR63), FUN12(VAR6.VAR63), FUN13(VAR6.VAR63), VAR6.VAR63, VAR6.VAR23 - 4, (int)VAR61);
            }
        }
        else
        {
            if (FUN2((VAR6.VAR63 & VAR10->VAR68) != 0))
            {
                if (FUN18())
                {
                    FUN19(""
                             "" VAR60 "",
                             VAR6.VAR63 & VAR10->VAR68, FUN11(VAR6.VAR63), FUN12(VAR6.VAR63), FUN13(VAR6.VAR63), VAR6.VAR63, VAR6.VAR23 - 4);
                }
                FUN20(VAR7, VAR69);
                break;
            }
        }
        (*(VAR10->VAR10))(&VAR6);
        VAR10->VAR70++;
        if (FUN2(VAR6.VAR46 & VAR47 && (VAR6.VAR23 <= 0x100 || VAR6.VAR23 > 0xF00) && VAR6.VAR24 != VAR71 && VAR6.VAR24 != VAR72 && VAR6.VAR24 != VAR73))
        {
            FUN21(VAR7, VAR74);
        }
        else if (FUN2(((VAR6.VAR23 & (VAR75 - 1)) == 0) || (VAR2->VAR46) || VAR76 || VAR18 >= VAR19))
        {
            break;
        }
    }
    if (VAR4->VAR52 & VAR62)
        FUN22();
    if (VAR6.VAR24 == VAR25)
    {
        FUN23(&VAR6, 0, VAR6.VAR23);
    }
    else if (VAR6.VAR24 != VAR73)
    {
        if (FUN2(VAR2->VAR46))
        {
            FUN6(VAR7);
        }
        FUN24(0);
    }
    FUN25(VAR4, VAR18);
    *VAR54 = VAR77;
    if (FUN2(VAR5))
    {
        VAR16 = VAR54 - VAR21;
        VAR17++;
        while (VAR17 <= VAR16)
            VAR57[VAR17++] = 0;
    }
    else
    {
        VAR4->VAR78 = VAR6.VAR23 - VAR11;
        VAR4->VAR79 = VAR18;
    }
    FUN26(VAR80, "", VAR6.VAR24);
    FUN27(VAR80, VAR2, 0);
    if (FUN14(VAR81))
    {
        int VAR37;
        VAR37 = VAR2->VAR82;
        VAR37 |= VAR6.VAR30 << 16;
        FUN19("", FUN28(VAR11));
        FUN29(VAR11, VAR6.VAR23 - VAR11, VAR37);
        FUN19("");
    }
}