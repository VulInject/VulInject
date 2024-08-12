int FUN1(VAR1 *VAR2, VAR3 **VAR4, const char *VAR5, void *VAR6, unsigned int VAR7, unsigned int VAR8)
{
    AVProbeData VAR9 = {VAR5 ? VAR5 : "", NULL, -VAR7};
    unsigned char *VAR10 = NULL;
    int VAR11 = 0, VAR12, VAR13 = 0;
    if (!VAR8)
    {
        VAR8 = VAR14;
    }
    else if (VAR8 > VAR14)
    {
        VAR8 = VAR14;
    }
    else if (VAR8 < VAR15)
    {
        return FUN2(VAR16);
    }
    if (VAR7 >= VAR8)
    {
        return FUN2(VAR16);
    }
    for (VAR12 = VAR15; VAR12 <= VAR8 && !*VAR4; VAR12 = FUN3(VAR12 << 1, FUN4(VAR8, VAR12 + 1)))
    {
        int VAR17 = VAR12 < VAR8 ? VAR18 : 0;
        void *VAR19;
        if (VAR12 < VAR7)
        {
            continue;
        }
        VAR19 = FUN5(VAR10, VAR12 + VAR20);
        if (!VAR19)
        {
            FUN6(VAR10);
            return FUN2(VAR21);
        }
        VAR10 = VAR19;
        if ((VAR11 = FUN7(VAR2, VAR10 + VAR13, VAR12 - VAR13)) < 0)
        {
            if (VAR11 != VAR22)
            {
                FUN6(VAR10);
                return VAR11;
            }
            VAR17 = 0;
            VAR11 = 0;
        }
        VAR9.VAR23 = VAR13 += VAR11;
        VAR9.VAR10 = &VAR10[VAR7];
        memset(VAR9.VAR10 + VAR9.VAR23, 0, VAR20);
        *VAR4 = FUN8(&VAR9, 1, &VAR17);
        if (*VAR4)
        {
            if (VAR17 <= VAR18)
            {
                FUN9(VAR6, VAR24, "", (*VAR4)->VAR25, VAR17);
            }
            else
                FUN9(VAR6, VAR26, "", (*VAR4)->VAR25, VAR12, VAR17);
        }
    }
    if (!*VAR4)
    {
        FUN6(VAR10);
        return VAR27;
    }
    VAR11 = FUN10(VAR2, &VAR10, VAR9.VAR23);
    return VAR11;
}