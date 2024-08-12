static int FUN1(VAR1 *VAR2, int32_t VAR3[64], const VAR4 *VAR5, int *VAR6, int VAR7[64], int VAR8)
{
    int VAR9[128];
    int VAR10[128];
    int VAR11, VAR12, VAR13, VAR14, VAR15;
    int VAR16 = 64, VAR17 = 64, VAR18;
    int VAR19 = 0;
    int VAR20;
    VAR9[VAR17] = 4;
    VAR10[VAR17++] = 0;
    VAR9[VAR17] = 24;
    VAR10[VAR17++] = 0;
    VAR9[VAR17] = 44;
    VAR10[VAR17++] = 0;
    VAR9[VAR17] = 1;
    VAR10[VAR17++] = 3;
    VAR9[VAR17] = 2;
    VAR10[VAR17++] = 3;
    VAR9[VAR17] = 3;
    VAR10[VAR17++] = 3;
    for (VAR13 = FUN2(VAR2, 4) - 1; VAR13 >= 0; VAR13--)
    {
        VAR18 = VAR16;
        while (VAR18 < VAR17)
        {
            if (!(VAR10[VAR18] | VAR9[VAR18]) || !FUN3(VAR2))
            {
                VAR18++;
                continue;
            }
            VAR14 = VAR9[VAR18];
            VAR15 = VAR10[VAR18];
            switch (VAR15)
            {
            case 0:
                VAR9[VAR18] = VAR14 + 4;
                VAR10[VAR18] = 1;
            case 2:
                if (VAR15 == 2)
                {
                    VAR9[VAR18] = 0;
                    VAR10[VAR18++] = 0;
                }
                for (VAR11 = 0; VAR11 < 4; VAR11++, VAR14++)
                {
                    if (FUN3(VAR2))
                    {
                        VAR9[--VAR16] = VAR14;
                        VAR10[VAR16] = 3;
                    }
                    else
                    {
                        if (!VAR13)
                        {
                            VAR12 = 1 - (FUN3(VAR2) << 1);
                        }
                        else
                        {
                            VAR12 = FUN2(VAR2, VAR13) | 1 << VAR13;
                            VAR12 = FUN4(VAR2, VAR12);
                        }
                        VAR3[VAR5[VAR14]] = VAR12;
                        VAR7[VAR19++] = VAR14;
                    }
                }
                break;
            case 1:
                VAR10[VAR18] = 2;
                for (VAR11 = 0; VAR11 < 3; VAR11++)
                {
                    VAR14 += 4;
                    VAR9[VAR17] = VAR14;
                    VAR10[VAR17++] = 2;
                }
                break;
            case 3:
                if (!VAR13)
                {
                    VAR12 = 1 - (FUN3(VAR2) << 1);
                }
                else
                {
                    VAR12 = FUN2(VAR2, VAR13) | 1 << VAR13;
                    VAR12 = FUN4(VAR2, VAR12);
                }
                VAR3[VAR5[VAR14]] = VAR12;
                VAR7[VAR19++] = VAR14;
                VAR9[VAR18] = 0;
                VAR10[VAR18++] = 0;
                break;
            }
        }
    }
    if (VAR8 == -1)
    {
        VAR20 = FUN2(VAR2, 4);
    }
    else
    {
        VAR20 = VAR8;
    }
    if (VAR20 >= 16)
        return VAR21;
    *VAR6 = VAR19;
    return VAR20;
}