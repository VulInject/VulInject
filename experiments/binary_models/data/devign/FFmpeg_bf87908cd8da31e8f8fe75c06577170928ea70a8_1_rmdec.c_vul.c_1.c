static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    unsigned int VAR10;
    int VAR11;
    unsigned int VAR12, VAR13;
    unsigned int VAR14 = 0, VAR15 = 0;
    char VAR16[128], VAR17[128];
    int VAR18 = 0;
    VAR10 = FUN2(VAR9);
    if (VAR10 == FUN3('', '', '', 0xfd))
    {
        return FUN4(VAR2);
    }
    else if (VAR10 != FUN3('', '', '', ''))
    {
        return FUN5(VAR19);
    }
    VAR11 = FUN6(VAR9);
    FUN7(VAR9, VAR11 - 8);
    for (;;)
    {
        if (FUN8(VAR9))
            return -1;
        VAR10 = FUN2(VAR9);
        VAR11 = FUN6(VAR9);
        FUN9(VAR9);
        FUN10(VAR2, "", (VAR10)&0xff, (VAR10 >> 8) & 0xff, (VAR10 >> 16) & 0xff, (VAR10 >> 24) & 0xff, VAR10, VAR11);
        if (VAR11 < 10 && VAR10 != FUN3('', '', '', ''))
            return -1;
        switch (VAR10)
        {
        case FUN3('', '', '', ''):
            FUN6(VAR9);
            FUN6(VAR9);
            FUN6(VAR9);
            FUN6(VAR9);
            FUN6(VAR9);
            VAR13 = FUN6(VAR9);
            VAR2->VAR13 = FUN11(VAR13, VAR20, 1000);
            FUN6(VAR9);
            VAR15 = FUN6(VAR9);
            VAR14 = FUN6(VAR9);
            FUN9(VAR9);
            VAR18 = FUN9(VAR9);
            break;
        case FUN3('', '', '', ''):
            FUN12(VAR2, 1);
            break;
        case FUN3('', '', '', ''):
            VAR7 = FUN13(VAR2, NULL);
            if (!VAR7)
                return FUN5(VAR21);
            VAR7->VAR22 = FUN9(VAR9);
            FUN6(VAR9);
            VAR7->VAR23->VAR24 = FUN6(VAR9);
            FUN6(VAR9);
            FUN6(VAR9);
            VAR12 = FUN6(VAR9);
            FUN6(VAR9);
            VAR13 = FUN6(VAR9);
            VAR7->VAR12 = VAR12;
            VAR7->VAR13 = VAR13;
            if (VAR13 > 0)
                VAR2->VAR13 = VAR25;
            FUN14(VAR9, VAR16, sizeof(VAR16));
            FUN14(VAR9, VAR17, sizeof(VAR17));
            VAR7->VAR23->VAR26 = VAR27;
            VAR7->VAR5 = FUN15();
            if (FUN16(VAR2, VAR2->VAR9, VAR7, VAR7->VAR5, FUN6(VAR9), VAR17) < 0)
                return -1;
            break;
        case FUN3('', '', '', ''):
            goto VAR28;
        default:
            FUN7(VAR9, VAR11 - 10);
            break;
        }
    }
VAR28:
    VAR4->VAR29 = FUN6(VAR9);
    if (!VAR4->VAR29 && (VAR18 & 4))
        VAR4->VAR29 = 3600 * 25;
    FUN6(VAR9);
    if (!VAR14)
        VAR14 = FUN17(VAR9) - 18;
    if (VAR15 && VAR9->VAR30 && !(VAR2->VAR18 & VAR31) && FUN18(VAR9, VAR15, VAR32) >= 0)
    {
        FUN19(VAR2);
        FUN18(VAR9, VAR14 + 18, VAR32);
    }
    return 0;
}