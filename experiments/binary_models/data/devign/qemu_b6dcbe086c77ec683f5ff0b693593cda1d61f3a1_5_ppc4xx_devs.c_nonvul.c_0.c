static void FUN1(void *VAR1, int VAR2, uint32_t VAR3)
{
    VAR4 *VAR5;
    VAR5 = VAR1;
    switch (VAR2)
    {
    case VAR6:
        VAR5->VAR7 = VAR3;
        break;
    case VAR8:
        switch (VAR5->VAR7)
        {
        case 0x00:
            VAR5->VAR9 &= ~VAR3;
            break;
        case 0x08:
            VAR5->VAR10 &= ~VAR3;
            break;
        case 0x10:
            VAR5->VAR11 = VAR3;
            break;
        case 0x20:
            VAR3 &= 0xFFE00000;
            if (!(VAR5->VAR12 & 0x80000000) && (VAR3 & 0x80000000))
            {
                FUN2("", VAR13);
                FUN3(VAR5);
                VAR5->VAR14 &= ~0x80000000;
            }
            else if ((VAR5->VAR12 & 0x80000000) && !(VAR3 & 0x80000000))
            {
                FUN2("", VAR13);
                FUN4(VAR5);
                VAR5->VAR14 |= 0x80000000;
            }
            if (!(VAR5->VAR12 & 0x40000000) && (VAR3 & 0x40000000))
                VAR5->VAR14 |= 0x40000000;
            else if ((VAR5->VAR12 & 0x40000000) && !(VAR3 & 0x40000000))
                VAR5->VAR14 &= ~0x40000000;
            VAR5->VAR12 = VAR3;
            break;
        case 0x24:
            break;
        case 0x30:
            VAR5->VAR15 = VAR3 & 0x3FF80000;
            break;
        case 0x34:
            VAR5->VAR16 = (VAR3 & 0xF8000000) | 0x07C00000;
            break;
        case 0x40:
            FUN5(VAR5, &VAR5->VAR17[0], VAR3, VAR5->VAR12 & 0x80000000);
            break;
        case 0x44:
            FUN5(VAR5, &VAR5->VAR17[1], VAR3, VAR5->VAR12 & 0x80000000);
            break;
        case 0x48:
            FUN5(VAR5, &VAR5->VAR17[2], VAR3, VAR5->VAR12 & 0x80000000);
            break;
        case 0x4C:
            FUN5(VAR5, &VAR5->VAR17[3], VAR3, VAR5->VAR12 & 0x80000000);
            break;
        case 0x80:
            VAR5->VAR18 = VAR3 & 0x018FC01F;
            break;
        case 0x94:
            VAR5->VAR19 = VAR3 & 0x00F00000;
            break;
        case 0x98:
            VAR3 &= 0xFFF0F000;
            if (VAR5->VAR20 == 0 && VAR3 != 0)
                FUN6(VAR5->VAR21);
            else if (VAR5->VAR20 != 0 && VAR3 == 0)
                FUN7(VAR5->VAR21);
            VAR5->VAR20 = VAR3;
            break;
        default:
            break;
        }
        break;
    }
}