static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = FUN2(VAR1);
    FUN3("" VAR7 "", (int)VAR3, VAR2);
    switch (VAR2 & 0x3ff)
    {
    case 0x004:
        VAR6->VAR8 &= ~VAR3;
        break;
    case 0x008:
        VAR6->VAR9 = VAR3;
        break;
    case 0x010:
        if ((VAR6->VAR10 & VAR11) && !VAR6->VAR12)
        {
            FUN4(VAR6);
        }
        break;
    case 0x014:
        if (VAR6->VAR10 & VAR11)
        {
            FUN5(VAR6);
        }
        break;
    case 0x024:
        VAR6->VAR10 = VAR3;
        if (VAR3 & VAR13)
        {
            FUN6(FUN7(VAR6));
        }
        if ((VAR6->VAR10 & VAR11) == 0)
        {
            VAR6->VAR12 = 0;
        }
        break;
    case 0x040:
        VAR6->VAR14 = VAR3;
        if (FUN8(VAR3, 29, 1))
        {
            VAR6->VAR14 = FUN9(VAR6, FUN8(VAR3, 18, 9));
        }
        else
        {
            FUN10(VAR6, FUN8(VAR3, 18, 9), FUN8(VAR3, 0, 16));
        }
        VAR6->VAR8 |= VAR15;
        break;
    case 0x044:
        VAR6->VAR16 = VAR3 & 0xfe;
        break;
    case 0x064:
        VAR6->VAR17 = (VAR3 & 0x80000000) ? 0xc0000000 : 0;
        break;
    case 0x084:
        VAR6->VAR18 = VAR3 & 0x07ff003f;
        break;
    case 0x0c4:
        VAR6->VAR19 = VAR3;
        if (VAR3 & 1)
        {
            VAR6->VAR8 |= VAR20;
        }
        break;
    case 0x0e4:
        VAR6->VAR21.VAR22.VAR23[0] = VAR3 >> 24;
        VAR6->VAR21.VAR22.VAR23[1] = VAR3 >> 16;
        VAR6->VAR21.VAR22.VAR23[2] = VAR3 >> 8;
        VAR6->VAR21.VAR22.VAR23[3] = VAR3;
        break;
    case 0x0e8:
        VAR6->VAR21.VAR22.VAR23[4] = VAR3 >> 24;
        VAR6->VAR21.VAR22.VAR23[5] = VAR3 >> 16;
        break;
    case 0x0ec:
        break;
    case 0x118:
    case 0x11c:
    case 0x120:
    case 0x124:
        break;
    case 0x144:
        VAR6->VAR24 = VAR3 & 3;
        break;
    case 0x14c:
        break;
    case 0x150:
        VAR6->VAR25 = (VAR3 & 0x3fc) | 0x400;
        break;
    case 0x180:
        VAR6->VAR26 = VAR3 & ~3;
        VAR6->VAR27 = VAR6->VAR26;
        break;
    case 0x184:
        VAR6->VAR28 = VAR3 & ~3;
        VAR6->VAR29 = VAR6->VAR28;
        break;
    case 0x188:
        VAR6->VAR30 = VAR3 & 0x7f0;
        break;
    case 0x300:
        VAR6->VAR31 = VAR3 & 0x53;
        break;
    case 0x308:
        VAR6->VAR32 = (VAR3 & 0x2) ? 0x6 : 0;
        break;
    default:
        FUN11(VAR33, "" VAR7 "", VAR34, VAR35, VAR2);
        break;
    }
    FUN12(VAR6);
}