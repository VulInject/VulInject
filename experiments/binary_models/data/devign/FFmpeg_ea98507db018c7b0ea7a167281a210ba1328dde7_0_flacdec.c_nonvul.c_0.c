static int FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    int VAR5, VAR6, VAR7, VAR8, VAR9;
    int VAR10, VAR11;
    int VAR12 = 0, VAR13;
    VAR8 = FUN2(&VAR2->VAR14, 2);
    if (VAR8 > 1)
    {
        FUN3(VAR2->VAR15, VAR16, "", VAR8);
        return -1;
    }
    VAR9 = FUN2(&VAR2->VAR14, 4);
    VAR13 = VAR2->VAR17 >> VAR9;
    if (VAR4 > VAR13)
    {
        FUN3(VAR2->VAR15, VAR16, "", VAR4, VAR13);
        return -1;
    }
    VAR10 = 4 + VAR8;
    VAR11 = (1 << VAR10) - 1;
    VAR12 = VAR5 = VAR4;
    for (VAR7 = 0; VAR7 < (1 << VAR9); VAR7++)
    {
        VAR6 = FUN2(&VAR2->VAR14, VAR10);
        if (VAR6 == VAR11)
        {
            VAR6 = FUN2(&VAR2->VAR14, 5);
            for (; VAR5 < VAR13; VAR5++, VAR12++)
                VAR2->VAR18[VAR3][VAR12] = FUN4(&VAR2->VAR14, VAR6);
        }
        else
        {
            for (; VAR5 < VAR13; VAR5++, VAR12++)
            {
                VAR2->VAR18[VAR3][VAR12] = FUN5(&VAR2->VAR14, VAR6, VAR19, 0);
            }
        }
        VAR5 = 0;
    }
    return 0;
}