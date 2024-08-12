static int FUN1(VAR1 *VAR2)
{
    int VAR3 = (VAR2->VAR4 == 16) ? VAR5 : VAR6;
    if (VAR2->VAR7 == VAR8)
        return VAR9 | VAR10 | VAR5 | VAR11;
    else if (VAR2->VAR7 == VAR12)
    {
        if (VAR2->VAR13 != 16000)
        {
            FUN2(VAR2, VAR14, "");
            return -1;
        }
        if (VAR2->VAR15 != 1)
        {
            FUN2(VAR2, VAR14, "");
            return -1;
        }
        return VAR16 | VAR17 | VAR5;
    }
    else
    {
        switch (VAR2->VAR13)
        {
        case 44100:
            VAR3 |= VAR10;
            break;
        case 22050:
            VAR3 |= VAR18;
            break;
        case 11025:
            VAR3 |= VAR17;
            break;
        case 8000:
        case 5512:
            if (VAR2->VAR7 != VAR19)
            {
                VAR3 |= VAR20;
                break;
            }
        default:
            FUN2(VAR2, VAR14, "");
            return -1;
        }
    }
    if (VAR2->VAR15 > 1)
    {
        VAR3 |= VAR11;
    }
    switch (VAR2->VAR7)
    {
    case VAR19:
        VAR3 |= VAR21 | VAR5;
        break;
    case VAR22:
        VAR3 |= VAR23 | VAR6;
        break;
    case VAR24:
        VAR3 |= VAR23 | VAR5;
        break;
    case VAR25:
        VAR3 |= VAR26 | VAR5;
        break;
    case VAR27:
        VAR3 |= VAR28 | VAR5;
        break;
    case VAR29:
        if (VAR2->VAR13 == 8000)
        {
            VAR3 |= VAR30 | VAR5;
        }
        else
        {
            VAR3 |= VAR31 | VAR5;
        }
        break;
    case 0:
        VAR3 |= VAR2->VAR32 << 4;
        break;
    default:
        FUN2(VAR2, VAR14, "");
        return -1;
    }
    return VAR3;
}