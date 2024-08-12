static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int64_t VAR5, FUN2(VAR6);
    int64_t VAR7 = 0;
    int VAR8;
    unsigned int VAR9;
    VAR10 *VAR11 = VAR2->VAR11;
    VAR12 *VAR13;
    VAR14 *VAR15 = VAR2->VAR16;
    int VAR17, VAR18 = 0;
    int64_t VAR19, VAR20 = -1;
    VAR9 = FUN3(VAR11);
    VAR8 = VAR9 == FUN4('', '', '', '');
    if (!VAR8 && VAR9 != FUN4('', '', '', ''))
        return -1;
    FUN3(VAR11);
    VAR9 = FUN3(VAR11);
    if (VAR9 != FUN4('', '', '', ''))
        return -1;
    if (VAR8)
    {
        if (FUN3(VAR11) != FUN4('', '', '', ''))
            return -1;
        VAR5 = FUN3(VAR11);
        if (VAR5 < 24)
            return -1;
        FUN5(VAR11);
        VAR6 = FUN5(VAR11);
        VAR7 = FUN5(VAR11);
        if (VAR6 < 0 || VAR7 < 0)
        {
            FUN6(VAR2, VAR21, ""
                                    "" VAR22 "" VAR22 "",
                   VAR6, VAR7);
            return VAR23;
        }
        FUN7(VAR11, VAR5 - 24);
    }
    for (;;)
    {
        VAR5 = FUN8(VAR11, &VAR9);
        VAR19 = FUN9(VAR11) + VAR5;
        if (FUN10(VAR11))
            break;
        switch (VAR9)
        {
        case FUN4('', '', '', ''):
            if (!VAR18 && (VAR17 = FUN11(VAR2, VAR5, &VAR13) < 0))
            {
                return VAR17;
            }
            else if (VAR18)
                FUN6(VAR2, VAR24, "");
            VAR18 = 1;
            break;
        case FUN4('', '', '', ''):
            if (!VAR18)
            {
                FUN6(VAR2, VAR21, "");
                return VAR23;
            }
            if (VAR8)
            {
                VAR19 = VAR15->VAR25 = FUN9(VAR11) + VAR6;
            }
            else
            {
                VAR6 = VAR5;
                VAR19 = VAR15->VAR25 = VAR5 ? VAR19 : VAR26;
            }
            VAR20 = FUN9(VAR11);
            if (!VAR11->VAR27 || (!VAR8 && !VAR5))
                goto VAR28;
            break;
        case FUN4('', '', '', ''):
            if (!VAR7)
                VAR7 = FUN3(VAR11);
            break;
        case FUN4('', '', '', ''):
            if ((VAR17 = FUN12(VAR2, VAR5)) < 0)
                return VAR17;
            break;
        }
        if ((FUN13(VAR11) > 0 && VAR19 >= FUN13(VAR11)) || FUN14(VAR11, VAR19, VAR29) < 0)
        {
            break;
        }
    }
VAR28:
    if (VAR20 < 0)
    {
        FUN6(VAR2, VAR21, "");
        return VAR23;
    }
    FUN14(VAR11, VAR20, VAR29);
    if (!VAR7 && VAR13->VAR30->VAR31 && FUN15(VAR13->VAR30->VAR32))
        VAR7 = (VAR6 << 3) / (VAR13->VAR30->VAR31 * (VAR33)FUN15(VAR13->VAR30->VAR32));
    if (VAR7)
        VAR13->VAR34 = VAR7;
    FUN16(VAR2, NULL, VAR35);
    return 0;
}