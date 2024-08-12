static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR1;
    uint8_t VAR7;
    if (VAR2 < 0x400)
    {
        VAR7 = (VAR2 >> 2) & VAR6->VAR8;
        VAR6->VAR9 = (VAR6->VAR9 & ~VAR7) | (VAR3 & VAR7);
        FUN2(VAR6);
        return;
    }
    if (VAR2 >= VAR6->VAR10)
    {
        goto VAR11;
    }
    switch (VAR2)
    {
    case 0x400:
        VAR6->VAR8 = VAR3 & 0xff;
        break;
    case 0x404:
        VAR6->VAR12 = VAR3 & 0xff;
        break;
    case 0x408:
        VAR6->VAR13 = VAR3 & 0xff;
        break;
    case 0x40c:
        VAR6->VAR14 = VAR3 & 0xff;
        break;
    case 0x410:
        VAR6->VAR15 = VAR3 & 0xff;
        break;
    case 0x41c:
        VAR6->VAR16 &= ~VAR3;
        break;
    case 0x420:
        VAR7 = VAR6->VAR17;
        VAR6->VAR18 = (VAR6->VAR18 & ~VAR7) | (VAR3 & VAR7);
        break;
    case 0x500:
        VAR6->VAR19 = VAR3 & 0xff;
        break;
    case 0x504:
        VAR6->VAR20 = VAR3 & 0xff;
        break;
    case 0x508:
        VAR6->VAR21 = VAR3 & 0xff;
        break;
    case 0x50c:
        VAR6->VAR22 = VAR3 & 0xff;
        break;
    case 0x510:
        VAR6->VAR23 = VAR3 & 0xff;
        break;
    case 0x514:
        VAR6->VAR24 = VAR3 & 0xff;
        break;
    case 0x518:
        VAR6->VAR25 = VAR3 & 0xff;
        break;
    case 0x51c:
        VAR6->VAR26 = VAR3 & 0xff;
        break;
    case 0x520:
        VAR6->VAR27 = (VAR3 != 0xacce551);
        break;
    case 0x524:
        if (!VAR6->VAR27)
            VAR6->VAR17 = VAR3 & 0xff;
        break;
    case 0x528:
        VAR6->VAR28 = VAR3 & 0xff;
        break;
    default:
        goto VAR11;
    }
    FUN2(VAR6);
    return;
VAR11:
    FUN3(VAR29, "", (int)VAR2);
}