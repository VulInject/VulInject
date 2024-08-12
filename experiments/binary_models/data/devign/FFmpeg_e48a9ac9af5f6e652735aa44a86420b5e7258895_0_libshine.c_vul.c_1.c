static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    MPADecodeHeader VAR11;
    unsigned char *VAR12;
    long VAR13;
    int VAR14, VAR15;
    if (VAR6)
        VAR12 = FUN2(VAR9->VAR16, (VAR17 **)VAR6->VAR12, &VAR13);
    else
        VAR12 = FUN3(VAR9->VAR16, &VAR13);
    if (VAR13 < 0)
        return -1;
    if (VAR13 > 0)
    {
        if (VAR9->VAR18 + VAR13 > VAR19)
        {
            FUN4(VAR2, VAR20, "");
            return VAR21;
        }
        memcpy(VAR9->VAR22 + VAR9->VAR18, VAR12, VAR13);
        VAR9->VAR18 += VAR13;
    }
    if (VAR6)
    {
        if ((VAR14 = FUN5(&VAR9->VAR23, VAR6)) < 0)
            return VAR14;
    }
    if (VAR9->VAR18 < 4 || !VAR9->VAR23.VAR24)
        return 0;
    if (FUN6(&VAR11, FUN7(VAR9->VAR22)))
    {
        FUN4(VAR2, VAR20, "");
        return -1;
    }
    VAR15 = VAR11.VAR25;
    if (VAR15 <= VAR9->VAR18)
    {
        if ((VAR14 = FUN8(VAR2, VAR4, VAR15)))
            return VAR14;
        memcpy(VAR4->VAR12, VAR9->VAR22, VAR15);
        VAR9->VAR18 -= VAR15;
        memmove(VAR9->VAR22, VAR9->VAR22 + VAR15, VAR9->VAR18);
        FUN9(&VAR9->VAR23, VAR2->VAR25, &VAR4->VAR26, &VAR4->VAR27);
        VAR4->VAR28 = VAR15;
        *VAR7 = 1;
    }
    return 0;
}