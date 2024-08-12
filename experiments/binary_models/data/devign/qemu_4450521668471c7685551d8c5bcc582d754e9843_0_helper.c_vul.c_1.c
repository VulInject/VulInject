static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5, target_ulong VAR6, int VAR7, int VAR8)
{
    unsigned int VAR9;
    uint64_t VAR10;
    int VAR11 = (VAR8 == VAR12 || VAR8 == VAR13);
    if ((VAR2->VAR14 & VAR15) == 0)
    {
        *VAR4 = FUN2(VAR6);
        *VAR5 = VAR16 | VAR17;
        return 0;
    }
    switch (VAR8)
    {
    case VAR12:
    case VAR18:
        VAR10 = VAR2->VAR19.VAR20 & 0x1fff;
        break;
    case VAR13:
    case VAR21:
        VAR10 = VAR2->VAR19.VAR22 & 0x1fff;
        break;
    case VAR23:
        VAR10 = 0;
        break;
    }
    for (VAR9 = 0; VAR9 < 64; VAR9++)
    {
        if (FUN3(&VAR2->VAR24[VAR9], VAR6, VAR10, VAR4))
        {
            if (((VAR2->VAR24[VAR9].VAR25 & 0x4) && VAR11) || (!(VAR2->VAR24[VAR9].VAR25 & 0x2) && (VAR7 == 1)))
            {
                uint8_t VAR26 = 0;
                if ((VAR2->VAR24[VAR9].VAR25 & 0x4) && VAR11)
                {
                    VAR26 |= 1;
                }
                if (VAR2->VAR19.VAR27 & 1)
                    VAR2->VAR19.VAR27 = 2;
                VAR2->VAR19.VAR27 |= (VAR11 << 3) | ((VAR7 == 1) << 2) | 1;
                VAR2->VAR19.VAR27 |= (VAR26 << 7);
                VAR2->VAR19.VAR28 = VAR6;
                VAR2->VAR29 = VAR30;
                FUN4("" VAR31 "", VAR6);
                return 1;
            }
            *VAR5 = VAR16;
            if (VAR2->VAR24[VAR9].VAR25 & 0x2)
                *VAR5 |= VAR17;
            FUN5(VAR2->VAR24[VAR9].VAR25);
            return 0;
        }
    }
    FUN4("" VAR31 "", VAR6);
    VAR2->VAR19.VAR32 = (VAR6 & ~0x1fffULL) | VAR10;
    VAR2->VAR29 = VAR33;
    return 1;