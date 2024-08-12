static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    if (VAR3 < 0x400)
    {
        return VAR6->VAR7 & (VAR3 >> 2);
    }
    if (VAR3 >= VAR6->VAR8 && VAR3 <= 0xfcc)
    {
        goto VAR9;
    }
    if (VAR3 >= 0xfd0 && VAR3 < 0x1000)
    {
        return VAR6->VAR10[(VAR3 - 0xfd0) >> 2];
    }
    switch (VAR3)
    {
    case 0x400:
        return VAR6->VAR11;
    case 0x404:
        return VAR6->VAR12;
    case 0x408:
        return VAR6->VAR13;
    case 0x40c:
        return VAR6->VAR14;
    case 0x410:
        return VAR6->VAR15;
    case 0x414:
        return VAR6->VAR16;
    case 0x418:
        return VAR6->VAR16 & VAR6->VAR15;
    case 0x420:
        return VAR6->VAR17;
    case 0x500:
        return VAR6->VAR18;
    case 0x504:
        return VAR6->VAR19;
    case 0x508:
        return VAR6->VAR20;
    case 0x50c:
        return VAR6->VAR21;
    case 0x510:
        return VAR6->VAR22;
    case 0x514:
        return VAR6->VAR23;
    case 0x518:
        return VAR6->VAR24;
    case 0x51c:
        return VAR6->VAR25;
    case 0x520:
        return VAR6->VAR26;
    case 0x524:
        return VAR6->VAR27;
    case 0x528:
        return VAR6->VAR28;
    default:
        break;
    }
VAR9:
    FUN2(VAR29, "", (int)VAR3);
    return 0;
}