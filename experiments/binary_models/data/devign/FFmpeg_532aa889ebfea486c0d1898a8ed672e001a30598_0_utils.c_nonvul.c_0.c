int FUN1(VAR1 **VAR2, VAR3 **VAR4, const char *VAR5, void *VAR6, unsigned int VAR7, unsigned int VAR8)
{
    AVProbeData VAR9 = {VAR5 ? VAR5 : "", NULL, -VAR7};
    unsigned char *VAR10 = NULL;
    int VAR11 = 0, VAR12;
    if (!VAR8)
    {
        VAR8 = VAR13;
    }
    else if (VAR8 > VAR13)
    {
        VAR8 = VAR13;
    }
    else if (VAR8 < VAR14)
    {
        return FUN2(VAR15);
    }
    if (VAR7 >= VAR8)
    {
        return FUN2(VAR15);
    }
    for (VAR12 = VAR14; VAR12 <= VAR8 && !*VAR4 && VAR11 >= 0; VAR12 = FUN3(VAR12 << 1, FUN4(VAR8, VAR12 + 1)))
    {
        int VAR11, VAR16 = VAR12 < VAR8 ? VAR17 / 4 : 0;
        int VAR18 = (VAR12 == VAR14) ? 0 : VAR12 >> 1;
        if (VAR12 < VAR7)
        {
            continue;
        }
        VAR10 = FUN5(VAR10, VAR12 + VAR19);
        if ((VAR11 = FUN6(*VAR2, VAR10 + VAR18, VAR12 - VAR18)) < 0)
        {
            if (VAR11 != VAR20)
            {
                FUN7(VAR10);
                return VAR11;
            }
            VAR16 = 0;
            VAR11 = 0;
        }
        VAR9.VAR21 += VAR11;
        VAR9.VAR10 = &VAR10[VAR7];
        memset(VAR9.VAR10 + VAR9.VAR21, 0, VAR19);
        *VAR4 = FUN8(&VAR9, 1, &VAR16);
        if (*VAR4)
        {
            if (VAR16 <= VAR17 / 4)
            {
                FUN9(VAR6, VAR22, "", VAR16);
            }
            else
                FUN9(VAR6, VAR23, "", VAR12, VAR16);
        }
    }
    FUN7(VAR10);
    if (!*VAR4)
    {
        return VAR24;
    }
    if (FUN10(*VAR2, 0, VAR25) < 0)
    {
        FUN11(*VAR2);
        if (FUN12(VAR2, VAR5, VAR26) < 0)
            return FUN2(VAR27);
    }
    return 0;
}