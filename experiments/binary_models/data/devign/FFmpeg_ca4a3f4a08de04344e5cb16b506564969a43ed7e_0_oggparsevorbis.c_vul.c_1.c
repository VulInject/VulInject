static int FUN1(VAR1 *VAR2, int VAR3)
{
    struct VAR4 *VAR4 = VAR2->VAR5;
    struct VAR6 *VAR7 = VAR4->VAR8 + VAR3;
    struct VAR9 *VAR10 = VAR7->private;
    int VAR11;
    if (!VAR7->VAR12)
    {
        int VAR13;
        VAR14 *VAR15 = VAR7->VAR16 + VAR7->VAR17;
        VAR14 *VAR18 = VAR15;
        int VAR19 = 0;
        FUN2(&VAR10->VAR20);
        VAR11 = 0;
        for (VAR13 = 0; VAR13 < VAR7->VAR21; VAR13++)
        {
            if (VAR7->VAR22[VAR13] < 255)
            {
                int VAR23 = FUN3(&VAR10->VAR20, VAR15, 1);
                if (VAR23 < 0)
                {
                    VAR11 = VAR7->VAR24;
                    break;
                }
                if (!VAR11)
                    VAR19 = VAR23;
                VAR11 += VAR23;
                VAR15 = VAR18 + VAR7->VAR22[VAR13];
            }
            VAR18 += VAR7->VAR22[VAR13];
        }
        VAR7->VAR12 = VAR7->VAR25 = VAR7->VAR24 - VAR11;
        VAR2->VAR8[VAR3]->VAR26 = VAR7->VAR12 + VAR19;
        if (VAR2->VAR8[VAR3]->VAR11)
            VAR2->VAR8[VAR3]->VAR11 -= VAR2->VAR8[VAR3]->VAR26;
        VAR2->VAR8[VAR3]->VAR27 = VAR28;
        VAR10->VAR29 = VAR28;
        FUN2(&VAR10->VAR20);
    }
    if (VAR7->VAR30 > 0)
    {
        VAR11 = FUN3(&VAR10->VAR20, VAR7->VAR16 + VAR7->VAR17, 1);
        if (VAR11 <= 0)
        {
            VAR7->VAR31 |= VAR32;
            return 0;
        }
        VAR7->VAR33 = VAR11;
    }
    if (VAR7->VAR34 & VAR35)
    {
        if (VAR7->VAR12 != VAR28)
        {
            VAR10->VAR29 = VAR7->VAR12;
            VAR10->VAR36 = 0;
        }
        if (VAR7->VAR37 == VAR7->VAR21)
            VAR7->VAR33 = VAR7->VAR24 - VAR10->VAR29 - VAR10->VAR36;
        VAR10->VAR36 += VAR7->VAR33;
    }
    return 0;
}