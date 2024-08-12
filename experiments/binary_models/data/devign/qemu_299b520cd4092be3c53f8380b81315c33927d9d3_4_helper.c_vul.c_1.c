static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5, target_ulong VAR6, int VAR7)
{
    unsigned int VAR8;
    uint64_t VAR9;
    int VAR10;
    if ((VAR2->VAR11 & VAR12) == 0 || (VAR2->VAR13 & VAR14) != 0)
    {
        *VAR4 = FUN2(VAR6);
        *VAR5 = VAR15;
        return 0;
    }
    VAR9 = VAR2->VAR16.VAR17 & 0x1fff;
    VAR10 = VAR2->VAR18 > 0;
    for (VAR8 = 0; VAR8 < 64; VAR8++)
    {
        if (FUN3(&VAR2->VAR19[VAR8], VAR6, VAR9, VAR4, VAR10))
        {
            if ((VAR2->VAR19[VAR8].VAR20 & 0x4) && VAR7)
            {
                if (VAR2->VAR21.VAR22)
                    VAR2->VAR21.VAR22 = 2;
                VAR2->VAR21.VAR22 |= (VAR7 << 3) | 1;
                VAR2->VAR23 = VAR24;
                FUN4("" VAR25 "", VAR6);
                return 1;
            }
            *VAR5 = VAR15;
            FUN5(VAR2->VAR19[VAR8].VAR20);
            return 0;
        }
    }
    FUN4("" VAR25 "", VAR6);
    VAR2->VAR21.VAR26 = (VAR6 & ~0x1fffULL) | VAR9;
    VAR2->VAR23 = VAR27;
    return 1;
}