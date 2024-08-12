static void FUN1(void *VAR1, target_phys_addr_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = (VAR4 *)VAR1;
    uint8_t VAR6;
    if (VAR2 < 0x400)
    {
        VAR6 = (VAR2 >> 2) & VAR5->VAR7;
        VAR5->VAR8 = (VAR5->VAR8 & ~VAR6) | (VAR3 & VAR6);
        FUN2(VAR5);
        return;
    }
    switch (VAR2)
    {
    case 0x400:
        VAR5->VAR7 = VAR3 & 0xff;
        break;
    case 0x404:
        VAR5->VAR9 = VAR3 & 0xff;
        break;
    case 0x408:
        VAR5->VAR10 = VAR3 & 0xff;
        break;
    case 0x40c:
        VAR5->VAR11 = VAR3 & 0xff;
        break;
    case 0x410:
        VAR5->VAR12 = VAR3 & 0xff;
        break;
    case 0x41c:
        VAR5->VAR13 &= ~VAR3;
        break;
    case 0x420:
        VAR6 = VAR5->VAR14;
        VAR5->VAR15 = (VAR5->VAR15 & ~VAR6) | (VAR3 & VAR6);
        break;
    case 0x500:
        VAR5->VAR16 = VAR3 & 0xff;
        break;
    case 0x504:
        VAR5->VAR17 = VAR3 & 0xff;
        break;
    case 0x508:
        VAR5->VAR18 = VAR3 & 0xff;
        break;
    case 0x50c:
        VAR5->VAR19 = VAR3 & 0xff;
        break;
    case 0x510:
        VAR5->VAR20 = VAR3 & 0xff;
        break;
    case 0x514:
        VAR5->VAR21 = VAR3 & 0xff;
        break;
    case 0x518:
        VAR5->VAR22 = VAR3 & 0xff;
        break;
    case 0x51c:
        VAR5->VAR23 = VAR3 & 0xff;
        break;
    case 0x520:
        VAR5->VAR24 = (VAR3 != 0xacce551);
        break;
    case 0x524:
        if (!VAR5->VAR24)
            VAR5->VAR14 = VAR3 & 0xff;
        break;
    default:
        FUN3("", (int)VAR2);
    }
    FUN2(VAR5);
}