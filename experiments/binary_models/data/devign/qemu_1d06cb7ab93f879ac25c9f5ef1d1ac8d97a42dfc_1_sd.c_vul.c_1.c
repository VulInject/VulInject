static VAR1 FUN1(VAR2 *VAR3, SDRequest VAR4)
{
    FUN2("", VAR4.VAR5, VAR4.VAR6);
    switch (VAR4.VAR5)
    {
    case 6:
        switch (VAR3->VAR7)
        {
        case VAR8:
            VAR3->VAR9[0] &= 0x3f;
            VAR3->VAR9[0] |= (VAR4.VAR6 & 0x03) << 6;
            return VAR10;
        default:
            break;
        }
        break;
    case 13:
        switch (VAR3->VAR7)
        {
        case VAR8:
            VAR3->VAR7 = VAR11;
            VAR3->VAR12 = 0;
            VAR3->VAR13 = 0;
            return VAR10;
        default:
            break;
        }
        break;
    case 22:
        switch (VAR3->VAR7)
        {
        case VAR8:
            *(VAR14 *)VAR3->VAR15 = VAR3->VAR16;
            VAR3->VAR7 = VAR11;
            VAR3->VAR12 = 0;
            VAR3->VAR13 = 0;
            return VAR10;
        default:
            break;
        }
        break;
    case 23:
        switch (VAR3->VAR7)
        {
        case VAR8:
            return VAR10;
        default:
            break;
        }
        break;
    case 41:
        if (VAR3->VAR17)
        {
            VAR3->VAR7 = VAR8;
            return VAR10;
        }
        switch (VAR3->VAR7)
        {
        case VAR18:
            if (VAR4.VAR6)
                VAR3->VAR7 = VAR19;
            return VAR20;
        default:
            break;
        }
        break;
    case 42:
        switch (VAR3->VAR7)
        {
        case VAR8:
            return VAR10;
        default:
            break;
        }
        break;
    case 51:
        switch (VAR3->VAR7)
        {
        case VAR8:
            VAR3->VAR7 = VAR11;
            VAR3->VAR12 = 0;
            VAR3->VAR13 = 0;
            return VAR10;
        default:
            break;
        }
        break;
    default:
        VAR3->VAR21 &= ~VAR22;
        return FUN3(VAR3, VAR4);
    }
    fprintf(VAR23, "", VAR4.VAR5);
    return VAR24;
}