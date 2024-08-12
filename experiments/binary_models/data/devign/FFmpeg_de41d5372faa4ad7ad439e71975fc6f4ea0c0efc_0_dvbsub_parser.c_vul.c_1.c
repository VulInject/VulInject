static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 **VAR6, int *VAR7, const VAR5 *VAR8, int VAR9)
{
    VAR10 *VAR11 = VAR2->VAR12;
    VAR5 *VAR13, *VAR14;
    int VAR15, VAR16, VAR17 = 0;
    FUN2(VAR4, "" VAR18 "" VAR18 "" VAR18 "", VAR2->VAR19, VAR2->VAR20, VAR2->VAR21[VAR2->VAR22]);
    for (VAR15 = 0; VAR15 < VAR9; VAR15++)
    {
        FUN2(VAR4, "", VAR8[VAR15]);
        if (VAR15 % 16 == 15)
            FUN2(VAR4, "");
    }
    if (VAR15 % 16 != 0)
        FUN2(VAR4, "");
    *VAR6 = NULL;
    *VAR7 = 0;
    VAR2->VAR23 = 1;
    if (VAR2->VAR20 != VAR2->VAR19 && VAR2->VAR19 != VAR24)
    {
        if (VAR11->VAR25 != VAR11->VAR26)
        {
            FUN2(VAR4, "", VAR11->VAR25 - VAR11->VAR26);
        }
        VAR11->VAR26 = 0;
        VAR11->VAR25 = 0;
        if (VAR9 < 2 || VAR8[0] != 0x20 || VAR8[1] != 0x00)
        {
            FUN2(VAR4, "");
            return -1;
        }
        VAR17 = 2;
        VAR11->VAR27 = 1;
    }
    else
    {
        if (VAR11->VAR26 != 0)
        {
            if (VAR11->VAR25 != VAR11->VAR26)
            {
                memmove(VAR11->VAR28, VAR11->VAR28 + VAR11->VAR26, VAR11->VAR25 - VAR11->VAR26);
                VAR11->VAR25 -= VAR11->VAR26;
                VAR11->VAR26 = 0;
            }
            else
            {
                VAR11->VAR26 = 0;
                VAR11->VAR25 = 0;
            }
        }
    }
    if (VAR9 - VAR17 + VAR11->VAR25 > VAR29)
        return -1;
    if (VAR11->VAR27 == 0)
        return VAR9;
    memcpy(VAR11->VAR28 + VAR11->VAR25, VAR8 + VAR17, VAR9 - VAR17);
    VAR11->VAR25 += VAR9 - VAR17;
    VAR13 = VAR11->VAR28;
    VAR14 = VAR11->VAR28 + VAR11->VAR25;
    while (VAR13 < VAR14)
    {
        if (*VAR13 == 0x0f)
        {
            if (VAR13 + 6 <= VAR14)
            {
                VAR16 = FUN3(VAR13 + 4);
                if (VAR13 + VAR16 + 6 <= VAR14)
                {
                    *VAR7 += VAR16 + 6;
                    VAR13 += VAR16 + 6;
                }
                else
                    break;
            }
            else
                break;
        }
        else if (*VAR13 == 0xff)
        {
            if (VAR13 + 1 < VAR14)
            {
                FUN2(VAR4, "");
            }
            VAR11->VAR25 = VAR13 - VAR11->VAR28;
            VAR11->VAR27 = 0;
            break;
        }
        else
        {
            FUN4(VAR4, VAR30, "");
            VAR11->VAR25 = VAR13 - VAR11->VAR28;
            VAR11->VAR27 = 0;
            break;
        }
    }
    if (*VAR7 > 0)
    {
        *VAR6 = VAR11->VAR28;
        VAR11->VAR26 = *VAR7;
    }
    if (VAR2->VAR19 == VAR24)
        VAR2->VAR19 = VAR2->VAR20;
    return VAR9;
}