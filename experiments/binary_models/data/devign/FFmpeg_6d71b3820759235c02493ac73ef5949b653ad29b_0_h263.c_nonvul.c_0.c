static inline int FUN1(VAR1 *VAR2, int VAR3, int *VAR4)
{
    int VAR5, VAR6, VAR7;
    VAR8 *VAR9;
    if (VAR3 < 4)
        VAR7 = FUN2(&VAR2->VAR10, VAR11.VAR12, VAR13, 1);
    else
        VAR7 = FUN2(&VAR2->VAR10, VAR14.VAR12, VAR13, 1);
    if (VAR7 < 0 || VAR7 > 9)
    {
        fprintf(VAR15, "");
        return -1;
    }
    if (VAR7 == 0)
    {
        VAR5 = 0;
    }
    else
    {
        if (VAR16)
        {
            if (VAR7 == 1)
                VAR5 = 2 * FUN3(&VAR2->VAR10) - 1;
            else
            {
                if (FUN3(&VAR2->VAR10))
                    VAR5 = FUN4(&VAR2->VAR10, VAR7 - 1) + (1 << (VAR7 - 1));
                else
                    VAR5 = -FUN4(&VAR2->VAR10, VAR7 - 1) - (1 << (VAR7 - 1));
            }
        }
        else
        {
            VAR5 = FUN5(&VAR2->VAR10, VAR7);
        }
        if (VAR7 > 8)
        {
            if (FUN3(&VAR2->VAR10) == 0)
            {
                if (VAR2->VAR17 >= 2)
                {
                    fprintf(VAR15, "");
                    return -1;
                }
            }
        }
    }
    VAR6 = FUN6(VAR2, VAR3, &VAR9, VAR4);
    VAR5 += VAR6;
    if (VAR5 < 0)
    {
        if (VAR2->VAR17 >= 3)
        {
            fprintf(VAR15, "", VAR2->VAR18, VAR2->VAR19);
            return -1;
        }
        VAR5 = 0;
    }
    if (VAR3 < 4)
    {
        *VAR9 = VAR5 * VAR2->VAR20;
    }
    else
    {
        *VAR9 = VAR5 * VAR2->VAR21;
    }
    if (VAR16)
        *VAR9 = VAR5 * 8;
    if (VAR2->VAR17 >= 3)
    {
        if (*VAR9 > 2048 + VAR2->VAR20 + VAR2->VAR21)
        {
            fprintf(VAR15, "", VAR2->VAR18, VAR2->VAR19);
            return -1;
        }
    }
    return VAR5;
}