void FUN1(char *VAR1, int VAR2, int VAR3, int64_t VAR4)
{
    int VAR5;
    if (VAR4 == 0)
        VAR4 = FUN2(VAR3, VAR6, NULL);
    for (VAR5 = 0; VAR7[VAR5].VAR8; VAR5++)
        if (VAR3 == VAR7[VAR5].VAR3 && VAR4 == VAR7[VAR5].VAR9)
        {
            FUN3(VAR1, VAR7[VAR5].VAR8, VAR2);
            return;
        }
    snprintf(VAR1, VAR2, "", VAR3);
    if (VAR4)
    {
        int VAR5, VAR10;
        FUN4(VAR1, "", VAR2);
        for (VAR5 = 0, VAR10 = 0; VAR5 < 64; VAR5++)
        {
            if ((VAR4 & (1L << VAR5)))
            {
                const char *VAR8 = FUN5(VAR5);
                if (VAR8)
                {
                    if (VAR10 > 0)
                        FUN4(VAR1, "", VAR2);
                    FUN4(VAR1, VAR8, VAR2);
                }
                VAR10++;
            }
        }
        FUN4(VAR1, "", VAR2);
    }
}