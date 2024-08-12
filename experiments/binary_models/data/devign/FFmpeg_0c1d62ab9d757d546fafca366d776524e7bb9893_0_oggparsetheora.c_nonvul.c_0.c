static int FUN1(VAR1 *VAR2, int VAR3)
{
    struct VAR4 *VAR4 = VAR2->VAR5;
    struct VAR6 *VAR7 = VAR4->VAR8 + VAR3;
    int VAR9;
    if ((!VAR7->VAR10 || VAR7->VAR10 == VAR11) && !(VAR7->VAR12 & VAR13))
    {
        int VAR14;
        VAR9 = 1;
        for (VAR14 = VAR7->VAR15; VAR14 < VAR7->VAR16; VAR14++)
        {
            if (VAR7->VAR17[VAR14] < 255)
                VAR9++;
        }
        VAR7->VAR10 = VAR7->VAR18 = FUN2(VAR2, VAR3, VAR7->VAR19, NULL) - VAR9;
        if (VAR2->VAR8[VAR3]->VAR20 == VAR11)
        {
            VAR2->VAR8[VAR3]->VAR20 = VAR7->VAR10;
            if (VAR2->VAR8[VAR3]->VAR9 > 0)
                VAR2->VAR8[VAR3]->VAR9 -= VAR2->VAR8[VAR3]->VAR20;
        }
    }
    if (VAR7->VAR21 > 0)
    {
        VAR7->VAR22 = 1;
    }
    return 0;
}