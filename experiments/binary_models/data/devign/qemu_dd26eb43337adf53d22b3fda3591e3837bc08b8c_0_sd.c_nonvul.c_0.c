static VAR1 FUN1(VAR2 *VAR3, SDRequest VAR4)
{
    FUN2("", VAR4.VAR5, VAR4.VAR6);
    VAR3->VAR7 |= VAR8;
    switch (VAR4.VAR5)
    {
    case 6:
        switch (VAR3->VAR9)
        {
        case VAR10:
            VAR3->VAR11[0] &= 0x3f;
            VAR3->VAR11[0] |= (VAR4.VAR6 & 0x03) << 6;
            return VAR12;
        default:
            break;
        }
        break;
    case 13:
        switch (VAR3->VAR9)
        {
        case VAR10:
            VAR3->VAR9 = VAR13;
            VAR3->VAR14 = 0;
            VAR3->VAR15 = 0;
            return VAR12;
        default:
            break;
        }
        break;
    case 22:
        switch (VAR3->VAR9)
        {
        case VAR10:
            *(VAR16 *)VAR3->VAR17 = VAR3->VAR18;
            VAR3->VAR9 = VAR13;
            VAR3->VAR14 = 0;
            VAR3->VAR15 = 0;
            return VAR12;
        default:
            break;
        }
        break;
    case 23:
        switch (VAR3->VAR9)
        {
        case VAR10:
            return VAR12;
        default:
            break;
        }
        break;
    case 41:
        if (VAR3->VAR19)
        {
            VAR3->VAR9 = VAR10;
            return VAR12;
        }
        switch (VAR3->VAR9)
        {
        case VAR20:
            if (!(VAR3->VAR21 & VAR22))
            {
                if ((VAR4.VAR6 & VAR23) != 0)
                {
                    FUN3(VAR3->VAR24);
                    FUN4(VAR3);
                }
                else if (!FUN5(VAR3->VAR24))
                {
                    FUN6(VAR3->VAR24, (FUN7(VAR25) + VAR26));
                }
            }
            if (VAR4.VAR6 & VAR23)
            {
                VAR3->VAR9 = VAR27;
            }
            return VAR28;
        default:
            break;
        }
        break;
    case 42:
        switch (VAR3->VAR9)
        {
        case VAR10:
            return VAR12;
        default:
            break;
        }
        break;
    case 51:
        switch (VAR3->VAR9)
        {
        case VAR10:
            VAR3->VAR9 = VAR13;
            VAR3->VAR14 = 0;
            VAR3->VAR15 = 0;
            return VAR12;
        default:
            break;
        }
        break;
    default:
        return FUN8(VAR3, VAR4);
    }
    fprintf(VAR29, "", VAR4.VAR5);
    return VAR30;
}