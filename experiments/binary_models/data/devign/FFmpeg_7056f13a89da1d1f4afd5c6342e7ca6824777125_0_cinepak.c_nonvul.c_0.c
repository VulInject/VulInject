static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int VAR7)
{
    const VAR5 *VAR8 = (VAR6 + VAR7);
    int VAR9, VAR10;
    if (VAR4->VAR11 > VAR2->VAR12 || VAR4->VAR13 > VAR2->VAR14 || VAR4->VAR15 >= VAR4->VAR11 || VAR4->VAR16 >= VAR4->VAR13)
        return -1;
    while ((VAR6 + 4) <= VAR8)
    {
        VAR9 = VAR6[0];
        VAR10 = FUN2(&VAR6[1]) - 4;
        if (VAR10 < 0)
            return -1;
        VAR6 += 4;
        VAR10 = ((VAR6 + VAR10) > VAR8) ? (VAR8 - VAR6) : VAR10;
        switch (VAR9)
        {
        case 0x20:
        case 0x21:
        case 0x24:
        case 0x25:
            FUN3(VAR4->VAR17, VAR9, VAR10, VAR6);
            break;
        case 0x22:
        case 0x23:
        case 0x26:
        case 0x27:
            FUN3(VAR4->VAR18, VAR9, VAR10, VAR6);
            break;
        case 0x30:
        case 0x31:
        case 0x32:
            return FUN4(VAR2, VAR4, VAR9, VAR10, VAR6);
        }
        VAR6 += VAR10;
    }
    return -1;
}