static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8->VAR9;
    VAR10 *VAR11 = VAR2->VAR12;
    VAR13 *VAR14;
    int VAR15, VAR16, VAR17;
    if (VAR7->VAR18 < 65536)
    {
        for (VAR15 = 0; VAR15 < VAR4; VAR15++)
        {
            VAR14 = VAR11->VAR19[0] + (VAR3 + VAR15) * VAR11->VAR20[0];
            for (VAR16 = 0; VAR16 < VAR2->VAR21 * VAR7->VAR22; VAR16++)
            {
                *VAR14 = (*VAR14 * VAR7->VAR18 + 32768) >> 16;
                VAR14++;
            }
        }
        if (VAR11->VAR19[1] && VAR11->VAR19[2])
        {
            for (VAR17 = 1; VAR17 < 3; VAR17++)
            {
                for (VAR15 = 0; VAR15 < VAR4; VAR15++)
                {
                    VAR14 = VAR11->VAR19[VAR17] + ((VAR3 + VAR15) >> VAR7->VAR23) * VAR11->VAR20[VAR17];
                    for (VAR16 = 0; VAR16 < VAR2->VAR21 >> VAR7->VAR24; VAR16++)
                    {
                        *VAR14 = ((*VAR14 - 128) * VAR7->VAR18 + 8421367) >> 16;
                        VAR14++;
                    }
                }
            }
        }
    }
    FUN2(VAR2->VAR8->VAR25[0], VAR3, VAR4, VAR5);
}