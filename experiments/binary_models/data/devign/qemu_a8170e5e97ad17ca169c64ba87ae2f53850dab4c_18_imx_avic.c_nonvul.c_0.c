static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    FUN2("", VAR3 >> 2);
    switch (VAR3 >> 2)
    {
    case 0:
        return VAR6->VAR7;
    case 1:
        return VAR6->VAR8;
    case 2:
    case 3:
        return 0;
    case 4:
        return VAR6->VAR9 >> 32;
    case 5:
        return VAR6->VAR9 & 0xffffffffULL;
    case 6:
        return VAR6->VAR10 >> 32;
    case 7:
        return VAR6->VAR10 & 0xffffffffULL;
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
        return VAR6->VAR11[15 - (VAR3 >> 2)];
    case 16:
    {
        uint64_t VAR12 = VAR6->VAR13 & VAR6->VAR9 & ~VAR6->VAR10;
        int VAR14;
        int VAR11 = -1;
        int VAR15 = -1;
        for (VAR14 = 63; VAR14 >= 0; --VAR14)
        {
            if (VAR12 & (1ULL << VAR14))
            {
                int VAR16 = FUN3(VAR6, VAR14);
                if (VAR16 > VAR11)
                {
                    VAR15 = VAR14;
                    VAR11 = VAR16;
                }
            }
        }
        if (VAR15 >= 0)
        {
            FUN4(VAR6, VAR15, 0);
            return VAR15 << 16 | VAR11;
        }
        return 0xffffffffULL;
    }
    case 17:
    {
        uint64_t VAR12 = VAR6->VAR13 & VAR6->VAR9 & VAR6->VAR10;
        int VAR14 = FUN5(VAR12);
        if (VAR14 < 64)
        {
            FUN4(VAR2, VAR14, 0);
            return VAR14;
        }
        return 0xffffffffULL;
    }
    case 18:
        return VAR6->VAR13 >> 32;
    case 19:
        return VAR6->VAR13 & 0xffffffffULL;
    case 20:
    case 21:
        return 0;
    case 22:
        return (VAR6->VAR13 & VAR6->VAR9 & ~VAR6->VAR10) >> 32;
    case 23:
        return (VAR6->VAR13 & VAR6->VAR9 & ~VAR6->VAR10) & 0xffffffffULL;
    case 24:
        return (VAR6->VAR13 & VAR6->VAR9 & VAR6->VAR10) >> 32;
    case 25:
        return (VAR6->VAR13 & VAR6->VAR9 & VAR6->VAR10) & 0xffffffffULL;
    case 0x40:
        return 0x4;
    default:
        FUN6("", (int)VAR3);
        return 0;
    }
}