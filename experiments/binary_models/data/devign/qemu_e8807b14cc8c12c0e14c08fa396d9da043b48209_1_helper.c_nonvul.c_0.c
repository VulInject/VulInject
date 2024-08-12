static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5, target_ulong VAR6, int VAR7)
{
    target_ulong VAR8;
    unsigned int VAR9;
    if ((VAR2->VAR10 & VAR11) == 0 || (VAR2->VAR12 & VAR13) != 0)
    {
        *VAR4 = FUN2(VAR6);
        *VAR5 = VAR14;
        return 0;
    }
    for (VAR9 = 0; VAR9 < 64; VAR9++)
    {
        switch ((VAR2->VAR15[VAR9] >> 61) & 3)
        {
        default:
        case 0x0:
            VAR8 = 0xffffffffffffe000ULL;
            break;
        case 0x1:
            VAR8 = 0xffffffffffff0000ULL;
            break;
        case 0x2:
            VAR8 = 0xfffffffffff80000ULL;
            break;
        case 0x3:
            VAR8 = 0xffffffffffc00000ULL;
            break;
        }
        if (VAR2->VAR16[1] == (VAR2->VAR17[VAR9] & 0x1fff) && (VAR6 & VAR8) == (VAR2->VAR17[VAR9] & VAR8) && (VAR2->VAR15[VAR9] & 0x8000000000000000ULL))
        {
            if ((VAR2->VAR15[VAR9] & 0x4) && VAR7)
            {
                if (VAR2->VAR18[3])
                    VAR2->VAR18[3] = 2;
                VAR2->VAR18[3] |= (VAR7 << 3) | 1;
                VAR2->VAR19 = VAR20;
                FUN3("" VAR21 "", VAR6);
                return 1;
            }
            *VAR4 = ((VAR2->VAR15[VAR9] & VAR8) | (VAR6 & ~VAR8)) & 0x1ffffffe000ULL;
            *VAR5 = VAR14;
            return 0;
        }
    }
    FUN3("" VAR21 "", VAR6);
    VAR2->VAR18[6] = (VAR6 & ~0x1fffULL) | (VAR2->VAR16[1] & 0x1fff);
    VAR2->VAR19 = VAR22;
    return 1;
}