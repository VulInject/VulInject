static void FUN1(VAR1 *VAR2)
{
    int64_t VAR3, VAR4;
    int VAR5;
    VAR6 *VAR7;
    if (VAR2->VAR8 <= 0)
    {
        int VAR8 = 0;
        for (VAR5 = 0; VAR5 < VAR2->VAR9; VAR5++)
        {
            VAR7 = VAR2->VAR10[VAR5];
            if (VAR7->VAR11->VAR8 > 0)
            {
                if (VAR12 - VAR7->VAR11->VAR8 > VAR8)
                {
                    VAR8 = 0;
                    break;
                }
                VAR8 += VAR7->VAR11->VAR8;
            }
        }
        VAR2->VAR8 = VAR8;
    }
    if (VAR2->VAR4 == VAR13 && VAR2->VAR8 != 0)
    {
        VAR3 = VAR2->VAR14 ? FUN2(VAR2->VAR14) : 0;
        if (VAR3 > 0)
        {
            for (VAR5 = 0; VAR5 < VAR2->VAR9; VAR5++)
            {
                VAR7 = VAR2->VAR10[VAR5];
                VAR4 = FUN3(8 * VAR3, VAR7->VAR15.VAR16, VAR2->VAR8 * (VAR17)VAR7->VAR15.VAR18);
                if (VAR7->VAR4 == VAR13)
                    VAR7->VAR4 = VAR4;
            }
        }
    }
}