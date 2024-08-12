static int FUN1(VAR1 *VAR2, uint32_t VAR3, int VAR4, int VAR5, VAR6 *VAR7, int *VAR8)
{
    int VAR9;
    uint32_t VAR10;
    uint32_t VAR11;
    *VAR7 = VAR3;
    for (VAR9 = 7; VAR9 >= 0; VAR9--)
    {
        VAR11 = VAR2->VAR12.VAR13[VAR9];
        if ((VAR11 & 1) == 0)
            continue;
        VAR10 = 1 << ((VAR11 >> 1) & 0x1f);
        VAR10 = (VAR10 << 1) - 1;
        if (((VAR11 ^ VAR3) & ~VAR10) == 0)
            break;
    }
    if (VAR9 < 0)
        return 2;
    if (VAR4 == 2)
    {
        VAR10 = VAR2->VAR12.VAR14;
    }
    else
    {
        VAR10 = VAR2->VAR12.VAR15;
    }
    VAR10 = (VAR10 >> (VAR9 * 4)) & 0xf;
    switch (VAR10)
    {
    case 0:
        return 1;
    case 1:
        if (VAR5)
            return 1;
        *VAR8 = VAR16 | VAR17;
        break;
    case 2:
        *VAR8 = VAR16;
        if (!VAR5)
            *VAR8 |= VAR17;
        break;
    case 3:
        *VAR8 = VAR16 | VAR17;
        break;
    case 5:
        if (VAR5)
            return 1;
        *VAR8 = VAR16;
        break;
    case 6:
        *VAR8 = VAR16;
        break;
    default:
        return 1;
    }
    *VAR8 |= VAR18;
    return 0;
}