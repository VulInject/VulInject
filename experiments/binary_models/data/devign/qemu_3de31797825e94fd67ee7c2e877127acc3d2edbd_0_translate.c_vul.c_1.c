static inline void FUN1(VAR1 *VAR2, VAR3 *VAR4, bool VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    VAR8 *VAR9 = &VAR2->VAR9;
    DisasContext VAR10, *VAR11 = &VAR10;
    VAR12 **VAR13, *VAR14;
    target_ulong VAR15;
    VAR16 *VAR17;
    VAR18 *VAR19;
    int VAR20, VAR21 = -1;
    int VAR22;
    int VAR23;
    VAR15 = VAR4->VAR24;
    VAR17 = VAR25.VAR26 + VAR27;
    VAR10.VAR28 = VAR15;
    VAR10.VAR4 = VAR4;
    VAR10.VAR29 = VAR30;
    VAR10.VAR31 = VAR9->VAR31;
    VAR10.VAR32 = VAR9->VAR33;
    VAR10.VAR34 = VAR9->VAR34;
    VAR10.VAR35 = VAR9->VAR35;
    VAR10.VAR36 = -1;
    VAR10.VAR37 = VAR9->VAR38 & (1 << VAR39) ? 1 : 0;
    VAR10.VAR40 = FUN3(VAR9, VAR9->VAR41);
    VAR10.VAR42 = !!(VAR9->VAR43 & VAR44);
    VAR10.VAR45 = VAR46;
    if ((VAR9->VAR43 & VAR47) && VAR48)
        VAR10.VAR49 = VAR48;
    else
        VAR10.VAR49 = 0;
    if ((VAR9->VAR43 & VAR50) && VAR51)
        VAR10.VAR52 = VAR51;
    else
        VAR10.VAR52 = 0;
    if ((VAR9->VAR43 & VAR53) && VAR54)
    {
        VAR10.VAR55 = VAR54;
    }
    else
    {
        VAR10.VAR55 = 0;
        if ((VAR9->VAR43 & VAR56) && VAR57)
            VAR10.VAR58 = VAR59;
        else
            VAR10.VAR58 = 0;
        if ((VAR9->VAR43 & VAR60) && VAR61)
            VAR10.VAR58 |= VAR62;
        if (FUN4(VAR7->VAR58))
        {
            VAR10.VAR58 |= VAR63;
            VAR57 = 1;
            VAR22 = 0;
            VAR23 = VAR4->VAR64 & VAR65;
            if (VAR23 == 0)
                VAR23 = VAR65;
            FUN5();
            FUN6();
            while (VAR10.VAR29 == VAR30 && VAR25.VAR66 < VAR17)
            {
                if (FUN4(!FUN7(&VAR7->VAR67)))
                {
                    FUN8(VAR19, &VAR7->VAR67, VAR68)
                    {
                        if (VAR19->VAR24 == VAR10.VAR28)
                        {
                            FUN9(VAR11);
                            break;
                            if (FUN4(VAR5))
                            {
                                VAR20 = VAR25.VAR66 - VAR25.VAR26;
                                if (VAR21 < VAR20)
                                {
                                    VAR21++;
                                    while (VAR21 < VAR20)
                                        VAR25.VAR69[VAR21++] = 0;
                                    VAR25.VAR70[VAR21] = VAR10.VAR28;
                                    VAR25.VAR69[VAR21] = 1;
                                    VAR25.VAR71[VAR21] = VAR22;
                                    FUN10("");
                                    FUN10("" VAR72 "", VAR10.VAR28, VAR10.VAR32, (int)VAR73);
                                    if (VAR22 + 1 == VAR23 && (VAR4->VAR64 & VAR74))
                                        FUN11();
                                    if (FUN4(VAR10.VAR37))
                                    {
                                        VAR10.VAR75 = FUN12(FUN13(VAR9, VAR10.VAR28));
                                    }
                                    else
                                    {
                                        VAR10.VAR75 = FUN13(VAR9, VAR10.VAR28);
                                        FUN10("", VAR10.VAR75, FUN14(VAR10.VAR75), FUN15(VAR10.VAR75), FUN16(VAR10.VAR75), VAR10.VAR37 ? "" : "");
                                        if (FUN4(FUN17(VAR76 | VAR77)))
                                        {
                                            FUN18(VAR10.VAR28);
                                            VAR10.VAR28 += 4;
                                            VAR13 = VAR9->VAR78;
                                            VAR22++;
                                            VAR14 = VAR13[FUN14(VAR10.VAR75)];
                                            if (FUN19(VAR14))
                                            {
                                                VAR13 = FUN20(VAR14);
                                                VAR14 = VAR13[FUN15(VAR10.VAR75)];
                                                if (FUN19(VAR14))
                                                {
                                                    VAR13 = FUN20(VAR14);
                                                    VAR14 = VAR13[FUN16(VAR10.VAR75)];
                                                    if (FUN4(VAR14->VAR14 == &VAR79))
                                                    {
                                                        if (FUN21())
                                                        {
                                                            FUN22(""
                                                                     "" VAR72 "",
                                                                     FUN14(VAR10.VAR75), FUN15(VAR10.VAR75), FUN16(VAR10.VAR75), VAR10.VAR75, VAR10.VAR28 - 4, (int)VAR73);
                                                        }
                                                        else
                                                        {
                                                            uint32_t VAR80;
                                                            if (FUN4(VAR14->VAR81 & (VAR82 | VAR83 | VAR84) && FUN23(VAR10.VAR75)))
                                                            {
                                                                VAR80 = VAR14->VAR85;
                                                            }
                                                            else
                                                            {
                                                                VAR80 = VAR14->VAR86;
                                                                if (FUN4((VAR10.VAR75 & VAR80) != 0))
                                                                {
                                                                    if (FUN21())
                                                                    {
                                                                        FUN22(""
                                                                                 "" VAR72 "",
                                                                                 VAR10.VAR75 & VAR80, FUN14(VAR10.VAR75), FUN15(VAR10.VAR75), FUN16(VAR10.VAR75), VAR10.VAR75, VAR10.VAR28 - 4);
                                                                        FUN24(VAR11, VAR87);
                                                                        break;
                                                                        (*(VAR14->VAR14))(&VAR10);
                                                                        VAR14->VAR88++;
                                                                        if (FUN4(VAR10.VAR58 & VAR59 && (VAR10.VAR28 <= 0x100 || VAR10.VAR28 > 0xF00) && VAR10.VAR29 != VAR89 && VAR10.VAR29 != VAR90 && VAR10.VAR29 != VAR91))
                                                                        {
                                                                            FUN25(VAR11, VAR92);
                                                                        }
                                                                        else if (FUN4(((VAR10.VAR28 & (VAR93 - 1)) == 0) || (VAR7->VAR58) || VAR94 || VAR22 >= VAR23))
                                                                        {
                                                                            break;
                                                                            if (VAR4->VAR64 & VAR74)
                                                                                FUN26();
                                                                            if (VAR10.VAR29 == VAR30)
                                                                            {
                                                                                FUN27(&VAR10, 0, VAR10.VAR28);
                                                                            }
                                                                            else if (VAR10.VAR29 != VAR91)
                                                                            {
                                                                                if (FUN4(VAR7->VAR58))
                                                                                {
                                                                                    FUN9(VAR11);
                                                                                    FUN28(0);
                                                                                    FUN29(VAR4, VAR22);
                                                                                    *VAR25.VAR66 = VAR95;
                                                                                    if (FUN4(VAR5))
                                                                                    {
                                                                                        VAR20 = VAR25.VAR66 - VAR25.VAR26;
                                                                                        VAR21++;
                                                                                        while (VAR21 <= VAR20)
                                                                                            VAR25.VAR69[VAR21++] = 0;
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        VAR4->VAR96 = VAR10.VAR28 - VAR15;
                                                                                        VAR4->VAR97 = VAR22;
                                                                                        if (FUN17(VAR98))
                                                                                        {
                                                                                            int VAR43;
                                                                                            VAR43 = VAR9->VAR99;
                                                                                            VAR43 |= VAR10.VAR37 << 16;
                                                                                            FUN22("", FUN30(VAR15));
                                                                                            FUN31(VAR9, VAR15, VAR10.VAR28 - VAR15, VAR43);
                                                                                            FUN22("");