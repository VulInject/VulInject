static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, void *VAR6)
{
    VAR7 *VAR8 = VAR6;
    int VAR9, VAR10;
    int VAR11 = FUN2(VAR2->VAR12, 64);
    VAR3 *VAR13;
    VAR3 *VAR14 = VAR4;
    if (VAR5 < 4 * VAR11 * VAR2->VAR15)
    {
        FUN3(VAR2, VAR16, "");
        return FUN4(VAR17);
    }
    VAR2->VAR18->VAR19 = 0;
    VAR2->VAR18->VAR20 = 1;
    VAR2->VAR18->VAR21 = VAR22;
    VAR13 = VAR8->VAR6[0];
    for (VAR9 = 0; VAR9 < VAR2->VAR15; VAR9++)
    {
        VAR23 *VAR24 = (VAR23 *)VAR13;
        for (VAR10 = 0; VAR10 < VAR2->VAR12; VAR10++)
        {
            uint32_t VAR25;
            uint16_t VAR26 = *VAR24++ >> 6;
            uint16_t VAR27 = *VAR24++ >> 6;
            uint16_t VAR28 = *VAR24++ >> 4;
            if (VAR2->VAR29 == VAR30)
                VAR25 = (VAR26 << 20) | (VAR27 << 10) | VAR28 >> 2;
            else
                VAR25 = (VAR26 << 22) | (VAR27 << 12) | VAR28;
            if (VAR2->VAR29 == VAR31)
                FUN5(&VAR14, VAR25);
            else
                FUN6(&VAR14, VAR25);
        }
        VAR14 += (VAR11 - VAR2->VAR12) * 4;
        VAR13 += VAR8->VAR32[0];
    }
    return 4 * VAR11 * VAR2->VAR15;
}