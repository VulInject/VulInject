static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, unsigned int VAR7)
{
    VAR8 *VAR9 = &VAR2->VAR10[VAR7];
    unsigned int VAR11;
    int VAR12, VAR13;
    uint8_t VAR14;
    uint8_t VAR15;
    int VAR16 = FUN2(VAR4);
    int VAR17, VAR18, VAR19;
    const int VAR20 = VAR2->VAR21->VAR22 == VAR23 ? VAR24 : VAR25;
    VAR12 = FUN3(VAR4, 13);
    if (VAR12 != 0x31ea >> 1)
    {
        FUN4(VAR2->VAR21, VAR26, "", VAR12);
        return VAR27;
    }
    VAR9->VAR28 = FUN5(VAR4);
    if (VAR2->VAR21->VAR22 == VAR23 && VAR9->VAR28)
    {
        FUN4(VAR2->VAR21, VAR26, "");
        return VAR27;
    }
    FUN6(VAR4, 16);
    VAR17 = FUN3(VAR4, 4);
    VAR18 = FUN3(VAR4, 4);
    VAR19 = FUN3(VAR4, 4);
    if (VAR19 > VAR20)
    {
        FUN4(VAR2->VAR21, VAR26, "", VAR19);
        return VAR27;
    }
    if (VAR18 != VAR19)
    {
        FUN4(VAR2->VAR21, VAR26, "");
        return VAR27;
    }
    if (VAR9->VAR18 > VAR24 && !VAR9->VAR28)
    {
        FUN7(VAR2->VAR21, ""
                                        "",
                              VAR9->VAR18 + 2);
        return VAR29;
    }
    if (VAR17 > VAR18)
    {
        FUN4(VAR2->VAR21, VAR26, "");
        return VAR27;
    }
    VAR9->VAR17 = VAR17;
    VAR9->VAR18 = VAR18;
    VAR9->VAR19 = VAR19;
    if (FUN8(VAR2->VAR21->VAR30, VAR9->VAR31) && VAR2->VAR32 > VAR7)
    {
        FUN4(VAR2->VAR21, VAR33, "" VAR34 ""
                                       "",
               VAR9->VAR18 + 1, VAR9->VAR31, VAR7);
        VAR2->VAR32 = VAR7;
    }
    VAR9->VAR35 = FUN3(VAR4, 4);
    VAR9->VAR36 = FUN3(VAR4, 23);
    FUN6(VAR4, 19);
    VAR9->VAR37 = FUN5(VAR4);
    VAR15 = FUN3(VAR4, 8);
    if (VAR7 == VAR2->VAR32 && VAR9->VAR38 != 0xffffffff)
    {
        VAR13 = FUN9(VAR9->VAR38);
        if (VAR13 != VAR15)
            FUN4(VAR2->VAR21, VAR39, "", VAR15, VAR13);
    }
    FUN6(VAR4, 16);
    memset(VAR9->VAR40, 0, sizeof(VAR9->VAR40));
    for (VAR11 = 0; VAR11 <= VAR9->VAR19; VAR11++)
    {
        int VAR40 = FUN3(VAR4, 6);
        if (VAR2->VAR21->VAR22 == VAR41)
        {
            uint64_t VAR42 = FUN10(VAR9->VAR31, VAR40);
            VAR40 = FUN11(VAR9->VAR31, VAR42);
        }
        if (VAR40 < 0 || VAR40 > VAR9->VAR19)
        {
            FUN7(VAR2->VAR21, "", VAR11, VAR40);
            return VAR29;
        }
        VAR9->VAR40[VAR40] = VAR11;
    }
    VAR14 = FUN12(VAR6, FUN2(VAR4) - VAR16);
    if (VAR14 != FUN3(VAR4, 8))
        FUN4(VAR2->VAR21, VAR26, "");
    VAR9->VAR43 = 0xff;
    VAR9->VAR44 = 0;
    VAR9->VAR45 = 8;
    VAR9->VAR38 = 0;
    memset(VAR9->VAR46, 0, sizeof(VAR9->VAR46));
    memset(VAR9->VAR47, 0, sizeof(VAR9->VAR47));
    for (VAR11 = VAR9->VAR17; VAR11 <= VAR9->VAR18; VAR11++)
    {
        VAR48 *VAR49 = &VAR9->VAR50[VAR11];
        VAR49->VAR51[VAR52].VAR53 = 0;
        VAR49->VAR51[VAR54].VAR53 = 0;
        VAR49->VAR51[VAR52].VAR55 = 0;
        VAR49->VAR51[VAR54].VAR55 = 0;
        VAR49->VAR56 = 0;
        VAR49->VAR57 = -(1 << 23);
        VAR49->VAR58 = 0;
        VAR49->VAR59 = 24;
    }
    if (VAR7 == VAR2->VAR32)
    {
        VAR2->VAR21->VAR60 = VAR9->VAR19 + 1;
        VAR2->VAR21->VAR61 = VAR9->VAR31;
        VAR2->VAR62.VAR63 = VAR2->VAR62.FUN13(VAR9->VAR40, VAR9->VAR46, VAR9->VAR19, VAR2->VAR21->VAR64 == VAR65);
    }
    return 0;
}