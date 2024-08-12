static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7, int VAR8, VAR9 *VAR10, VAR9 *VAR11)
{
    int VAR12 = VAR10->VAR13 * VAR6 / VAR2->VAR14;
    int VAR15 = VAR10->VAR13 * (VAR6 + 1) / VAR2->VAR14;
    int VAR16 = VAR10->VAR17 * VAR7 / VAR2->VAR18;
    int VAR19 = VAR10->VAR17 * (VAR7 + 1) / VAR2->VAR18;
    int VAR20 = VAR21[VAR5 & 0x7f];
    int VAR22 = VAR23[VAR5 & 0x7f] + 2;
    VAR24 *VAR25 = VAR10->VAR26 + VAR16 * VAR10->VAR27;
    VAR24 *VAR28 = VAR11 ? VAR11->VAR26 + VAR16 * VAR11->VAR27 : NULL;
    int VAR29, VAR30;
    if (FUN2(VAR4) >= VAR8)
        return;
    if (VAR2->VAR31)
    {
        for (VAR30 = VAR16; VAR30 < VAR19; VAR30++)
        {
            for (VAR29 = VAR12; VAR29 < VAR15; VAR29++)
            {
                FUN3(VAR32, VAR29, VAR4, VAR8, VAR25, VAR28);
            }
            VAR25 += VAR10->VAR27;
            if (VAR28)
                VAR28 += VAR11->VAR27;
        }
    }
    else
    {
        for (VAR30 = VAR16; VAR30 < VAR19; VAR30++)
        {
            for (VAR29 = VAR12; VAR29 < VAR15; VAR29++)
            {
                FUN3(VAR33, VAR29, VAR4, VAR8, VAR25, VAR28);
            }
            VAR25 += VAR10->VAR27;
            if (VAR28)
                VAR28 += VAR11->VAR27;
        }
    }
}