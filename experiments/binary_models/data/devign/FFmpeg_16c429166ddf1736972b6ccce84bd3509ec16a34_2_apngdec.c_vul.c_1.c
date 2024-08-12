static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR7;
    uint32_t VAR8, VAR9;
    VAR10 *VAR11;
    int VAR12 = 0;
    int64_t VAR13 = VAR14;
    if (FUN2(VAR7) != VAR15)
        return VAR13;
    VAR8 = FUN3(VAR7);
    VAR9 = FUN4(VAR7);
    if (VAR8 != 13 || VAR9 != FUN5('', '', '', ''))
        return VAR13;
    VAR11 = FUN6(VAR2, NULL);
    if (!VAR11)
        return FUN7(VAR16);
    FUN8(VAR11, 64, 1, 100000);
    VAR11->VAR17->VAR18 = VAR19;
    VAR11->VAR17->VAR20 = VAR21;
    VAR11->VAR17->VAR22 = FUN3(VAR7);
    VAR11->VAR17->VAR23 = FUN3(VAR7);
    if ((VAR13 = FUN9(VAR11->VAR17->VAR22, VAR11->VAR17->VAR23, 0, VAR2)) < 0)
        return VAR13;
    VAR4->VAR24 = FUN10(VAR8 + 12 + VAR25);
    if (!VAR4->VAR24)
        return FUN7(VAR16);
    VAR4->VAR26 = VAR8 + 12;
    FUN11(VAR4->VAR24, VAR8);
    FUN12(VAR4->VAR24 + 4, VAR9);
    FUN11(VAR4->VAR24 + 8, VAR11->VAR17->VAR22);
    FUN11(VAR4->VAR24 + 12, VAR11->VAR17->VAR23);
    if ((VAR13 = FUN13(VAR7, VAR4->VAR24 + 16, 9)) < 0)
        goto VAR27;
    while (!FUN14(VAR7))
    {
        if (VAR12 && VAR4->VAR28 != 1)
        {
            int64_t VAR29 = FUN15(VAR7);
            int64_t VAR30 = FUN16(VAR7);
            if (VAR29 < 0)
            {
                VAR13 = VAR29;
                goto VAR27;
            }
            else if (VAR30 < 0)
            {
                VAR13 = VAR30;
                goto VAR27;
            }
            else if ((VAR13 = FUN17(VAR7, VAR29 - VAR30)) < 0)
            {
                FUN18(VAR2, VAR31, "");
                VAR4->VAR28 = 1;
            }
        }
        if ((VAR4->VAR28 == 1 || !VAR12) && ((VAR13 = FUN17(VAR7, 4 + 4)) < 0))
            goto VAR27;
        VAR8 = FUN3(VAR7);
        if (VAR8 > 0x7fffffff)
        {
            VAR13 = VAR14;
            goto VAR27;
        }
        VAR9 = FUN4(VAR7);
        switch (VAR9)
        {
        case FUN5('', '', '', ''):
            if ((VAR13 = FUN19(VAR7, -8, VAR32)) < 0 || (VAR13 = FUN20(VAR4, VAR7, VAR8 + 12)) < 0)
                goto VAR27;
            VAR12 = 1;
            VAR4->VAR33 = FUN21(VAR4->VAR24 + VAR13 + 8);
            VAR4->VAR28 = FUN21(VAR4->VAR24 + VAR13 + 12);
            FUN18(VAR2, VAR34, "" VAR35 "" VAR35 "", VAR4->VAR33, VAR4->VAR28);
            break;
        case FUN5('', '', '', ''):
            if (!VAR12)
            {
                VAR13 = VAR14;
                goto VAR27;
            }
            if ((VAR13 = FUN19(VAR7, -8, VAR32)) < 0)
                goto VAR27;
            return 0;
        default:
            if ((VAR13 = FUN19(VAR7, -8, VAR32)) < 0 || (VAR13 = FUN20(VAR4, VAR7, VAR8 + 12)) < 0)
                goto VAR27;
        }
    }
VAR27:
    if (VAR4->VAR26)
    {
        FUN22(&VAR4->VAR24);
        VAR4->VAR26 = 0;
    }
    return VAR13;
}