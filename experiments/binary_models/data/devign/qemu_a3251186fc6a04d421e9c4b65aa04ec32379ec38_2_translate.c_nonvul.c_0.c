static VAR1 FUN1(VAR2 *VAR3, int VAR4, TCGv VAR5)
{
    int VAR6, VAR7, VAR8, VAR9;
    CCPrepare VAR10;
    TCGv VAR11;
    VAR6 = VAR4 & 1;
    VAR7 = (VAR4 >> 1) & 7;
    switch (VAR3->VAR12)
    {
    case VAR13 ... VAR14:
        VAR8 = VAR3->VAR12 - VAR13;
        switch (VAR7)
        {
        case VAR15:
            FUN2(VAR16, VAR17);
            FUN3(VAR8, VAR16);
            VAR11 = FUN4(VAR18, VAR19, VAR8, false);
            VAR10 = (VAR1){.VAR9 = VAR20, .VAR5 = VAR16, .VAR21 = VAR11, .VAR22 = -1, .VAR23 = true};
            break;
        case VAR24:
            VAR9 = VAR25;
            goto VAR26;
        case VAR27:
            VAR9 = VAR28;
        VAR26:
            FUN2(VAR16, VAR17);
            FUN5(VAR8, VAR16);
            VAR11 = FUN4(VAR18, VAR19, VAR8, true);
            VAR10 = (VAR1){.VAR9 = VAR9, .VAR5 = VAR16, .VAR21 = VAR11, .VAR22 = -1, .VAR23 = true};
            break;
        default:
            goto VAR29;
        }
        break;
    default:
    VAR29:
        switch (VAR7)
        {
        case VAR30:
            VAR10 = FUN6(VAR3, VAR5);
            break;
        case VAR31:
            VAR10 = FUN7(VAR3, VAR5);
            break;
        case VAR32:
            VAR10 = FUN8(VAR3, VAR5);
            break;
        case VAR15:
            FUN9(VAR3);
            VAR10 = (VAR1){.VAR9 = VAR33, .VAR5 = VAR19, .VAR22 = VAR34 | VAR35};
            break;
        case VAR36:
            VAR10 = FUN10(VAR3, VAR5);
            break;
        case VAR37:
            VAR10 = FUN11(VAR3, VAR5);
            break;
        case VAR24:
            FUN9(VAR3);
            if (FUN12(VAR5, VAR19))
            {
                VAR5 = VAR18;
            }
            FUN13(VAR5, VAR19, 4);
            FUN14(VAR5, VAR5, VAR19);
            VAR10 = (VAR1){.VAR9 = VAR33, .VAR5 = VAR5, .VAR22 = VAR38};
            break;
        default:
        case VAR27:
            FUN9(VAR3);
            if (FUN12(VAR5, VAR19))
            {
                VAR5 = VAR18;
            }
            FUN13(VAR5, VAR19, 4);
            FUN14(VAR5, VAR5, VAR19);
            VAR10 = (VAR1){.VAR9 = VAR33, .VAR5 = VAR5, .VAR22 = VAR38 | VAR34};
            break;
        }
        break;
    }
    if (VAR6)
    {
        VAR10.VAR9 = FUN15(VAR10.VAR9);
    }
    return VAR10;
}