static void FUN1(VAR1 *VAR2)
{
    int64_t VAR3, VAR4;
    int VAR5, VAR6;
    VAR7 *VAR8;
    if (VAR2->VAR5 == 0)
    {
        VAR5 = 0;
        for (VAR6 = 0; VAR6 < VAR2->VAR9; VAR6++)
        {
            VAR8 = VAR2->VAR10[VAR6];
            VAR5 += VAR8->VAR11->VAR5;
        }
        VAR2->VAR5 = VAR5;
    }
    if (VAR2->VAR4 == VAR12 && VAR2->VAR5 != 0 && VAR2->VAR13 != 0)
    {
        VAR3 = VAR2->VAR13;
        if (VAR3 > 0)
        {
            for (VAR6 = 0; VAR6 < VAR2->VAR9; VAR6++)
            {
                VAR8 = VAR2->VAR10[VAR6];
                VAR4 = FUN2(8 * VAR3, VAR8->VAR14.VAR15, VAR2->VAR5 * (VAR16)VAR8->VAR14.VAR17);
                if (VAR8->VAR4 == VAR12)
                    VAR8->VAR4 = VAR4;
            }
        }
    }
}