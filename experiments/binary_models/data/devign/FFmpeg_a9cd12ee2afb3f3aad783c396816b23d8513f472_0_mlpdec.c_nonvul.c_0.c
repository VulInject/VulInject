static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, unsigned int VAR7)
{
    VAR8 *VAR9 = &VAR2->VAR10[VAR7];
    unsigned int VAR11;
    int VAR12, VAR13;
    uint8_t VAR14;
    uint8_t VAR15;
    int VAR16 = FUN2(VAR4);
    const int VAR17 = VAR2->VAR18->VAR19 == VAR20 ? VAR21 : VAR22;
    int VAR23, VAR24, VAR25;
    VAR12 = FUN3(VAR4, 13);
    if (VAR12 != 0x31ea >> 1)
    {
        FUN4(VAR2->VAR18, VAR26, "", VAR12);
        return VAR27;
    }
    VAR9->VAR28 = FUN5(VAR4);
    if (VAR2->VAR18->VAR19 == VAR20 && VAR9->VAR28)
    {
        FUN4(VAR2->VAR18, VAR26, "");
        return VAR27;
    }
    FUN6(VAR4, 16);
    VAR24 = FUN3(VAR4, 4);
    VAR23 = FUN3(VAR4, 4);
    VAR25 = FUN3(VAR4, 4);
    if (VAR25 > VAR17)
    {
        FUN4(VAR2->VAR18, VAR26, "", VAR17);
        return VAR27;
    }
    if (VAR23 != VAR25)
    {
        FUN4(VAR2->VAR18, VAR26, "");
        return VAR27;
    }
    if (VAR23 > VAR21 && !VAR9->VAR28)
    {
        FUN7(VAR2->VAR18, ""
                                        "",
                              VAR23 + 2);
        return VAR29;
    }
    if (VAR24 > VAR23)
    {
        FUN4(VAR2->VAR18, VAR26, "");
        return VAR27;
    }
    VAR9->VAR24 = VAR24;
    VAR9->VAR23 = VAR23;
    VAR9->VAR17 = VAR25;
    if (VAR2->VAR18->VAR30 > 0 && VAR9->VAR23 + 1 >= VAR2->VAR18->VAR30 && VAR7 < VAR2->VAR31)
    {
        FUN4(VAR2->VAR18, VAR32, ""
                                       "",
               VAR9->VAR23 + 1, VAR7);
        VAR2->VAR31 = VAR7;
    }
    VAR9->VAR33 = FUN3(VAR4, 4);
    VAR9->VAR34 = FUN3(VAR4, 23);
    FUN6(VAR4, 19);
    VAR9->VAR35 = FUN5(VAR4);
    VAR15 = FUN3(VAR4, 8);
    if (VAR7 == VAR2->VAR31 && VAR9->VAR36 != 0xffffffff)
    {
        VAR13 = FUN8(VAR9->VAR36);
        if (VAR13 != VAR15)
            FUN4(VAR2->VAR18, VAR37, "", VAR15, VAR13);
    }
    FUN6(VAR4, 16);
    memset(VAR9->VAR38, 0, sizeof(VAR9->VAR38));
    for (VAR11 = 0; VAR11 <= VAR9->VAR17; VAR11++)
    {
        int VAR38 = FUN3(VAR4, 6);
        if (VAR38 > VAR9->VAR17)
        {
            FUN7(VAR2->VAR18, "", VAR11, VAR38);
            return VAR29;
        }
        VAR9->VAR38[VAR38] = VAR11;
    }
    if (VAR2->VAR18->VAR19 == VAR20 && VAR2->VAR39)
    {
        if (VAR2->VAR18->VAR40 == (VAR41 | VAR42) || VAR2->VAR18->VAR40 == VAR43)
        {
            int VAR44 = VAR9->VAR38[4];
            VAR9->VAR38[4] = VAR9->VAR38[3];
            VAR9->VAR38[3] = VAR9->VAR38[2];
            VAR9->VAR38[2] = VAR44;
        }
        else if (VAR2->VAR18->VAR40 == VAR45)
        {
            FUN9(int, VAR9->VAR38[2], VAR9->VAR38[4]);
            FUN9(int, VAR9->VAR38[3], VAR9->VAR38[5]);
        }
    }
    if (VAR2->VAR18->VAR19 == VAR46 && (VAR2->VAR18->VAR40 == VAR47 || VAR2->VAR18->VAR40 == VAR48))
    {
        FUN9(int, VAR9->VAR38[4], VAR9->VAR38[6]);
        FUN9(int, VAR9->VAR38[5], VAR9->VAR38[7]);
    }
    else if (VAR2->VAR18->VAR19 == VAR46 && (VAR2->VAR18->VAR40 == VAR49 || VAR2->VAR18->VAR40 == (VAR49 | VAR50) || VAR2->VAR18->VAR40 == (VAR49 | VAR51)))
    {
        int VAR44 = VAR9->VAR38[6];
        VAR9->VAR38[6] = VAR9->VAR38[5];
        VAR9->VAR38[5] = VAR9->VAR38[4];
        VAR9->VAR38[4] = VAR44;
    }
    VAR14 = FUN10(VAR6, FUN2(VAR4) - VAR16);
    if (VAR14 != FUN3(VAR4, 8))
        FUN4(VAR2->VAR18, VAR26, "");
    VAR9->VAR52 = 0xff;
    VAR9->VAR53 = 0;
    VAR9->VAR54 = 8;
    VAR9->VAR36 = 0;
    memset(VAR9->VAR55, 0, sizeof(VAR9->VAR55));
    memset(VAR9->VAR56, 0, sizeof(VAR9->VAR56));
    for (VAR11 = VAR9->VAR24; VAR11 <= VAR9->VAR23; VAR11++)
    {
        VAR57 *VAR58 = &VAR9->VAR59[VAR11];
        VAR58->VAR60[VAR61].VAR62 = 0;
        VAR58->VAR60[VAR63].VAR62 = 0;
        VAR58->VAR60[VAR61].VAR64 = 0;
        VAR58->VAR60[VAR63].VAR64 = 0;
        VAR58->VAR65 = 0;
        VAR58->VAR66 = (-1) << 23;
        VAR58->VAR67 = 0;
        VAR58->VAR68 = 24;
    }
    if (VAR7 == VAR2->VAR31)
        VAR2->VAR18->VAR69 = VAR9->VAR17 + 1;
    return 0;
}