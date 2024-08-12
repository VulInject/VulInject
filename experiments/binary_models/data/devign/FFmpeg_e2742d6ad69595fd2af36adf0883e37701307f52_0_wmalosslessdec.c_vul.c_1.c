static int FUN1(VAR1 *VAR2)
{
    uint16_t VAR3[VAR4] = {0};
    uint8_t VAR5[VAR4];
    int VAR6 = VAR2->VAR7;
    int VAR8 = 0;
    int VAR9 = 0;
    int VAR10, VAR11;
    for (VAR10 = 0; VAR10 < VAR2->VAR7; VAR10++)
        VAR2->VAR12[VAR10].VAR13 = 0;
    VAR11 = FUN2(&VAR2->VAR14);
    if (VAR2->VAR15 == 1 || VAR11)
        VAR8 = 1;
    do
    {
        int VAR16, VAR17 = 0;
        for (VAR10 = 0; VAR10 < VAR2->VAR7; VAR10++)
        {
            if (VAR3[VAR10] == VAR9)
            {
                if (VAR8 || VAR6 == 1 || (VAR9 == VAR2->VAR18 - VAR2->VAR19))
                {
                    VAR5[VAR10] = VAR17 = 1;
                }
                else
                {
                    if (FUN2(&VAR2->VAR14))
                        VAR5[VAR10] = VAR17 = 1;
                }
            }
            else
                VAR5[VAR10] = 0;
        }
        if (!VAR17)
        {
            FUN3(VAR2->VAR20, VAR21, "");
            return VAR22;
        }
        if ((VAR16 = FUN4(VAR2, VAR9)) <= 0)
            return VAR22;
        VAR9 += VAR16;
        for (VAR10 = 0; VAR10 < VAR2->VAR7; VAR10++)
        {
            VAR23 *VAR24 = &VAR2->VAR12[VAR10];
            if (VAR5[VAR10])
            {
                if (VAR24->VAR13 >= VAR25)
                {
                    FUN3(VAR2->VAR20, VAR21, "");
                    return VAR22;
                }
                VAR24->VAR16[VAR24->VAR13] = VAR16;
                VAR3[VAR10] += VAR16;
                ++VAR24->VAR13;
                if (VAR3[VAR10] > VAR2->VAR18)
                {
                    FUN3(VAR2->VAR20, VAR21, ""
                                                   "",
                           VAR3[VAR10], VAR2->VAR18);
                    return VAR22;
                }
            }
            else if (VAR3[VAR10] <= VAR9)
            {
                if (VAR3[VAR10] < VAR9)
                {
                    VAR6 = 0;
                    VAR9 = VAR3[VAR10];
                }
                ++VAR6;
            }
        }
    } while (VAR9 < VAR2->VAR18);
    for (VAR10 = 0; VAR10 < VAR2->VAR7; VAR10++)
    {
        int VAR26, VAR27 = 0;
        for (VAR26 = 0; VAR26 < VAR2->VAR12[VAR10].VAR13; VAR26++)
        {
            VAR2->VAR12[VAR10].VAR28[VAR26] = VAR27;
            VAR27 += VAR2->VAR12[VAR10].VAR16[VAR26];
        }
    }
    return 0;
}