static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7, int VAR8, VAR9 *VAR10, VAR9 *VAR11)
{
    int VAR12 = VAR10->VAR13 * VAR6 / VAR2->VAR14;
    int VAR15 = VAR10->VAR13 * (VAR6 + 1) / VAR2->VAR14;
    int VAR16 = VAR10->VAR17 * VAR7 / VAR2->VAR18;
    int VAR19 = VAR10->VAR17 * (VAR7 + 1) / VAR2->VAR18;
    int VAR20, VAR21;
    VAR22 *VAR23 = VAR10->VAR24 + VAR16 * VAR10->VAR25;
    VAR22 *VAR26 = VAR11 ? VAR11->VAR24 + VAR16 * VAR11->VAR25 : NULL;
    int VAR27, VAR28;
    if (VAR5 > VAR29)
    {
        FUN2(VAR2->VAR30, VAR31, "", VAR5);
        return;
    }
    VAR20 = VAR32[VAR5];
    VAR21 = VAR33[VAR5] + 2;
    if (FUN3(VAR4) >= VAR8)
        return;
    if (VAR2->VAR34)
    {
        for (VAR28 = VAR16; VAR28 < VAR19; VAR28++)
        {
            for (VAR27 = VAR12; VAR27 < VAR15; VAR27++)
            {
                FUN4(VAR35, VAR27, VAR4, VAR8, VAR23, VAR26);
            }
            VAR23 += VAR10->VAR25;
            if (VAR26)
                VAR26 += VAR11->VAR25;
        }
    }
    else
    {
        for (VAR28 = VAR16; VAR28 < VAR19; VAR28++)
        {
            for (VAR27 = VAR12; VAR27 < VAR15; VAR27++)
            {
                FUN4(VAR36, VAR27, VAR4, VAR8, VAR23, VAR26);
            }
            VAR23 += VAR10->VAR25;
            if (VAR26)
                VAR26 += VAR11->VAR25;
        }
    }
}