int FUN1(VAR1 *VAR2, BdrvRequestFlags VAR3)
{
    int VAR4;
    int64_t VAR5, VAR6, VAR7 = 0;
    VAR8 *VAR9 = VAR2->VAR9;
    VAR5 = FUN2(VAR9);
    if (VAR5 < 0)
    {
        return VAR5;
    }
    for (;;)
    {
        VAR6 = FUN3(VAR5 - VAR7, VAR10);
        if (VAR6 <= 0)
        {
            return 0;
        }
        VAR4 = FUN4(VAR9, VAR7, VAR6, &VAR6, NULL, NULL);
        if (VAR4 < 0)
        {
            FUN5("" VAR11 "", VAR7, strerror(-VAR4));
            return VAR4;
        }
        if (VAR4 & VAR12)
        {
            VAR7 += VAR6;
            continue;
        }
        VAR4 = FUN6(VAR2, VAR7, VAR6, VAR3);
        if (VAR4 < 0)
        {
            FUN5("" VAR11 "", VAR7, strerror(-VAR4));
            return VAR4;
        }
        VAR7 += VAR6;
    }
}