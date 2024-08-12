static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR5;
    int VAR6, VAR7;
    int VAR8 = 0;
    if (VAR2->VAR9)
    {
        if (VAR2->VAR10 > VAR11)
        {
            VAR8++;
            for (VAR6 = 1; VAR6 < VAR12; VAR6++)
            {
                VAR13 *VAR14 = &VAR2->VAR15[VAR6];
                VAR8++;
                if (VAR14->VAR16)
                    VAR8++;
            }
        }
        if (VAR2->VAR17)
        {
            if (VAR2->VAR18)
            {
                VAR8 += 5 * VAR2->VAR17;
            }
            else
            {
                for (VAR6 = 0; VAR6 < VAR12; VAR6++)
                    VAR8 += 2 * VAR2->VAR15[VAR6].VAR19;
            }
        }
    }
    else
    {
        if (VAR4->VAR20)
            VAR8 += 7;
        if (VAR2->VAR21 == 6)
        {
            if (VAR4->VAR22)
                VAR8 += 14;
            if (VAR4->VAR23)
                VAR8 += 14;
        }
    }
    for (VAR6 = 0; VAR6 < VAR12; VAR6++)
    {
        VAR13 *VAR14 = &VAR2->VAR15[VAR6];
        if (!VAR2->VAR9)
            VAR8++;
        if (VAR14->VAR16)
        {
            if (!VAR2->VAR9)
                VAR8++;
            if (VAR14->VAR19)
            {
                if (VAR2->VAR9)
                    VAR8++;
                if (!VAR2->VAR9 || VAR2->VAR10 != VAR24)
                    VAR8 += VAR2->VAR25;
                if (VAR2->VAR10 == VAR24)
                    VAR8++;
                VAR8 += 4 + 4;
                if (VAR2->VAR9)
                    VAR8++;
                else
                    VAR8 += VAR2->VAR26 - 1;
            }
        }
        if (VAR14->VAR19)
        {
            for (VAR7 = 1; VAR7 <= VAR2->VAR25; VAR7++)
            {
                if (VAR14->VAR27[VAR7])
                {
                    if (!VAR2->VAR9 || VAR14->VAR28 != 2)
                        VAR8++;
                    if (VAR14->VAR28)
                    {
                        VAR8 += 2;
                        VAR8 += (4 + 4) * VAR2->VAR29;
                    }
                }
            }
        }
        if (VAR2->VAR10 == VAR24)
        {
            if (!VAR2->VAR9 || VAR6 > 0)
                VAR8++;
            if (VAR2->VAR15[VAR6].VAR30)
                VAR8 += VAR14->VAR31;
        }
        for (VAR7 = 1; VAR7 <= VAR2->VAR25; VAR7++)
        {
            if (VAR2->VAR32[VAR7][VAR6] != VAR33)
            {
                if (!VAR14->VAR27[VAR7])
                    VAR8 += 6;
                VAR8 += 2;
            }
        }
        if (!VAR2->VAR9 && VAR14->VAR19)
            VAR8 += 2;
        if (!VAR2->VAR9)
        {
            VAR8++;
            if (VAR14->VAR34)
                VAR8 += 6 + (VAR2->VAR35 + VAR14->VAR19) * (4 + 3);
        }
        if (VAR14->VAR19)
        {
            if (!VAR2->VAR9 || VAR14->VAR36 != 2)
                VAR8++;
            if (VAR14->VAR36)
                VAR8 += 3 + 3;
        }
    }
    VAR2->VAR8 = VAR2->VAR37 + VAR8;
}