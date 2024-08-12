static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 **VAR6, int *VAR7, const VAR5 *VAR8, int VAR9)
{
    VAR10 *VAR11 = VAR2->VAR12;
    int VAR13 = VAR11->VAR14.VAR15;
    VAR5 *VAR16 = VAR11->VAR16;
    size_t VAR17 = VAR11->VAR17;
    VC1ParseSearchState VAR18 = VAR11->VAR18;
    int VAR19 = 0;
    int VAR20 = VAR21;
    int VAR22 = VAR11->VAR23;
    if (VAR13 && VAR9 == 0)
    {
        memset(VAR16 + VAR17, 0, VAR24 - VAR17);
        FUN2(VAR2, VAR4, VAR16, VAR17);
        VAR20 = 0;
    }
    while (VAR22 < VAR9)
    {
        uint8_t VAR25;
        VAR19 = 0;
        while (VAR22 < VAR9 && VAR17 < VAR24)
        {
            VAR25 = VAR8[VAR22++];
            VAR16[VAR17++] = VAR25;
            if (VAR18 <= VAR26)
                VAR18 = VAR25 ? VAR27 : VAR18 + 1;
            else if (VAR18 == VAR28)
            {
                if (VAR25 == 1)
                    VAR18 = VAR29;
                else if (VAR25 > 1)
                {
                    if (VAR25 == 3)
                        VAR17--;
                    VAR18 = VAR27;
                }
            }
            else
            {
                VAR18 = VAR27;
                VAR19 = 1;
                break;
            }
        }
        if ((VAR2->VAR30 & VAR31) && VAR17 >= VAR24 && VAR11->VAR32 == (VAR33 & 0xFF))
        {
            FUN2(VAR2, VAR4, VAR16, VAR17);
            break;
        }
        if (VAR17 >= VAR24 && !VAR19)
        {
            while (VAR22 < VAR9)
            {
                if (VAR18 == VAR27)
                {
                    VAR22 += VAR11->VAR34.VAR35.FUN3(VAR8 + VAR22, VAR9 - VAR22);
                    if (VAR22 < VAR9)
                    {
                        VAR18 = VAR26;
                    }
                    VAR22++;
                }
                else
                {
                    VAR25 = VAR8[VAR22++];
                    if (VAR18 == VAR26)
                        VAR18 = VAR25 ? VAR27 : VAR28;
                    else if (VAR18 == VAR28)
                    {
                        if (VAR25 >= 1)
                            VAR18 = VAR25 == 1 ? VAR29 : VAR27;
                    }
                    else
                    {
                        VAR18 = VAR27;
                        VAR19 = 1;
                        break;
                    }
                }
            }
        }
        if (VAR19)
        {
            FUN2(VAR2, VAR4, VAR16, VAR17);
            VAR11->VAR32 = VAR25;
            VAR17 = 0;
            if (!(VAR2->VAR30 & VAR31))
            {
                if (!VAR13 && (VAR25 == (VAR33 & 0xFF) || VAR25 == (VAR36 & 0xFF)))
                {
                    VAR13 = 1;
                }
                else if (VAR13 && VAR25 != (VAR36 & 0xFF) && VAR25 != (VAR37 & 0xFF))
                {
                    VAR20 = VAR22 - 4;
                    VAR13 = VAR25 == (VAR33 & 0xFF);
                    break;
                }
            }
        }
    }
    VAR11->VAR14.VAR15 = VAR13;
    VAR11->VAR17 = VAR17;
    VAR11->VAR18 = VAR18;
    if (VAR2->VAR30 & VAR31)
    {
        VAR20 = VAR9;
    }
    else
    {
        if (FUN4(&VAR11->VAR14, VAR20, &VAR8, &VAR9) < 0)
        {
            VAR11->VAR23 = 0;
            *VAR6 = NULL;
            *VAR7 = 0;
            return VAR9;
        }
    }
    VAR11->VAR23 = 4;
    if (VAR20 < 0 && VAR19)
        VAR11->VAR23 += VAR20;
    *VAR6 = VAR8;
    *VAR7 = VAR9;
    return VAR20;
}