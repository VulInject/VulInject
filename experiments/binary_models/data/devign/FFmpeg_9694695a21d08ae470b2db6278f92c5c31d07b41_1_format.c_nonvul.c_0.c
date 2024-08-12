int FUN1(VAR1 *VAR2, VAR3 **VAR4, const char *VAR5, void *VAR6, unsigned int VAR7, unsigned int VAR8)
{
    AVProbeData VAR9 = {VAR5 ? VAR5 : ""};
    VAR10 *VAR11 = NULL;
    VAR10 *VAR12;
    int VAR13 = 0, VAR14, VAR15 = 0;
    int VAR16 = 0;
    if (!VAR8)
        VAR8 = VAR17;
    else if (VAR8 < VAR18)
    {
        FUN2(VAR6, VAR19, "", VAR8, VAR18);
        return FUN3(VAR20);
    }
    if (VAR7 >= VAR8)
        return FUN3(VAR20);
    if (VAR2->VAR21)
        FUN4(VAR2, "", VAR22, &VAR9.VAR12);
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
        VAR16 = VAR14 < VAR8 ? VAR23 : 0;
        if ((VAR13 = FUN10(&VAR11, VAR14 + VAR24)) < 0)
            goto VAR25;
        if ((VAR13 = FUN11(VAR2, VAR11 + VAR15, VAR14 - VAR15)) < 0)
        {
            if (VAR13 != VAR26)
                goto VAR25;
            VAR16 = 0;
            VAR13 = 0;
        }
        VAR15 += VAR13;
        if (VAR15 < VAR7)
            continue;
        VAR9.VAR27 = VAR15 - VAR7;
        VAR9.VAR11 = &VAR11[VAR7];
        memset(VAR9.VAR11 + VAR9.VAR27, 0, VAR24);
        *VAR4 = FUN12(&VAR9, 1, &VAR16);
        if (*VAR4)
        {
            if (VAR16 <= VAR23)
            {
                FUN2(VAR6, VAR28, ""
                                               "",
                       (*VAR4)->VAR29, VAR16);
            }
            else
                FUN2(VAR6, VAR30, "", (*VAR4)->VAR29, VAR14, VAR16);
            VAR31 *VAR32 = fopen("", "");
            fprintf(VAR32, "", VAR14, (*VAR4)->VAR29, VAR16, VAR5);
            fclose(VAR32);
        }
    }
    if (!*VAR4)
        VAR13 = VAR33;
VAR25:
    if (VAR13 >= 0)
        VAR13 = FUN13(VAR2, &VAR11, VAR15);
    FUN14(VAR9.VAR12);
    return VAR13 < 0 ? VAR13 : VAR16;
}