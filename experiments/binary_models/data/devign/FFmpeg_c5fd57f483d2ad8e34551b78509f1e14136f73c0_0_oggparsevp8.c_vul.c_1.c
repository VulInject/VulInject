static int FUN1(VAR1 *VAR2, int VAR3)
{
    struct VAR4 *VAR4 = VAR2->VAR5;
    struct VAR6 *VAR7 = VAR4->VAR8 + VAR3;
    VAR9 *VAR10 = VAR7->VAR11 + VAR7->VAR12;
    if ((!VAR7->VAR13 || VAR7->VAR13 == VAR14) && !(VAR7->VAR15 & VAR16))
    {
        int VAR17;
        int VAR18;
        VAR9 *VAR19 = VAR10;
        VAR9 *VAR20;
        VAR17 = VAR7->VAR21;
        VAR18 = (VAR19[0] >> 4) & 1;
        VAR20 = VAR19 += VAR7->VAR22;
        for (; VAR17 < VAR7->VAR23; VAR17++)
        {
            if (VAR7->VAR24[VAR17] < 255)
            {
                VAR18 += (VAR19[0] >> 4) & 1;
                VAR19 = VAR20 + VAR7->VAR24[VAR17];
            }
            VAR20 += VAR7->VAR24[VAR17];
        }
        VAR7->VAR13 = VAR7->VAR25 = FUN2(VAR2, VAR3, VAR7->VAR26, NULL) - VAR18;
        if (VAR2->VAR8[VAR3]->VAR27 == VAR14)
        {
            VAR2->VAR8[VAR3]->VAR27 = VAR7->VAR13;
            if (VAR2->VAR8[VAR3]->VAR18)
                VAR2->VAR8[VAR3]->VAR18 -= VAR2->VAR8[VAR3]->VAR27;
        }
    }
    if (VAR7->VAR22 > 0)
        VAR7->VAR28 = (VAR10[0] >> 4) & 1;
    return 0;
}