static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5, target_ulong VAR6, int VAR7)
{
    unsigned int VAR8;
    uint64_t VAR9;
    int VAR10 = (VAR7 == VAR11 || VAR7 == VAR12);
    if ((VAR2->VAR13 & VAR14) == 0 || (VAR2->VAR15 & VAR16) != 0)
    {
        *VAR4 = FUN2(VAR6);
        *VAR5 = VAR17;
        return 0;
    }
    if (VAR2->VAR18 == 0)
    {
        VAR9 = VAR2->VAR19.VAR20 & 0x1fff;
    }
    else
    {
        VAR9 = 0;
    }
    for (VAR8 = 0; VAR8 < 64; VAR8++)
    {
        if (FUN3(&VAR2->VAR21[VAR8], VAR6, VAR9, VAR4))
        {
            if ((VAR2->VAR21[VAR8].VAR22 & 0x4) && VAR10)
            {
                if (VAR2->VAR23.VAR24)
                    VAR2->VAR23.VAR24 = 2;
                VAR2->VAR23.VAR24 |= (VAR10 << 3) | 1;
                VAR2->VAR25 = VAR26;
                FUN4("" VAR27 "" VAR27 "", VAR6, VAR9);
                return 1;
            }
            *VAR5 = VAR17;
            FUN5(VAR2->VAR21[VAR8].VAR22);
            return 0;
        }
    }
    FUN4("" VAR27 "" VAR27 "", VAR6, VAR9);
    VAR2->VAR23.VAR28 = (VAR6 & ~0x1fffULL) | VAR9;
    VAR2->VAR25 = VAR29;
    return 1;
}