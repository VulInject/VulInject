int FUN1(VAR1 *VAR2, VAR3 **VAR4, const char *VAR5, void *VAR6, unsigned int VAR7, unsigned int VAR8)
{
    AVProbeData VAR9 = {VAR5 ? VAR5 : "", NULL, -VAR7};
    VAR10 *VAR11 = NULL;
    VAR10 *VAR12;
    int VAR13 = 0, VAR14, VAR15 = 0;
    int VAR16 = 0;
    if (!VAR8)
    {
        VAR8 = VAR17;
    }
    else if (VAR8 > VAR17)
    {
        VAR8 = VAR17;
    }
    else if (VAR8 < VAR18)
    {
        FUN2(VAR6, VAR19, "", VAR8, VAR18);
        return FUN3(VAR20);
    }
    if (VAR7 >= VAR8)
    {
        return FUN3(VAR20);
    }
    if (!*VAR4 && VAR2->VAR21 && FUN4(VAR2, "", VAR22, &VAR12) >= 0 && VAR12)
    {
        if (!FUN5(VAR12, ""))
        {
            *VAR4 = FUN6("");
        }
        FUN7(&VAR12);
    }
    for (VAR14 = VAR18; VAR14 <= VAR8 && !*VAR4; VAR14 = FUN8(VAR14 << 1, FUN9(VAR8, VAR14 + 1)))
    {
        if (VAR14 < VAR7)
        {
            continue;
        }
        VAR16 = VAR14 < VAR8 ? VAR23 : 0;
        if ((VAR13 = FUN10(&VAR11, VAR14 + VAR24)) < 0)
            return VAR13;
        if ((VAR13 = FUN11(VAR2, VAR11 + VAR15, VAR14 - VAR15)) < 0)
        {
            if (VAR13 != VAR25)
            {
                FUN12(VAR11);
                return VAR13;
            }
            VAR16 = 0;
            VAR13 = 0;
        }
        VAR15 += VAR13;
        VAR9.VAR26 = VAR15 - VAR7;
        VAR9.VAR11 = &VAR11[VAR7];
        memset(VAR9.VAR11 + VAR9.VAR26, 0, VAR24);
        *VAR4 = FUN13(&VAR9, 1, &VAR16);
        if (*VAR4)
        {
            if (VAR16 <= VAR23)
            {
                FUN2(VAR6, VAR27, "", (*VAR4)->VAR28, VAR16);
            }
            else
                FUN2(VAR6, VAR29, "", (*VAR4)->VAR28, VAR14, VAR16);
            VAR30 *VAR31 = fopen("", "");
            fprintf(VAR31, "", VAR14, (*VAR4)->VAR28, VAR16, VAR5);
            fclose(VAR31);
        }
    }
    if (!*VAR4)
    {
        FUN12(VAR11);
        return VAR32;
    }
    VAR13 = FUN14(VAR2, &VAR11, VAR9.VAR26);
    return VAR13 < 0 ? VAR13 : VAR16;
}