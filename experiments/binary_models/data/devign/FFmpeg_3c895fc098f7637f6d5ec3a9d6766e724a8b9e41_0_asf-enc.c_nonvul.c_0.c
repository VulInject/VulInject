static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, const VAR6 *VAR7, int VAR8, int VAR9)
{
    VAR10 *VAR11 = VAR2->VAR12;
    int VAR13, VAR14, VAR15;
    VAR13 = 0;
    while (VAR13 < VAR8)
    {
        VAR14 = VAR8 - VAR13;
        if (VAR11->VAR16 == -1)
        {
            VAR11->VAR17 = (VAR14 < VAR18);
            if (VAR11->VAR17)
            {
                VAR11->VAR19 = VAR20;
                VAR11->VAR19 = VAR20 - VAR21 - 1;
                VAR15 = VAR18 - 1;
            }
            else
            {
                VAR11->VAR19 = VAR20 - VAR21;
                VAR15 = VAR22;
            }
            if (VAR11->VAR23 > VAR5)
                VAR11->VAR16 = VAR11->VAR23;
            else
                VAR11->VAR16 = VAR5;
        }
        else
        {
            VAR15 = VAR11->VAR19 - VAR24;
            if (VAR11->VAR23 > VAR5)
                VAR11->VAR16 = VAR11->VAR23;
            else if (VAR11->VAR16 >= VAR5)
                VAR11->VAR16 = VAR5;
        }
        if (VAR15 > 0)
        {
            if (VAR14 > VAR15)
                VAR14 = VAR15;
            else if (VAR14 == (VAR15 - 1))
                VAR14 = VAR15 - 2;
            FUN2(VAR2, VAR4, VAR5 + VAR25, VAR8, VAR13, VAR14, VAR9);
            FUN3(&VAR11->VAR26, VAR7, VAR14);
            if (VAR11->VAR17)
                VAR11->VAR19 -= (VAR14 + VAR24);
            else
                VAR11->VAR19 -= (VAR14 + VAR27);
            VAR11->VAR28 = VAR5;
            VAR11->VAR29++;
        }
        else
        {
            VAR14 = 0;
        }
        VAR13 += VAR14;
        VAR7 += VAR14;
        if (!VAR11->VAR17)
            FUN4(VAR2);
        else if (VAR11->VAR19 <= (VAR24 + 1))
            FUN4(VAR2);
    }
    VAR4->VAR30++;
}