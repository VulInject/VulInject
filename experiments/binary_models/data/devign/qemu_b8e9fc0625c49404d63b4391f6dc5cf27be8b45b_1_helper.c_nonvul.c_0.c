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
    default:
        VAR10 = 0;
        break;
    }
    for (VAR9 = 0; VAR9 < 64; VAR9++)
    {
        if (FUN3(&VAR2->VAR24[VAR9], VAR6, VAR10, VAR4))
        {
            uint8_t VAR25 = 0;
            if ((VAR2->VAR24[VAR9].VAR26 & 0x4) && VAR11)
            {
                VAR25 |= 1;
                VAR2->VAR27 = VAR28;
                FUN4("" VAR29 "" VAR29 "", VAR6, VAR10, VAR8, VAR2->VAR30);
            }
            else if (!(VAR2->VAR24[VAR9].VAR26 & 0x2) && (VAR7 == 1))
            {
                VAR2->VAR27 = VAR31;
                FUN4("" VAR29 "" VAR29 "", VAR6, VAR10, VAR8, VAR2->VAR30);
            }
            else
            {
                *VAR5 = VAR16;
                if (VAR2->VAR24[VAR9].VAR26 & 0x2)
                    *VAR5 |= VAR17;
                FUN5(VAR2->VAR24[VAR9].VAR26);
                return 0;
            }
            if (VAR2->VAR19.VAR32 & 1)
                VAR2->VAR19.VAR32 = 2;
            VAR2->VAR19.VAR32 |= (VAR11 << 3) | ((VAR7 == 1) << 2) | 1;
            VAR2->VAR19.VAR32 |= (VAR25 << 7);
            VAR2->VAR19.VAR33 = VAR6;
            return 1;
        }
    }
    FUN4("" VAR29 "" VAR29 "", VAR6, VAR10);
    VAR2->VAR19.VAR34 = (VAR6 & ~0x1fffULL) | VAR10;
    VAR2->VAR27 = VAR35;
    return 1;
}