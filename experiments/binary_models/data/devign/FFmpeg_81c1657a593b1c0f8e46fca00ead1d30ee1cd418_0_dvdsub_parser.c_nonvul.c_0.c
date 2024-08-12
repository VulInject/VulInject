static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 **VAR6, int *VAR7, const VAR5 *VAR8, int VAR9)
{
    VAR10 *VAR11 = VAR2->VAR12;
    if (VAR11->VAR13 == 0)
    {
        if (VAR9 < 2 || FUN2(VAR8) && VAR9 < 6)
        {
            return VAR9;
        }
        VAR11->VAR14 = FUN2(VAR8);
        if (VAR11->VAR14 == 0)
            VAR11->VAR14 = FUN3(VAR8 + 2);
        FUN4(&VAR11->VAR15);
        VAR11->VAR15 = FUN5(VAR11->VAR14);
    }
    if (VAR11->VAR15)
    {
        if (VAR11->VAR13 + VAR9 <= VAR11->VAR14)
        {
            memcpy(VAR11->VAR15 + VAR11->VAR13, VAR8, VAR9);
            VAR11->VAR13 += VAR9;
            if (VAR11->VAR13 >= VAR11->VAR14)
            {
                *VAR6 = VAR11->VAR15;
                *VAR7 = VAR11->VAR14;
                VAR11->VAR13 = 0;
                return VAR9;
            }
        }
        else
        {
            VAR11->VAR13 = 0;
        }
    }
    *VAR6 = NULL;
    *VAR7 = 0;
    return VAR9;
}