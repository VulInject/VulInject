static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    uint32_t VAR7;
    FUN2("", VAR3 >> 2);
    switch (VAR3 >> 2)
    {
    case 0x0:
        VAR7 = VAR6->VAR8;
        if (!(VAR6->VAR9 & VAR10))
        {
            VAR7 |= VAR11;
            VAR6->VAR12 &= ~VAR13;
            VAR6->VAR14 &= ~VAR15;
            VAR6->VAR9 |= VAR10;
            FUN3(VAR6);
            FUN4(VAR6->VAR16);
        }
        return VAR7;
    case 0x20:
        return VAR6->VAR17;
    case 0x21:
        return VAR6->VAR18;
    case 0x25:
        return VAR6->VAR12;
    case 0x26:
        return VAR6->VAR14;
    case 0x2A:
        return VAR6->VAR19;
    case 0x2B:
        return VAR6->VAR20;
    case 0x2d:
        return VAR6->VAR9;
    case 0x24:
        return VAR6->VAR21;
    case 0x2c:
        return VAR6->VAR22;
    case 0x22:
        return VAR6->VAR23;
    case 0x23:
    case 0x29:
        return 0x0;
    default:
        FUN5("", VAR24, (int)VAR3);
        return 0;
    }
}