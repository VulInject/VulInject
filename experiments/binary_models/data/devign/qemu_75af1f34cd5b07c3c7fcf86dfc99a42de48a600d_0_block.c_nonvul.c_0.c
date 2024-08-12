int FUN1(VAR1 *VAR2, BdrvRequestFlags VAR3)
{
    int64_t VAR4, VAR5, VAR6, VAR7 = 0;
    int VAR8;
    VAR4 = FUN2(VAR2);
    if (VAR4 < 0)
    {
        return VAR4;
    }
    for (;;)
    {
        VAR6 = FUN3(VAR4 - VAR7, VAR9);
        if (VAR6 <= 0)
        {
            return 0;
        }
        VAR5 = FUN4(VAR2, VAR7, VAR6, &VAR8);
        if (VAR5 < 0)
        {
            FUN5("" VAR10 "", VAR7, strerror(-VAR5));
            return VAR5;
        }
        if (VAR5 & VAR11)
        {
            VAR7 += VAR8;
            continue;
        }
        VAR5 = FUN6(VAR2, VAR7, VAR8, VAR3);
        if (VAR5 < 0)
        {
            FUN5("" VAR10 "", VAR7, strerror(-VAR5));
            return VAR5;
        }
        VAR7 += VAR8;
    }
}