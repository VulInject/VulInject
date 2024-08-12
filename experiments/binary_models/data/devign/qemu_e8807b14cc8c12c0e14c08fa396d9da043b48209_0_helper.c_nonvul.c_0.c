static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5, target_ulong VAR6, int VAR7, int VAR8)
{
    target_ulong VAR9;
    unsigned int VAR10;
    if ((VAR2->VAR11 & VAR12) == 0)
    {
        *VAR4 = FUN2(VAR6);
        *VAR5 = VAR13 | VAR14;
        return 0;
    }
    for (VAR10 = 0; VAR10 < 64; VAR10++)
    {
        switch ((VAR2->VAR15[VAR10] >> 61) & 3)
        {
        default:
        case 0x0:
            VAR9 = 0xffffffffffffe000ULL;
            break;
        case 0x1:
            VAR9 = 0xffffffffffff0000ULL;
            break;
        case 0x2:
            VAR9 = 0xfffffffffff80000ULL;
            break;
        case 0x3:
            VAR9 = 0xffffffffffc00000ULL;
            break;
        }
        if (VAR2->VAR16[1] == (VAR2->VAR17[VAR10] & 0x1fff) && (VAR6 & VAR9) == (VAR2->VAR17[VAR10] & VAR9) && (VAR2->VAR15[VAR10] & 0x8000000000000000ULL))
        {
            if (((VAR2->VAR15[VAR10] & 0x4) && VAR8) || (!(VAR2->VAR15[VAR10] & 0x2) && (VAR7 == 1)))
            {
                if (VAR2->VAR16[3])
                    VAR2->VAR16[3] = 2;
                VAR2->VAR16[3] |= (VAR8 << 3) | ((VAR7 == 1) << 2) | 1;
                VAR2->VAR16[4] = VAR6;
                VAR2->VAR18 = VAR19;
                FUN3("" VAR20 "", VAR6);
                return 1;
            }
            *VAR4 = ((VAR2->VAR15[VAR10] & VAR9) | (VAR6 & ~VAR9)) & 0x1ffffffe000ULL;
            *VAR5 = VAR13;
            if (VAR2->VAR15[VAR10] & 0x2)
                *VAR5 |= VAR14;
            return 0;
        }
    }
    FUN3("" VAR20 "", VAR6);
    VAR2->VAR16[6] = (VAR6 & ~0x1fffULL) | (VAR2->VAR16[1] & 0x1fff);
    VAR2->VAR18 = VAR21;
    return 1;
}