static VAR1 FUN1(VAR2 *VAR3, int VAR4, int64_t VAR5)
{
    VAR6 *VAR7 = VAR3->VAR8;
    int64_t VAR9;
    VAR10 *VAR11;
    int VAR12;
    if (VAR7->VAR13)
    {
        VAR9 = 36000 + VAR7->VAR14 * 1200;
        for (VAR12 = 0; VAR12 < VAR3->VAR15; VAR12++)
        {
            VAR11 = VAR3->VAR16[VAR12]->VAR8;
            if (VAR9 > VAR11->VAR17 && VAR11->VAR17 != VAR18)
            {
                FUN2(VAR3, VAR19, "", VAR9 / 90000.0, VAR12, VAR11->VAR17 / 90000.0);
            }
        }
    }
    else
    {
        if (VAR4 == VAR7->VAR20 && VAR5 != VAR18)
            VAR9 = VAR5;
        else
            VAR9 = VAR7->VAR21;
        for (VAR12 = 0; VAR12 < VAR3->VAR15; VAR12++)
        {
            VAR11 = VAR3->VAR16[VAR12]->VAR8;
            if (VAR9 > VAR11->VAR17 && VAR11->VAR17 != VAR18)
            {
                VAR9 = VAR11->VAR17;
            }
        }
    }
    VAR7->VAR21 = VAR9;
    return VAR9;
}