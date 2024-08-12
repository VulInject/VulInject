int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 **VAR6, int *VAR7, const VAR5 *VAR8, int VAR9)
{
    VAR10 *VAR11 = VAR2->VAR12;
    const VAR5 *VAR13;
    int VAR14, VAR15, VAR16, VAR17, VAR18;
    *VAR6 = NULL;
    *VAR7 = 0;
    VAR13 = VAR8;
    while (VAR9 > 0)
    {
        int VAR19 = VAR11->VAR20 ? VAR11->VAR20 : VAR11->VAR21;
        VAR14 = VAR11->VAR22 - VAR11->VAR23;
        if (VAR14 < VAR19)
        {
            VAR14 = FUN2(VAR19 - VAR14, VAR9);
            memcpy(VAR11->VAR22, VAR13, VAR14);
            VAR13 += VAR14;
            VAR11->VAR22 += VAR14;
            VAR9 -= VAR14;
        }
        if (VAR11->VAR20 == 0)
        {
            if ((VAR11->VAR22 - VAR11->VAR23) == VAR11->VAR21)
            {
                VAR14 = VAR11->FUN3(VAR11->VAR23, &VAR17, &VAR15, &VAR16, &VAR18);
                if (VAR14 == 0)
                {
                    memmove(VAR11->VAR23, VAR11->VAR23 + 1, VAR11->VAR21 - 1);
                    VAR11->VAR22--;
                }
                else
                {
                    VAR11->VAR20 = VAR14;
                    VAR4->VAR15 = VAR15;
                    if (VAR4->VAR24 > 0 && VAR4->VAR24 < VAR17 && VAR4->VAR24 <= 2 && VAR4->VAR25 == VAR26)
                    {
                        VAR4->VAR17 = VAR4->VAR24;
                    }
                    else
                    {
                        VAR4->VAR17 = VAR17;
                    }
                    VAR4->VAR16 = VAR16;
                    VAR4->VAR20 = VAR18;
                }
            }
        }
        else
        {
            if (VAR11->VAR22 - VAR11->VAR23 == VAR11->VAR20)
            {
                *VAR6 = VAR11->VAR23;
                *VAR7 = VAR11->VAR20;
                VAR11->VAR22 = VAR11->VAR23;
                VAR11->VAR20 = 0;
                break;
            }
        }
    }
    return VAR13 - VAR8;
}