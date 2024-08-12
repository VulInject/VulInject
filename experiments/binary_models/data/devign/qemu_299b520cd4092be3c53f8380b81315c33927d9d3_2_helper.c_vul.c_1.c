static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5, target_ulong VAR6, int VAR7, int VAR8)
{
    unsigned int VAR9;
    uint64_t VAR10;
    int VAR11;
    if ((VAR2->VAR12 & VAR13) == 0)
    {
        *VAR4 = FUN2(VAR6);
        *VAR5 = VAR14 | VAR15;
        return 0;
    }
    VAR10 = VAR2->VAR16.VAR17 & 0x1fff;
    VAR11 = VAR2->VAR18 > 0;
    for (VAR9 = 0; VAR9 < 64; VAR9++)
    {
        if (FUN3(&VAR2->VAR19[VAR9], VAR6, VAR10, VAR4, VAR11))
        {
            if (((VAR2->VAR19[VAR9].VAR20 & 0x4) && VAR8) || (!(VAR2->VAR19[VAR9].VAR20 & 0x2) && (VAR7 == 1)))
            {
                uint8_t VAR21 = 0;
                if ((VAR2->VAR19[VAR9].VAR20 & 0x4) && VAR8)
                {
                    VAR21 |= 1;
                }
                if (VAR2->VAR16.VAR22 & 1)
                    VAR2->VAR16.VAR22 = 2;
                VAR2->VAR16.VAR22 |= (VAR8 << 3) | ((VAR7 == 1) << 2) | 1;
                VAR2->VAR16.VAR22 |= (VAR21 << 7);
                VAR2->VAR16.VAR23 = VAR6;
                VAR2->VAR24 = VAR25;
                FUN4("" VAR26 "", VAR6);
                return 1;
            }
            *VAR5 = VAR14;
            if (VAR2->VAR19[VAR9].VAR20 & 0x2)
                *VAR5 |= VAR15;
            FUN5(VAR2->VAR19[VAR9].VAR20);
            return 0;
        }
    }
    FUN4("" VAR26 "", VAR6);
    VAR2->VAR16.VAR27 = (VAR6 & ~0x1fffULL) | VAR10;
    VAR2->VAR24 = VAR28;
    return 1;
}