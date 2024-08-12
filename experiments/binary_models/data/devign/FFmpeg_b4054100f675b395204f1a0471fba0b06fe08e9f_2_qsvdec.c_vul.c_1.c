static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int *VAR7, VAR8 *VAR9)
{
    VAR10 *VAR11;
    VAR12 *VAR13;
    VAR12 *VAR14;
    VAR15 *VAR16;
    mfxBitstream VAR17 = {{{0}}};
    int VAR18;
    int VAR19;
    int VAR20 = 0;
    int VAR21 = !VAR9->VAR22 || VAR4->VAR23;
    if (!VAR4->VAR24)
    {
        VAR18 = FUN2(VAR2, VAR4, VAR9);
        if (VAR18)
            return VAR18;
    }
    if (!VAR21)
    {
        if (FUN3(VAR4->VAR25))
        {
            if (FUN4(VAR4->VAR25) < VAR9->VAR22)
            {
                VAR18 = FUN5(VAR4->VAR25, VAR9->VAR22);
                if (VAR18 < 0)
                    return VAR18;
            }
            FUN6(VAR4->VAR25, VAR9->VAR26, VAR9->VAR22, NULL);
            VAR17.VAR27 = VAR4->VAR25->VAR28;
            VAR17.VAR29 = FUN3(VAR4->VAR25);
            VAR20 = 1;
        }
        else
        {
            VAR17.VAR27 = VAR9->VAR26;
            VAR17.VAR29 = VAR9->VAR22;
        }
        VAR17.VAR30 = VAR17.VAR29;
        VAR17.VAR31 = VAR9->VAR32;
    }
    VAR16 = FUN7(sizeof(*VAR16));
    if (!VAR16)
    {
        FUN8(&VAR16);
        return FUN9(VAR33);
    }
    while (1)
    {
        VAR18 = FUN10(VAR2, VAR4, &VAR13);
        if (VAR18 < 0)
            return VAR18;
        do
        {
            VAR18 = FUN11(VAR4->VAR34, VAR21 ? NULL : &VAR17, VAR13, &VAR14, VAR16);
            if (VAR18 != VAR35)
                break;
            FUN12(500);
        } while (1);
        if (VAR36 == VAR18)
        {
        }
        else if (VAR37 == VAR18)
        {
            FUN13(VAR4->VAR25);
            VAR21 = VAR4->VAR23 = 1;
            continue;
        }
        if (*VAR16)
        {
            VAR10 *VAR11 = FUN14(VAR4, VAR14);
            if (!VAR11)
            {
                FUN8(&VAR16);
                FUN15(VAR2, VAR38, "");
                return VAR39;
            }
            VAR11->VAR40 = 1;
            FUN6(VAR4->VAR41, &VAR11, sizeof(VAR11), NULL);
            FUN6(VAR4->VAR41, &VAR16, sizeof(VAR16), NULL);
            continue;
        }
        else
        {
            FUN8(&VAR16);
        }
        if (VAR42 != VAR18 && VAR18 < 0)
            break;
    }
    if (!*VAR16 && !VAR17.VAR43 && !VAR21)
    {
        FUN15(VAR2, VAR44, "");
        VAR17.VAR43 = VAR9->VAR22;
    }
    if (VAR20)
    {
        FUN16(VAR4->VAR25, VAR17.VAR43);
    }
    else if (VAR17.VAR43 != VAR9->VAR22)
    {
        FUN6(VAR4->VAR25, VAR9->VAR26 + VAR17.VAR43, VAR9->VAR22 - VAR17.VAR43, NULL);
    }
    if (VAR45 != VAR18 && VAR18 < 0)
    {
        FUN8(&VAR16);
        FUN15(VAR2, VAR38, "", VAR18);
        return FUN17(VAR18);
    }
    VAR19 = FUN3(VAR4->VAR41) / (sizeof(VAR11) + sizeof(VAR16));
    if (VAR19 > VAR4->VAR46 || (VAR21 && VAR19))
    {
        VAR5 *VAR47;
        FUN18(VAR4->VAR41, &VAR11, sizeof(VAR11), NULL);
        FUN18(VAR4->VAR41, &VAR16, sizeof(VAR16), NULL);
        VAR11->VAR40 = 0;
        do
        {
            VAR18 = FUN19(VAR4->VAR34, *VAR16, 1000);
        } while (VAR18 == VAR48);
        FUN8(&VAR16);
        VAR47 = VAR11->VAR6;
        VAR18 = FUN20(VAR6, VAR47);
        if (VAR18 < 0)
            return VAR18;
        VAR14 = VAR11->VAR49;
        VAR6->VAR50 = VAR6->VAR32 = VAR14->VAR27.VAR31;
        VAR6->VAR51 = VAR14->VAR52.VAR53 & VAR54 ? 4 : VAR14->VAR52.VAR53 & VAR55 ? 2
                                                                                      : VAR14->VAR52.VAR53 & VAR56   ? 1
                                                                                                                                                 : 0;
        VAR6->VAR57 = VAR14->VAR52.VAR53 & VAR58;
        VAR6->VAR59 = !(VAR14->VAR52.VAR53 & VAR60);
        *VAR7 = 1;
    }
    return VAR9->VAR22;
}