static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR1 *VAR8 = VAR6->VAR9[0];
    VAR10 *VAR11 = VAR6->VAR12;
    VAR3 *VAR13 = VAR11->VAR13;
    int VAR14, VAR15, VAR16, VAR17, VAR18 = VAR11->VAR19 == VAR20 ? VAR11->VAR21 : VAR11->VAR22;
    FUN2(VAR11, VAR18);
    VAR6->VAR23->FUN3(VAR6, VAR24, NULL, NULL, VAR11->VAR25);
    for (VAR17 = 0; VAR17 < VAR18 * 3; VAR17++)
    {
        VAR11->VAR26[VAR17] += VAR11->VAR27[0][VAR17];
        for (VAR16 = 1; VAR16 < VAR11->VAR25; VAR16++)
        {
            VAR11->VAR26[VAR17] += VAR11->VAR27[VAR16][VAR17];
        }
    }
    FUN4(VAR11->VAR13);
    if (VAR11->VAR19 == VAR20)
    {
        if (VAR11->VAR28 == VAR29)
        {
            for (VAR15 = 0; VAR15 < 3; VAR15++)
            {
                for (VAR17 = 0; VAR17 < VAR11->VAR21; VAR17++)
                {
                    VAR30 *VAR31 = VAR13->VAR32[VAR15] + VAR17 * VAR13->VAR33[VAR15];
                    memmove(VAR31, VAR31 + 1, VAR11->VAR22 - 1);
                }
            }
            VAR11->VAR34 = VAR11->VAR22 - 1;
        }
        else if (VAR11->VAR28 == VAR35)
        {
            for (VAR15 = 0; VAR15 < 3; VAR15++)
            {
                for (VAR17 = 0; VAR17 < VAR11->VAR21; VAR17++)
                {
                    VAR30 *VAR31 = VAR13->VAR32[VAR15] + VAR17 * VAR13->VAR33[VAR15];
                    memmove(VAR31 + 1, VAR31, VAR11->VAR22 - 1);
                }
            }
            VAR11->VAR34 = 0;
        }
        for (VAR15 = 0; VAR15 < 3; VAR15++)
        {
            VAR30 *VAR31 = VAR13->VAR32[VAR15] + VAR11->VAR36 + (VAR8->VAR21 - 1 - VAR11->VAR37) * VAR13->VAR33[VAR15] + VAR11->VAR34;
            for (VAR17 = 0; VAR17 < VAR11->VAR21; VAR17++)
            {
                *VAR31 = FUN5(FUN6(VAR11->VAR26[3 * VAR17 + VAR15], 0, 255));
                VAR31 -= VAR13->VAR33[VAR15];
            }
        }
    }
    else
    {
        if (VAR11->VAR28 == VAR29)
        {
            for (VAR15 = 0; VAR15 < 3; VAR15++)
            {
                for (VAR17 = 1; VAR17 < VAR11->VAR21; VAR17++)
                {
                    memmove(VAR13->VAR32[VAR15] + (VAR17 - 1) * VAR13->VAR33[VAR15], VAR13->VAR32[VAR15] + (VAR17)*VAR13->VAR33[VAR15], VAR11->VAR22);
                }
            }
            VAR11->VAR34 = VAR11->VAR21 - 1;
        }
        else if (VAR11->VAR28 == VAR35)
        {
            for (VAR15 = 0; VAR15 < 3; VAR15++)
            {
                for (VAR17 = VAR11->VAR21 - 1; VAR17 >= 1; VAR17--)
                {
                    memmove(VAR13->VAR32[VAR15] + (VAR17)*VAR13->VAR33[VAR15], VAR13->VAR32[VAR15] + (VAR17 - 1) * VAR13->VAR33[VAR15], VAR11->VAR22);
                }
            }
            VAR11->VAR34 = 0;
        }
        for (VAR15 = 0; VAR15 < 3; VAR15++)
        {
            VAR30 *VAR31 = VAR13->VAR32[VAR15] + VAR11->VAR36 + (VAR11->VAR34 + VAR11->VAR37) * VAR13->VAR33[VAR15];
            for (VAR16 = 0; VAR16 < VAR11->VAR22; VAR16++)
            {
                *VAR31 = FUN5(FUN6(VAR11->VAR26[3 * VAR16 + VAR15], 0, 255));
                VAR31++;
            }
        }
    }
    if (VAR11->VAR28 != VAR38 || VAR11->VAR34 == 0)
        VAR13->VAR39 = VAR4->VAR39;
    VAR11->VAR34++;
    if (VAR11->VAR19 == VAR20 && VAR11->VAR34 >= VAR11->VAR22)
        VAR11->VAR34 = 0;
    if (VAR11->VAR19 == VAR40 && VAR11->VAR34 >= VAR11->VAR21)
        VAR11->VAR34 = 0;
    if (!VAR11->VAR41 && (VAR11->VAR28 != VAR38 || VAR11->VAR34 == 0))
    {
        VAR14 = FUN7(VAR8, FUN8(VAR11->VAR13));
        if (VAR14 < 0)
            return VAR14;
    }
    return VAR11->VAR42;
}