static void FUN1(VAR1 *VAR2)
{
    int64_t VAR3, VAR4, VAR5, VAR6;
    int64_t VAR7, VAR8;
    int VAR9;
    VAR10 *VAR11;
    VAR3 = VAR12;
    VAR5 = VAR13;
    VAR7 = VAR13;
    for (VAR9 = 0; VAR9 < VAR2->VAR14; VAR9++)
    {
        VAR11 = VAR2->VAR15[VAR9];
        if (VAR11->VAR3 != VAR16)
        {
            VAR4 = FUN2(VAR11->VAR3, VAR11->VAR17, VAR18);
            if (VAR4 < VAR3)
                VAR3 = VAR4;
            if (VAR11->VAR7 != VAR16)
            {
                VAR6 = VAR4 + FUN2(VAR11->VAR7, VAR11->VAR17, VAR18);
                if (VAR6 > VAR5)
                    VAR5 = VAR6;
            }
        }
        if (VAR11->VAR7 != VAR16)
        {
            VAR8 = FUN2(VAR11->VAR7, VAR11->VAR17, VAR18);
            if (VAR8 > VAR7)
                VAR7 = VAR8;
        }
    }
    if (VAR3 != VAR12)
    {
        VAR2->VAR3 = VAR3;
        if (VAR5 != VAR13)
        {
            if (VAR5 - VAR3 > VAR7)
                VAR7 = VAR5 - VAR3;
        }
    }
    if (VAR7 != VAR13)
    {
        VAR2->VAR7 = VAR7;
        if (VAR2->VAR19 > 0)
        {
            VAR2->VAR20 = (double)VAR2->VAR19 * 8.0 * VAR21 / (double)VAR2->VAR7;
        }
    }
}