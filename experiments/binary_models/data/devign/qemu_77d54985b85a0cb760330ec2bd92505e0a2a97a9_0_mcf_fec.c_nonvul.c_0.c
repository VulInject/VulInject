static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR1;
    switch (VAR2 & 0x3ff)
    {
    case 0x004:
        VAR6->VAR7 &= ~VAR3;
        break;
    case 0x008:
        VAR6->VAR8 = VAR3;
        break;
    case 0x010:
        if ((VAR6->VAR9 & VAR10) && !VAR6->VAR11)
        {
            FUN2("");
            FUN3(VAR6);
        }
        break;
    case 0x014:
        if (VAR6->VAR9 & VAR10)
        {
            FUN4(VAR6);
        }
        break;
    case 0x024:
        VAR6->VAR9 = VAR3;
        if (VAR3 & VAR12)
        {
            FUN2("");
            FUN5(VAR6);
        }
        if ((VAR6->VAR9 & VAR10) == 0)
        {
            VAR6->VAR11 = 0;
        }
        break;
    case 0x040:
        VAR6->VAR13 = VAR3;
        VAR6->VAR7 |= VAR14;
        break;
    case 0x044:
        VAR6->VAR15 = VAR3 & 0xfe;
        break;
    case 0x064:
        break;
    case 0x084:
        VAR6->VAR16 = VAR3 & 0x07ff003f;
        break;
    case 0x0c4:
        VAR6->VAR17 = VAR3;
        if (VAR3 & 1)
            VAR6->VAR7 |= VAR18;
        break;
    case 0x0e4:
        VAR6->VAR19.VAR20.VAR21[0] = VAR3 >> 24;
        VAR6->VAR19.VAR20.VAR21[1] = VAR3 >> 16;
        VAR6->VAR19.VAR20.VAR21[2] = VAR3 >> 8;
        VAR6->VAR19.VAR20.VAR21[3] = VAR3;
        break;
    case 0x0e8:
        VAR6->VAR19.VAR20.VAR21[4] = VAR3 >> 24;
        VAR6->VAR19.VAR20.VAR21[5] = VAR3 >> 16;
        break;
    case 0x0ec:
        break;
    case 0x118:
    case 0x11c:
    case 0x120:
    case 0x124:
        break;
    case 0x144:
        VAR6->VAR22 = VAR3 & 3;
        break;
    case 0x14c:
        break;
    case 0x150:
        VAR6->VAR23 = (VAR3 & 0x3fc) | 0x400;
        break;
    case 0x180:
        VAR6->VAR24 = VAR3 & ~3;
        VAR6->VAR25 = VAR6->VAR24;
        break;
    case 0x184:
        VAR6->VAR26 = VAR3 & ~3;
        VAR6->VAR27 = VAR6->VAR26;
        break;
    case 0x188:
        VAR6->VAR28 = VAR3 > 0 ? VAR3 & 0x7F0 : 0x7F0;
        break;
    default:
        FUN6("", (int)VAR2);
    }
    FUN7(VAR6);
}