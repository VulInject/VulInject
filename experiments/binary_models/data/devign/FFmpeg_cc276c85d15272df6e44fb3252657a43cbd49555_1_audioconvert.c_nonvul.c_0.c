void FUN1(char *VAR1, int VAR2, int VAR3, uint64_t VAR4)
{
    int VAR5;
    if (VAR3 <= 0)
        VAR3 = FUN2(VAR4);
    for (VAR5 = 0; VAR6[VAR5].VAR7; VAR5++)
        if (VAR3 == VAR6[VAR5].VAR3 && VAR4 == VAR6[VAR5].VAR8)
        {
            FUN3(VAR1, VAR6[VAR5].VAR7, VAR2);
            return;
        }
    snprintf(VAR1, VAR2, "", VAR3);
    if (VAR4)
    {
        int VAR5, VAR9;
        FUN4(VAR1, "", VAR2);
        for (VAR5 = 0, VAR9 = 0; VAR5 < 64; VAR5++)
        {
            if ((VAR4 & (1L << VAR5)))
            {
                const char *VAR7 = FUN5(VAR5);
                if (VAR7)
                {
                    if (VAR9 > 0)
                        FUN4(VAR1, "", VAR2);
                    FUN4(VAR1, VAR7, VAR2);
                }
                VAR9++;
            }
        }
        FUN4(VAR1, "", VAR2);
    }
}