static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8, VAR9, VAR10;
    int VAR11, VAR12;
    int VAR13;
    VAR9 = FUN2(&VAR2->VAR14, 2);
    if (VAR9 > 1)
    {
        FUN3(VAR2->VAR15, VAR16, "", VAR9);
        return VAR17;
    }
    VAR10 = FUN2(&VAR2->VAR14, 4);
    VAR13 = VAR2->VAR18 >> VAR10;
    if (VAR13 << VAR10 != VAR2->VAR18)
    {
        FUN3(VAR2->VAR15, VAR16, "", VAR10, VAR2->VAR18);
        return VAR17;
    }
    if (VAR5 > VAR13)
    {
        FUN3(VAR2->VAR15, VAR16, "", VAR5, VAR13);
        return VAR17;
    }
    VAR11 = 4 + VAR9;
    VAR12 = (1 << VAR11) - 1;
    VAR4 += VAR5;
    VAR6 = VAR5;
    for (VAR8 = 0; VAR8 < (1 << VAR10); VAR8++)
    {
        VAR7 = FUN2(&VAR2->VAR14, VAR11);
        if (VAR7 == VAR12)
        {
            VAR7 = FUN2(&VAR2->VAR14, 5);
            for (; VAR6 < VAR13; VAR6++)
                *VAR4++ = FUN4(&VAR2->VAR14, VAR7);
        }
        else
        {
            for (; VAR6 < VAR13; VAR6++)
            {
                int VAR19 = FUN5(&VAR2->VAR14, VAR7, VAR20, 0);
                if (VAR19 == 0x80000000)
                {
                    FUN3(VAR2->VAR15, VAR16, "");
                    return VAR17;
                }
                *VAR4++ = VAR19;
            }
        }
        VAR6 = 0;
    }
    return 0;
}