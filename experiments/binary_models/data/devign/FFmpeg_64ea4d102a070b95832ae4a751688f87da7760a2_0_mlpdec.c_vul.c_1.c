static int FUN1(VAR1 *VAR2, unsigned int VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7 = &VAR2->VAR8[VAR3];
    unsigned int VAR9, VAR10;
    const int VAR11 = VAR2->VAR12->VAR13 == VAR14 ? VAR15 : VAR16;
    if (VAR2->VAR17++ > 1)
    {
        FUN2(VAR2->VAR12, VAR18, "");
        return VAR19;
    }
    VAR7->VAR20 = FUN3(VAR5, 4);
    if (VAR7->VAR20 > VAR11)
    {
        FUN2(VAR2->VAR12, VAR18, "", VAR11);
        return VAR19;
    }
    for (VAR9 = 0; VAR9 < VAR7->VAR20; VAR9++)
    {
        int VAR21, VAR22;
        VAR7->VAR23[VAR9] = FUN3(VAR5, 4);
        VAR21 = FUN3(VAR5, 4);
        VAR7->VAR24[VAR9] = FUN4(VAR5);
        if (VAR7->VAR23[VAR9] > VAR7->VAR25)
        {
            FUN2(VAR2->VAR12, VAR18, "", VAR7->VAR23[VAR9]);
            return VAR19;
        }
        if (VAR21 > 14)
        {
            FUN2(VAR2->VAR12, VAR18, "");
            return VAR19;
        }
        VAR22 = VAR7->VAR25;
        if (!VAR7->VAR26)
            VAR22 += 2;
        for (VAR10 = 0; VAR10 <= VAR22; VAR10++)
        {
            int VAR27 = 0;
            if (FUN4(VAR5))
                VAR27 = FUN5(VAR5, VAR21 + 2);
            VAR7->VAR28[VAR9][VAR10] = VAR27 * (1 << (14 - VAR21));
        }
        if (VAR7->VAR26)
            VAR7->VAR29[VAR9] = FUN3(VAR5, 4);
        else
            VAR7->VAR29[VAR9] = 0;
    }
    return 0;