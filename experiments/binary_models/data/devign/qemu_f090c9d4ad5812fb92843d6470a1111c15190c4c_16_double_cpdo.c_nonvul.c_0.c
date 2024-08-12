unsigned int FUN1(const unsigned int VAR1)
{
    VAR2 *VAR3 = FUN2();
    float64 VAR4, VAR5 = VAR6;
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
            VAR4 = FUN6(VAR3->VAR13[VAR8].VAR14, &VAR3->VAR15);
            break;
        case VAR16:
            VAR4 = VAR3->VAR13[VAR8].VAR17;
            break;
        case VAR18:
            break;
        default:
            return 0;
        }
    }
    if (!FUN7(VAR1))
    {
        VAR9 = FUN8(VAR1);
        switch (VAR3->VAR11[VAR9])
        {
        case VAR12:
            VAR5 = FUN6(VAR3->VAR13[VAR9].VAR14, &VAR3->VAR15);
            break;
        case VAR16:
            VAR5 = VAR3->VAR13[VAR9].VAR17;
            break;
        default:
            return 0;
        }
    }
    VAR7 = FUN9(VAR1);
    switch (VAR1 & VAR19)
    {
    case VAR20:
        VAR3->VAR13[VAR7].VAR17 = FUN10(VAR5, VAR4, &VAR3->VAR15);
        break;
    case VAR21:
    case VAR22:
        VAR3->VAR13[VAR7].VAR17 = FUN11(VAR5, VAR4, &VAR3->VAR15);
        break;
    case VAR23:
        VAR3->VAR13[VAR7].VAR17 = FUN12(VAR5, VAR4, &VAR3->VAR15);
        break;
    case VAR24:
        VAR3->VAR13[VAR7].VAR17 = FUN12(VAR4, VAR5, &VAR3->VAR15);
        break;
    case VAR25:
    case VAR26:
        VAR3->VAR13[VAR7].VAR17 = FUN13(VAR5, VAR4, &VAR3->VAR15);
        break;
    case VAR27:
    case VAR28:
        VAR3->VAR13[VAR7].VAR17 = FUN13(VAR4, VAR5, &VAR3->VAR15);
        break;
    case VAR29:
        VAR3->VAR13[VAR7].VAR17 = FUN14(VAR5, VAR4);
        break;
    case VAR30:
        VAR3->VAR13[VAR7].VAR17 = FUN14(VAR4, VAR5);
        break;
    case VAR31:
        VAR3->VAR13[VAR7].VAR17 = FUN15(VAR5, VAR4, &VAR3->VAR15);
        break;
    case VAR32:
        VAR3->VAR13[VAR7].VAR17 = FUN16(VAR5, VAR4);
        break;
    case VAR33:
        VAR3->VAR13[VAR7].VAR17 = VAR4;
        break;
    case VAR34:
    {
        unsigned int *VAR35 = (unsigned int *)&VAR4;
        VAR35[0] ^= 0x80000000;
        VAR35[1] ^= 0x80000000;
        VAR3->VAR13[VAR7].VAR17 = VAR4;
    }
    break;
    case VAR36:
    {
        unsigned int *VAR35 = (unsigned int *)&VAR4;
        VAR35[0] &= 0x7fffffff;
        VAR35[1] &= 0x7fffffff;
        VAR3->VAR13[VAR7].VAR17 = VAR4;
    }
    break;
    case VAR37:
    case VAR38:
        VAR3->VAR13[VAR7].VAR17 = FUN17(VAR4, &VAR3->VAR15);
        break;
    case VAR39:
        VAR3->VAR13[VAR7].VAR17 = FUN18(VAR4, &VAR3->VAR15);
        break;
    case VAR40:
        VAR3->VAR13[VAR7].VAR17 = FUN19(VAR4);
        break;
    case VAR41:
        VAR3->VAR13[VAR7].VAR17 = FUN20(VAR4);
        break;
    case VAR42:
        VAR3->VAR13[VAR7].VAR17 = FUN21(VAR4);
        break;
    case VAR43:
        VAR3->VAR13[VAR7].VAR17 = FUN22(VAR4);
        break;
    case VAR44:
        VAR3->VAR13[VAR7].VAR17 = FUN23(VAR4);
        break;
    case VAR45:
        VAR3->VAR13[VAR7].VAR17 = FUN24(VAR4);
        break;
    case VAR46:
        VAR3->VAR13[VAR7].VAR17 = FUN25(VAR4);
        break;
    case VAR47:
        VAR3->VAR13[VAR7].VAR17 = FUN26(VAR4);
        break;
    case VAR48:
        VAR3->VAR13[VAR7].VAR17 = FUN27(VAR4);
        break;
    case VAR49:
        break;
    default:
    {
        VAR10 = 0;
    }
    }
    if (0 != VAR10)
        VAR3->VAR11[VAR7] = VAR16;
    return VAR10;
}