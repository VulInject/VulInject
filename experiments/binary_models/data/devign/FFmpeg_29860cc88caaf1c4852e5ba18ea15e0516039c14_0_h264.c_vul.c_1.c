static int FUN1(VAR1 *VAR2)
{
    VAR3 *const VAR4 = &VAR2->VAR4;
    int VAR5;
    int VAR6 = -1;
    Picture VAR7[32];
    if (VAR2->VAR8 == VAR9)
    {
        int VAR10;
        int VAR11 = -1;
        for (VAR10 = 0; VAR10 < VAR2->VAR12; VAR10++)
        {
            int VAR13 = -1;
            int VAR14 = VAR15;
            for (VAR5 = 0; VAR5 < VAR2->VAR12; VAR5++)
            {
                const int VAR16 = VAR2->VAR17[VAR5]->VAR16;
                if (VAR16 > VAR11 && VAR16 < VAR14)
                {
                    VAR14 = VAR16;
                    VAR13 = VAR5;
                }
            }
            assert(VAR13 != -1);
            VAR11 = VAR14;
            VAR7[VAR10] = *VAR2->VAR17[VAR13];
            FUN2("", VAR13, VAR10, VAR7[VAR10].VAR16, VAR7[VAR10].VAR18);
            if (-1 == VAR6)
            {
                if (VAR2->VAR17[VAR13]->VAR16 >= VAR4->VAR19->VAR16)
                {
                    VAR6 = VAR10;
                }
            }
        }
    }
    if (VAR4->VAR20 == VAR21)
    {
        if (VAR2->VAR8 == VAR9)
        {
            int VAR22;
            FUN2("", VAR4->VAR19->VAR16, VAR6);
            for (VAR22 = 0; VAR22 < 2; VAR22++)
            {
                int VAR23 = 0;
                int VAR24 = -99;
                int VAR25 = VAR22 ? -1 : 1;
                for (VAR5 = 0; VAR5 < VAR2->VAR12 && VAR23 < VAR2->VAR26[VAR22]; VAR5++, VAR24 += VAR25)
                {
                    while (VAR24 < 0 || VAR24 >= VAR2->VAR12)
                    {
                        if (VAR24 != -99 && VAR25 == (VAR22 ? -1 : 1))
                            return -1;
                        VAR25 = -VAR25;
                        VAR24 = VAR6 + (VAR25 >> 1);
                    }
                    if (VAR7[VAR24].VAR27 != 3)
                        continue;
                    VAR2->VAR28[VAR22][VAR23] = VAR7[VAR24];
                    VAR2->VAR28[VAR22][VAR23++].VAR29 = VAR7[VAR24].VAR18;
                }
                for (VAR5 = 0; VAR5 < 16 && VAR23 < VAR2->VAR26[VAR22]; VAR5++)
                {
                    if (VAR2->VAR30[VAR5] == NULL)
                        continue;
                    if (VAR2->VAR30[VAR5]->VAR27 != 3)
                        continue;
                    VAR2->VAR28[VAR22][VAR23] = *VAR2->VAR30[VAR5];
                    VAR2->VAR28[VAR22][VAR23++].VAR29 = VAR5;
                    ;
                }
                if (VAR22 && (VAR6 <= 0 || VAR6 >= VAR2->VAR12) && (1 < VAR23))
                {
                    Picture VAR31 = VAR2->VAR28[1][0];
                    VAR2->VAR28[1][0] = VAR2->VAR28[1][1];
                    VAR2->VAR28[1][1] = VAR31;
                }
                if (VAR23 < VAR2->VAR26[VAR22])
                    memset(&VAR2->VAR28[VAR22][VAR23], 0, sizeof(VAR32) * (VAR2->VAR26[VAR22] - VAR23));
            }
        }
        else
        {
            int VAR23 = 0;
            for (VAR5 = 0; VAR5 < VAR2->VAR12; VAR5++)
            {
                if (VAR2->VAR17[VAR5]->VAR27 != 3)
                    continue;
                VAR2->VAR28[0][VAR23] = *VAR2->VAR17[VAR5];
                VAR2->VAR28[0][VAR23++].VAR29 = VAR2->VAR17[VAR5]->VAR18;
            }
            for (VAR5 = 0; VAR5 < 16; VAR5++)
            {
                if (VAR2->VAR30[VAR5] == NULL)
                    continue;
                if (VAR2->VAR30[VAR5]->VAR27 != 3)
                    continue;
                VAR2->VAR28[0][VAR23] = *VAR2->VAR30[VAR5];
                VAR2->VAR28[0][VAR23++].VAR29 = VAR5;
                ;
            }
            if (VAR23 < VAR2->VAR26[0])
                memset(&VAR2->VAR28[0][VAR23], 0, sizeof(VAR32) * (VAR2->VAR26[0] - VAR23));
        }
    }
    else
    {
        if (VAR2->VAR8 == VAR9)
        {
        }
        else
        {
        }
    }
    for (VAR5 = 0; VAR5 < VAR2->VAR26[0]; VAR5++)
    {
        FUN2("", (VAR2->VAR28[0][VAR5].VAR30 ? "" : ""), VAR2->VAR28[0][VAR5].VAR29, VAR2->VAR28[0][VAR5].VAR33[0]);
    }
    if (VAR2->VAR8 == VAR9)
    {
        for (VAR5 = 0; VAR5 < VAR2->VAR26[1]; VAR5++)
        {
            FUN2("", (VAR2->VAR28[1][VAR5].VAR30 ? "" : ""), VAR2->VAR28[1][VAR5].VAR29, VAR2->VAR28[0][VAR5].VAR33[0]);
        }
    }
    return 0;
}