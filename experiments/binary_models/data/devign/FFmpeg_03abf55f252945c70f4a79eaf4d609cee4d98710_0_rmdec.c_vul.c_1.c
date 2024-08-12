int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, unsigned int VAR9, const VAR10 *VAR11)
{
    unsigned int VAR12;
    int VAR13;
    int64_t VAR14;
    int VAR15;
    if (VAR9 > VAR16)
        return VAR17;
    FUN2(VAR6, 64, 1, 1000);
    VAR14 = FUN3(VAR4);
    VAR12 = FUN4(VAR4);
    if (VAR12 == FUN5('', '', '', ''))
    {
        int VAR18 = FUN6(VAR4);
        int VAR19;
        int VAR20;
        for (VAR20 = 0; VAR20 < VAR18; VAR20++)
            FUN6(VAR4);
        VAR19 = FUN6(VAR4);
        if (VAR19 != 1)
        {
            FUN7(VAR2, "");
        }
        FUN4(VAR4);
        VAR12 = FUN4(VAR4);
    }
    if (VAR12 == FUN8(0xfd, '', '', ''))
    {
        if (FUN9(VAR2, VAR4, VAR6, VAR8, 0))
            return -1;
    }
    else if (VAR12 == FUN5('', '', '', ''))
    {
        FUN10(VAR4, -4, VAR21);
        if ((VAR15 = FUN11(VAR4, VAR6->VAR22, VAR9)) < 0)
            return VAR15;
        VAR6->VAR22->VAR23 = VAR24;
        VAR6->VAR22->VAR25 = FUN12(VAR6->VAR22->VAR26);
        VAR6->VAR22->VAR27 = FUN13(VAR28, VAR6->VAR22->VAR25);
    }
    else if (VAR11 && !strcmp(VAR11, ""))
    {
        int VAR29, VAR30, VAR31, VAR20;
        FUN14(VAR2, VAR6);
        if (FUN6(VAR4) != 0)
        {
            FUN15(VAR2, VAR32, "");
            goto VAR33;
        }
        VAR29 = FUN6(VAR4);
        FUN16(VAR4, 6 * VAR29);
        VAR30 = FUN6(VAR4);
        FUN16(VAR4, 2 * VAR30);
        VAR31 = FUN6(VAR4);
        for (VAR20 = 0; VAR20 < VAR31; VAR20++)
        {
            uint8_t VAR34[128], VAR35[128];
            FUN4(VAR4);
            if (FUN6(VAR4) != 0)
            {
                FUN15(VAR2, VAR32, "");
                goto VAR33;
            }
            FUN17(VAR4, VAR34, sizeof(VAR34));
            switch (FUN4(VAR4))
            {
            case 2:
                FUN18(VAR4, VAR35, sizeof(VAR35), FUN6(VAR4));
                FUN19(&VAR2->VAR36, VAR34, VAR35, 0);
                break;
            default:
                FUN16(VAR4, FUN6(VAR4));
            }
        }
    }
    else
    {
        int VAR37;
        if (FUN20(VAR4) != FUN8('', '', '', ''))
        {
        VAR38:
            FUN15(VAR2, VAR32, "", VAR12);
            goto VAR33;
        }
        VAR6->VAR22->VAR25 = FUN20(VAR4);
        VAR6->VAR22->VAR27 = FUN13(VAR28, VAR6->VAR22->VAR25);
        FUN21(VAR2, "", VAR6->VAR22->VAR25, FUN8('', '', '', ''));
        if (VAR6->VAR22->VAR27 == VAR39)
            goto VAR38;
        VAR6->VAR22->VAR40 = FUN6(VAR4);
        VAR6->VAR22->VAR41 = FUN6(VAR4);
        FUN16(VAR4, 2);
        FUN16(VAR4, 4);
        VAR6->VAR22->VAR23 = VAR42;
        VAR6->VAR43 = VAR44;
        VAR37 = FUN4(VAR4);
        if ((VAR15 = FUN11(VAR4, VAR6->VAR22, VAR9 - (FUN3(VAR4) - VAR14))) < 0)
            return VAR15;
        if (VAR37 > 0)
        {
            FUN22(&VAR6->VAR45.VAR46, &VAR6->VAR45.VAR47, 0x10000, VAR37, (1 << 30) - 1);
            VAR6->VAR48 = VAR6->VAR45;
        }
        else if (VAR2->VAR49 & VAR50)
        {
            FUN15(VAR2, VAR51, "");
            return VAR17;
        }
    }
VAR33:
    VAR13 = FUN3(VAR4) - VAR14;
    FUN16(VAR4, VAR9 - VAR13);
    return 0;
}