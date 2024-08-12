static void FUN1(void *VAR1, uint32_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR1;
    int VAR6;
    if ((VAR2 >= 0x3b0 && VAR2 <= 0x3bf && (VAR5->VAR7 & VAR8)) || (VAR2 >= 0x3d0 && VAR2 <= 0x3df && !(VAR5->VAR7 & VAR8)))
        return;
    FUN2("", VAR2, VAR3);
    switch (VAR2)
    {
    case 0x3c0:
        if (VAR5->VAR9 == 0)
        {
            VAR3 &= 0x3f;
            VAR5->VAR10 = VAR3;
        }
        else
        {
            VAR6 = VAR5->VAR10 & 0x1f;
            switch (VAR6)
            {
            case 0x00 ... 0x0f:
                VAR5->VAR11[VAR6] = VAR3 & 0x3f;
                break;
            case 0x10:
                VAR5->VAR11[VAR6] = VAR3 & ~0x10;
                break;
            case 0x11:
                VAR5->VAR11[VAR6] = VAR3;
                break;
            case 0x12:
                VAR5->VAR11[VAR6] = VAR3 & ~0xc0;
                break;
            case 0x13:
                VAR5->VAR11[VAR6] = VAR3 & ~0xf0;
                break;
            case 0x14:
                VAR5->VAR11[VAR6] = VAR3 & ~0xf0;
                break;
            default:
                break;
            }
        }
        VAR5->VAR9 ^= 1;
        break;
    case 0x3c2:
        VAR5->VAR7 = VAR3 & ~0x10;
        break;
    case 0x3c4:
        VAR5->VAR12 = VAR3;
        break;
    case 0x3c5:
        if (FUN3(VAR5, VAR5->VAR12, VAR3))
            break;
        FUN2("", VAR5->VAR12, VAR3);
        VAR5->VAR13[VAR5->VAR12] = VAR3 & VAR14[VAR5->VAR12];
        break;
    case 0x3c6:
        FUN4(VAR5, VAR3);
        break;
    case 0x3c7:
        VAR5->VAR15 = VAR3;
        VAR5->VAR16 = 0;
        VAR5->VAR17 = 3;
        break;
    case 0x3c8:
        VAR5->VAR18 = VAR3;
        VAR5->VAR16 = 0;
        VAR5->VAR17 = 0;
        break;
    case 0x3c9:
        if (FUN5(VAR5, VAR3))
            break;
        VAR5->VAR19[VAR5->VAR16] = VAR3;
        if (++VAR5->VAR16 == 3)
        {
            memcpy(&VAR5->VAR20[VAR5->VAR18 * 3], VAR5->VAR19, 3);
            VAR5->VAR16 = 0;
            VAR5->VAR18++;
        }
        break;
    case 0x3ce:
        VAR5->VAR21 = VAR3;
        break;
    case 0x3cf:
        if (FUN6(VAR5, VAR5->VAR21, VAR3))
            break;
        FUN2("", VAR5->VAR21, VAR3);
        VAR5->VAR22[VAR5->VAR21] = VAR3 & VAR23[VAR5->VAR21];
        break;
    case 0x3b4:
    case 0x3d4:
        VAR5->VAR24 = VAR3;
        break;
    case 0x3b5:
    case 0x3d5:
        if (FUN7(VAR5, VAR5->VAR24, VAR3))
            break;
        FUN2("", VAR5->VAR24, VAR3);
        if ((VAR5->VAR25[0x11] & 0x80) && VAR5->VAR24 <= 7)
        {
            if (VAR5->VAR24 == 7)
                VAR5->VAR25[7] = (VAR5->VAR25[7] & ~0x10) | (VAR3 & 0x10);
            return;
        }
        switch (VAR5->VAR24)
        {
        case 0x01:
        case 0x07:
        case 0x09:
        case 0x0c:
        case 0x0d:
        case 0x12:
            VAR5->VAR25[VAR5->VAR24] = VAR3;
            break;
        default:
            VAR5->VAR25[VAR5->VAR24] = VAR3;
            break;
        }
        break;
    case 0x3ba:
    case 0x3da:
        VAR5->VAR26 = VAR3 & 0x10;
        break;
    }
}