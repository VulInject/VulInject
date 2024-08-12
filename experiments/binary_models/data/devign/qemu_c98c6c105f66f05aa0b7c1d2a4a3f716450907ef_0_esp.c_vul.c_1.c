void FUN1(VAR1 *VAR2, uint32_t VAR3, uint64_t VAR4)
{
    FUN2(VAR3, VAR2->VAR5[VAR3], VAR4);
    switch (VAR3)
    {
    case VAR6:
        VAR2->VAR7 = true;
    case VAR8:
    case VAR9:
        VAR2->VAR10[VAR11] &= ~VAR12;
        break;
    case VAR13:
        if (VAR2->VAR14)
        {
            VAR2->VAR15[VAR2->VAR16++] = VAR4 & 0xff;
        }
        else if (VAR2->VAR17 == VAR18 - 1)
        {
            FUN3();
        }
        else
        {
            VAR2->VAR17++;
            VAR2->VAR19[VAR2->VAR20++] = VAR4 & 0xff;
        }
        break;
    case VAR21:
        VAR2->VAR10[VAR3] = VAR4;
        if (VAR4 & VAR22)
        {
            VAR2->VAR23 = 1;
            VAR2->VAR10[VAR8] = VAR2->VAR5[VAR8];
            VAR2->VAR10[VAR9] = VAR2->VAR5[VAR9];
            VAR2->VAR10[VAR6] = VAR2->VAR5[VAR6];
        }
        else
        {
            VAR2->VAR23 = 0;
        }
        switch (VAR4 & VAR24)
        {
        case VAR25:
            FUN4(VAR4);
            break;
        case VAR26:
            FUN5(VAR4);
            VAR2->VAR10[VAR27] = VAR28;
            VAR2->VAR10[VAR29] = 0;
            VAR2->VAR10[VAR30] = 0;
            break;
        case VAR31:
            FUN6(VAR4);
            FUN7(VAR2);
            break;
        case VAR32:
            FUN8(VAR4);
            VAR2->VAR10[VAR27] = VAR33;
            if (!(VAR2->VAR5[VAR34] & VAR35))
            {
                FUN9(VAR2);
            }
            break;
        case VAR36:
            FUN10(VAR2);
            break;
        case VAR37:
            FUN11(VAR4);
            FUN12(VAR2);
            VAR2->VAR10[VAR27] = VAR28;
            VAR2->VAR10[VAR11] |= VAR38;
            break;
        case VAR39:
            FUN13(VAR4);
            VAR2->VAR10[VAR27] = VAR40;
            VAR2->VAR10[VAR29] = 0;
            VAR2->VAR10[VAR30] = 0;
            FUN9(VAR2);
            break;
        case VAR41:
            FUN14(VAR4);
            VAR2->VAR10[VAR11] = VAR12;
            VAR2->VAR10[VAR27] = VAR28;
            VAR2->VAR10[VAR29] = 0;
            break;
        case VAR42:
            FUN15(VAR4);
            break;
        case VAR43:
            FUN16(VAR4);
            break;
        case VAR44:
            FUN17(VAR4);
            FUN18(VAR2);
            break;
        case VAR45:
            FUN19(VAR4);
            FUN20(VAR2);
            break;
        case VAR46:
            FUN21(VAR4);
            FUN22(VAR2);
            break;
        case VAR47:
            FUN23(VAR4);
            VAR2->VAR10[VAR27] = 0;
            break;
        case VAR48:
            FUN24(VAR4);
            VAR2->VAR10[VAR27] = 0;
            FUN9(VAR2);
            break;
        default:
            FUN25(VAR4);
            break;
        }
        break;
    case VAR49 ... VAR50:
        break;
    case VAR34:
    case VAR51:
    case VAR52:
    case VAR53:
    case VAR54:
        VAR2->VAR10[VAR3] = VAR4;
        break;
    case VAR55 ... VAR56:
        break;
    default:
        FUN26(VAR4, VAR3);
        return;
    }
    VAR2->VAR5[VAR3] = VAR4;
}