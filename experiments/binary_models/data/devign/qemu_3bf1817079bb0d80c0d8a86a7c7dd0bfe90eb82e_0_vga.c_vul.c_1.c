VAR1 FUN1(VAR2 *VAR3, hwaddr VAR4)
{
    int VAR5, VAR6;
    uint32_t VAR7;
    VAR5 = (VAR3->VAR8[VAR9] >> 2) & 3;
    VAR4 &= 0x1ffff;
    switch (VAR5)
    {
    case 0:
        break;
    case 1:
        if (VAR4 >= 0x10000)
            return 0xff;
        VAR4 += VAR3->VAR10;
        break;
    case 2:
        VAR4 -= 0x10000;
        if (VAR4 >= 0x8000)
            return 0xff;
        break;
    default:
    case 3:
        VAR4 -= 0x18000;
        if (VAR4 >= 0x8000)
            return 0xff;
        break;
    }
    if (VAR3->VAR11[VAR12] & VAR13)
    {
        VAR7 = VAR3->VAR14[VAR4];
    }
    else if (VAR3->VAR8[VAR15] & 0x10)
    {
        VAR6 = (VAR3->VAR8[VAR16] & 2) | (VAR4 & 1);
        VAR7 = VAR3->VAR14[((VAR4 & ~1) << 1) | VAR6];
    }
    else
    {
        VAR3->VAR17 = ((VAR1 *)VAR3->VAR14)[VAR4];
        if (!(VAR3->VAR8[VAR15] & 0x08))
        {
            VAR6 = VAR3->VAR8[VAR16];
            VAR7 = FUN2(VAR3->VAR17, VAR6);
        }
        else
        {
            VAR7 = (VAR3->VAR17 ^ VAR18[VAR3->VAR8[VAR19]]) & VAR18[VAR3->VAR8[VAR20]];
            VAR7 |= VAR7 >> 16;
            VAR7 |= VAR7 >> 8;
            VAR7 = (~VAR7) & 0xff;
        }
    }
    return VAR7;
}