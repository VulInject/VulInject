static void FUN1(VAR1 *VAR2, TCGType VAR3, TCGCond VAR4, TCGArg VAR5, TCGArg VAR6, TCGArg VAR7, int VAR8)
{
    int VAR9, VAR10;
    FUN2(VAR11 == 64 || VAR3 == VAR12);
    if (VAR3 == VAR12)
    {
        VAR7 = (VAR13)VAR7;
    }
    if (VAR7 == 0)
    {
        switch (VAR4)
        {
        case VAR14:
            FUN3(VAR2, VAR3, VAR5, VAR6);
            return;
        case VAR15:
            if (VAR11 == 64 && VAR3 == VAR12)
            {
                FUN4(VAR2, VAR16, VAR6);
                VAR6 = VAR16;
            }
            FUN5(VAR2, VAR5, VAR6);
            return;
        case VAR17:
            FUN6(VAR2, VAR18 | FUN7(VAR6, VAR5, VAR6));
            VAR6 = VAR5;
        case VAR19:
            if (VAR3 == VAR12)
            {
                FUN8(VAR2, VAR5, VAR6, 31);
            }
            else
            {
                FUN9(VAR2, VAR5, VAR6, 63);
            }
            return;
        default:
            break;
        }
    }
    if (VAR20)
    {
        int VAR21, VAR22;
        FUN10(VAR2, VAR4, VAR6, VAR7, VAR8, 7, VAR3);
        VAR21 = VAR23[VAR4];
        FUN11(VAR2, VAR3, VAR5, 1);
        if (VAR21 & 1)
        {
            VAR22 = FUN12(VAR5, 0, VAR5);
            VAR21 &= ~1;
        }
        else
        {
            FUN11(VAR2, VAR3, VAR16, 0);
            VAR22 = FUN12(VAR5, VAR5, VAR16);
        }
        FUN6(VAR2, VAR21 | VAR22);
        return;
    }
    switch (VAR4)
    {
    case VAR14:
        VAR6 = FUN13(VAR2, VAR6, VAR7, VAR8);
        FUN3(VAR2, VAR3, VAR5, VAR6);
        return;
    case VAR15:
        VAR6 = FUN13(VAR2, VAR6, VAR7, VAR8);
        if (VAR11 == 64 && VAR3 == VAR12)
        {
            FUN4(VAR2, VAR16, VAR6);
            VAR6 = VAR16;
        }
        FUN5(VAR2, VAR5, VAR6);
        return;
    case VAR24:
    case VAR25:
        VAR10 = 30;
        VAR9 = 0;
        goto VAR26;
    case VAR19:
    case VAR27:
        VAR10 = 29;
        VAR9 = 0;
        goto VAR26;
    case VAR17:
    case VAR28:
        VAR10 = 31;
        VAR9 = VAR29 | FUN14(7, VAR30) | FUN15(7, VAR31) | FUN16(7, VAR31);
        goto VAR26;
    case VAR32:
    case VAR33:
        VAR10 = 31;
        VAR9 = VAR29 | FUN14(7, VAR30) | FUN15(7, VAR34) | FUN16(7, VAR34);
    VAR26:
        FUN10(VAR2, VAR4, VAR6, VAR7, VAR8, 7, VAR3);
        if (VAR9)
        {
            FUN6(VAR2, VAR9);
        }
        FUN6(VAR2, VAR35 | FUN17(VAR16) | FUN18(7));
        FUN19(VAR2, VAR36, VAR5, VAR16, VAR10, 31, 31);
        break;
    default:
        FUN20();
    }
}