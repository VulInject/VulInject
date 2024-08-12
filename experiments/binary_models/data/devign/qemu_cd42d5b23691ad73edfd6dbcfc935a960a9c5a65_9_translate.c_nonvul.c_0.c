FUN1(VAR1 *VAR2, VAR3 *VAR4, bool VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    VAR8 *VAR9 = &VAR2->VAR9;
    DisasContext VAR10, *VAR11 = &VAR10;
    VAR12 *VAR13;
    VAR14 *VAR15;
    int VAR16, VAR17;
    target_ulong VAR18;
    int VAR19;
    int VAR20;
    int VAR21;
    VAR18 = VAR4->VAR22;
    VAR11->VAR4 = VAR4;
    VAR13 = VAR23.VAR24 + VAR25;
    VAR11->VAR9 = VAR9;
    VAR11->VAR26 = VAR27;
    VAR11->VAR22 = VAR18;
    VAR11->VAR28 = VAR29;
    VAR11->VAR30 = VAR7->VAR30;
    VAR11->VAR31 = VAR9->VAR31;
    VAR11->VAR32 = (VAR9->VAR33 & VAR34) == 0;
    VAR11->VAR35 = 0;
    VAR11->VAR36 = 0;
    VAR17 = -1;
    VAR20 = 0;
    VAR21 = VAR4->VAR37 & VAR38;
    if (VAR21 == 0)
        VAR21 = VAR38;
    FUN3(VAR4);
    do
    {
        VAR19 = VAR11->VAR22 - VAR18;
        VAR39 = NULL;
        if (FUN4(!FUN5(&VAR7->VAR40)))
        {
            FUN6(VAR15, &VAR7->VAR40, VAR41)
            {
                if (VAR15->VAR22 == VAR11->VAR22)
                {
                    FUN7(VAR11, VAR11->VAR22, VAR42);
                    VAR11->VAR26 = VAR43;
                    break;
                }
            }
            if (VAR11->VAR26)
                break;
        }
        if (VAR5)
        {
            VAR16 = VAR23.VAR44 - VAR23.VAR24;
            if (VAR17 < VAR16)
            {
                VAR17++;
                while (VAR17 < VAR16)
                    VAR23.VAR45[VAR17++] = 0;
            }
            VAR23.VAR46[VAR17] = VAR11->VAR22;
            VAR23.VAR45[VAR17] = 1;
            VAR23.VAR47[VAR17] = VAR20;
        }
        if (VAR20 + 1 == VAR21 && (VAR4->VAR37 & VAR48))
            FUN8();
        VAR11->VAR49 = VAR11->VAR22;
        FUN9(VAR9, VAR11);
        VAR20++;
    } while (!VAR11->VAR26 && VAR23.VAR44 < VAR13 && !VAR7->VAR30 && !VAR50 && (VAR19) < (VAR51 - 32) && VAR20 < VAR21);
    if (VAR4->VAR37 & VAR48)
        FUN10();
    if (FUN4(VAR7->VAR30))
    {
        if (!VAR11->VAR26)
        {
            FUN11(VAR11);
            FUN12(VAR52, VAR11->VAR22);
        }
        FUN13(VAR53, FUN14(VAR42));
    }
    else
    {
        switch (VAR11->VAR26)
        {
        case VAR27:
            FUN11(VAR11);
            FUN15(VAR11, 0, VAR11->VAR22);
            break;
        default:
        case VAR43:
        case VAR54:
            FUN11(VAR11);
            FUN16(0);
            break;
        case VAR55:
            break;
        }
    }
    FUN17(VAR4, VAR20);
    *VAR23.VAR44 = VAR56;
    if (FUN18(VAR57))
    {
        FUN19("");
        FUN19("", FUN20(VAR18));
        FUN21(VAR9, VAR18, VAR11->VAR22 - VAR18, 0);
        FUN19("");
    }
    if (VAR5)
    {
        VAR16 = VAR23.VAR44 - VAR23.VAR24;
        VAR17++;
        while (VAR17 <= VAR16)
            VAR23.VAR45[VAR17++] = 0;
    }
    else
    {
        VAR4->VAR58 = VAR11->VAR22 - VAR18;
        VAR4->VAR59 = VAR20;
    }
}