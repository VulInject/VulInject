unsigned int FUN1(const unsigned int VAR1)
{
    VAR2 *VAR3 = FUN2();
    float32 VAR4, VAR5 = VAR6;
    unsigned int VAR7, VAR8, VAR9, VAR10 = 1;
    VAR8 = FUN3(VAR1);
    if (FUN4(VAR1))
    {
        VAR4 = FUN5(VAR8);
    }
    else
    {
        switch (VAR3->VAR11[VAR8])
        {
        case VAR12:
            VAR4 = VAR3->VAR13[VAR8].VAR14;
            break;
        default:
            return 0;
        }
    }
    if (!FUN6(VAR1))
    {
        VAR9 = FUN7(VAR1);
        switch (VAR3->VAR11[VAR9])
        {
        case VAR12:
            VAR5 = VAR3->VAR13[VAR9].VAR14;
            break;
        default:
            return 0;
        }
    }
    VAR7 = FUN8(VAR1);
    switch (VAR1 & VAR15)
    {
    case VAR16:
        VAR3->VAR13[VAR7].VAR14 = FUN9(VAR5, VAR4, &VAR3->VAR17);
        break;
    case VAR18:
    case VAR19:
        VAR3->VAR13[VAR7].VAR14 = FUN10(VAR5, VAR4, &VAR3->VAR17);
        break;
    case VAR20:
        VAR3->VAR13[VAR7].VAR14 = FUN11(VAR5, VAR4, &VAR3->VAR17);
        break;
    case VAR21:
        VAR3->VAR13[VAR7].VAR14 = FUN11(VAR4, VAR5, &VAR3->VAR17);
        break;
    case VAR22:
    case VAR23:
        VAR3->VAR13[VAR7].VAR14 = FUN12(VAR5, VAR4, &VAR3->VAR17);
        break;
    case VAR24:
    case VAR25:
        VAR3->VAR13[VAR7].VAR14 = FUN12(VAR4, VAR5, &VAR3->VAR17);
        break;
    case VAR26:
        VAR3->VAR13[VAR7].VAR14 = FUN13(VAR5, VAR4);
        break;
    case VAR27:
        VAR3->VAR13[VAR7].VAR14 = FUN13(VAR4, VAR5);
        break;
    case VAR28:
        VAR3->VAR13[VAR7].VAR14 = FUN14(VAR5, VAR4, &VAR3->VAR17);
        break;
    case VAR29:
        VAR3->VAR13[VAR7].VAR14 = FUN15(VAR5, VAR4);
        break;
    case VAR30:
        VAR3->VAR13[VAR7].VAR14 = VAR4;
        break;
    case VAR31:
        VAR3->VAR13[VAR7].VAR14 = FUN16(VAR4);
        break;
    case VAR32:
        VAR3->VAR13[VAR7].VAR14 = FUN17(VAR4);
        break;
    case VAR33:
    case VAR34:
        VAR3->VAR13[VAR7].VAR14 = FUN18(VAR4, &VAR3->VAR17);
        break;
    case VAR35:
        VAR3->VAR13[VAR7].VAR14 = FUN19(VAR4, &VAR3->VAR17);
        break;
    case VAR36:
        VAR3->VAR13[VAR7].VAR14 = FUN20(VAR4);
        break;
    case VAR37:
        VAR3->VAR13[VAR7].VAR14 = FUN21(VAR4);
        break;
    case VAR38:
        VAR3->VAR13[VAR7].VAR14 = FUN22(VAR4);
        break;
    case VAR39:
        VAR3->VAR13[VAR7].VAR14 = FUN23(VAR4);
        break;
    case VAR40:
        VAR3->VAR13[VAR7].VAR14 = FUN24(VAR4);
        break;
    case VAR41:
        VAR3->VAR13[VAR7].VAR14 = FUN25(VAR4);
        break;
    case VAR42:
        VAR3->VAR13[VAR7].VAR14 = FUN26(VAR4);
        break;
    case VAR43:
        VAR3->VAR13[VAR7].VAR14 = FUN27(VAR4);
        break;
    case VAR44:
        VAR3->VAR13[VAR7].VAR14 = FUN28(VAR4);
        break;
    case VAR45:
        break;
    default:
    {
        VAR10 = 0;
    }
    }
    if (0 != VAR10)
        VAR3->VAR11[VAR7] = VAR12;
    return VAR10;
}