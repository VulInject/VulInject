static int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4, int64_t VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9;
    VAR10 *VAR11;
    VAR11 = VAR2->VAR12[VAR3]->VAR8;
    VAR9 = 0;
    if (((VAR7->VAR13 % VAR7->VAR14) == 0))
    {
        if (VAR7->VAR15)
            VAR9 += 14;
        else
            VAR9 += 12;
        if (VAR7->VAR16)
        {
            if (VAR11->VAR13 == 0)
                VAR9 += 15;
        }
        else
        {
            if ((VAR7->VAR13 % VAR7->VAR17) == 0)
                VAR9 += VAR7->VAR18;
        }
    }
    if ((VAR7->VAR16 && VAR11->VAR13 == 0) || (VAR7->VAR19 && VAR7->VAR13 == 0))
        VAR9 += VAR7->VAR20 - VAR9;
    else
    {
        VAR9 += 6;
        if (VAR7->VAR15)
        {
            VAR9 += 3;
            if (VAR11->VAR13 == 0)
                VAR9 += 3;
            VAR9 += 1;
        }
        if (VAR4 != VAR21)
        {
            if (VAR5 != VAR4)
                VAR9 += 5 + 5;
            else
                VAR9 += 5;
        }
        else
        {
            if (!VAR7->VAR15)
                VAR9++;
        }
        if (VAR11->VAR22 < 0xc0)
        {
            VAR9 += 4;
            if (VAR11->VAR22 >= 0xa0)
            {
                int VAR23;
                VAR9 += 3;
                VAR23 = (VAR7->VAR20 - VAR9) % VAR11->VAR24;
                if (VAR23)
                    VAR9 += (VAR11->VAR24 - VAR23);
            }
        }
        if (VAR7->VAR16 && VAR11->VAR22 == VAR25)
            VAR9 += 20;
    }
    return VAR7->VAR20 - VAR9;
}