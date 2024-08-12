static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5;
    for (VAR3 = !VAR2->VAR6; VAR3 <= VAR2->VAR7; VAR3++)
    {
        VAR8 *VAR9 = VAR2->VAR9[VAR3];
        VAR8 *VAR10 = VAR2->VAR11[0].VAR10[VAR3];
        int VAR12;
        VAR9[0] = VAR13;
        VAR10 += VAR14;
        for (VAR4 = 1; VAR4 < VAR15; VAR4++, VAR10 += VAR14)
        {
            if (VAR3 == VAR16)
            {
                if (!VAR2->VAR11[VAR4 - 1].VAR17)
                {
                    VAR9[VAR4] = VAR13;
                    continue;
                }
                else if (!VAR2->VAR11[VAR4].VAR17)
                {
                    VAR9[VAR4] = VAR18;
                    continue;
                }
            }
            else if (VAR2->VAR11[VAR4].VAR19[VAR3] != VAR2->VAR11[VAR4 - 1].VAR19[VAR3])
            {
                VAR9[VAR4] = VAR13;
                continue;
            }
            VAR12 = VAR2->VAR20.VAR21[0](NULL, VAR10, VAR10 - VAR14, 16, 16);
            VAR9[VAR4] = VAR18;
            if (VAR3 == VAR16 && VAR12 > (VAR22 * (VAR2->VAR11[VAR4].VAR23[VAR3] - VAR2->VAR24[VAR3]) / VAR14))
                VAR9[VAR4] = VAR13;
            else if (VAR3 > VAR16 && VAR12 > VAR22)
                VAR9[VAR4] = VAR13;
        }
        VAR4 = 0;
        while (VAR4 < VAR15)
        {
            VAR5 = VAR4 + 1;
            while (VAR5 < VAR15 && VAR9[VAR5] == VAR18)
                VAR5++;
            switch (VAR5 - VAR4)
            {
            case 1:
                VAR9[VAR4] = VAR25;
                break;
            case 2:
            case 3:
                VAR9[VAR4] = VAR26;
                break;
            default:
                VAR9[VAR4] = VAR27;
                break;
            }
            VAR4 = VAR5;
        }
    }
    if (VAR2->VAR28)
    {
        VAR3 = VAR2->VAR29;
        VAR2->VAR9[VAR3][0] = VAR27;
        for (VAR4 = 1; VAR4 < VAR15; VAR4++)
            VAR2->VAR9[VAR3][VAR4] = VAR18;
    }
    if (VAR30 && VAR2->VAR31)
        FUN2(VAR2);
}