static int FUN1(void *VAR1, void *VAR2, const VAR3 *VAR4, const char *VAR5, void *VAR6)
{
    int VAR7 = 0;
    int VAR8, VAR9;
    char VAR10;
    if (sscanf(VAR5, "", &VAR8, &VAR9, &VAR10) == 2)
    {
        if ((VAR7 = FUN2(VAR1, VAR4, VAR6, 1, VAR9, VAR8)) >= 0)
            return VAR7;
        VAR7 = 0;
    }
    for (;;)
    {
        int VAR11 = 0;
        char VAR12[256];
        int VAR13 = 0;
        double VAR14;
        int64_t VAR15 = 1;
        if (VAR4->VAR16 == VAR17)
        {
            if (*VAR5 == '' || *VAR5 == '')
                VAR13 = *(VAR5++);
            for (; VAR11 < sizeof(VAR12) - 1 && VAR5[VAR11] && VAR5[VAR11] != '' && VAR5[VAR11] != ''; VAR11++)
                VAR12[VAR11] = VAR5[VAR11];
            VAR12[VAR11] = 0;
        }
        {
            const VAR3 *VAR18 = FUN3(VAR2, VAR12, VAR4->VAR19, 0, 0);
            int VAR20;
            int VAR21 = 0;
            double VAR22[64];
            const char *VAR23[64];
            if (VAR18 && VAR18->VAR16 == VAR24)
                VAR14 = FUN4(VAR18);
            else
            {
                if (VAR4->VAR19)
                {
                    for (VAR18 = NULL; VAR18 = FUN5(VAR2, VAR18);)
                    {
                        if (VAR18->VAR16 == VAR24 && VAR18->VAR19 && !strcmp(VAR18->VAR19, VAR4->VAR19))
                        {
                            if (VAR21 + 6 >= FUN6(VAR22))
                            {
                                FUN7(VAR1, VAR25, "", VAR4->VAR19);
                                return VAR26;
                            }
                            VAR23[VAR21] = VAR18->VAR27;
                            VAR22[VAR21++] = FUN4(VAR18);
                        }
                    }
                }
                VAR23[VAR21] = "";
                VAR22[VAR21++] = FUN4(VAR4);
                VAR23[VAR21] = "";
                VAR22[VAR21++] = VAR4->VAR28;
                VAR23[VAR21] = "";
                VAR22[VAR21++] = VAR4->VAR29;
                VAR23[VAR21] = "";
                VAR22[VAR21++] = 0;
                VAR23[VAR21] = "";
                VAR22[VAR21++] = ~0;
                VAR23[VAR21] = NULL;
                VAR22[VAR21] = 0;
                VAR20 = FUN8(&VAR14, VAR11 ? VAR12 : VAR5, VAR23, VAR22, NULL, NULL, NULL, NULL, NULL, 0, VAR1);
                if (VAR20 < 0)
                {
                    FUN7(VAR1, VAR25, ""%VAR30\"", VAR5);
                    return VAR20;
                }
            }
        }
        if (VAR4->VAR16 == VAR17)
        {
            FUN9(VAR4, VAR6, NULL, NULL, &VAR15);
            if (VAR13 == '')
                VAR14 = VAR15 | (VAR31)VAR14;
            else if (VAR13 == '')
                VAR14 = VAR15 & ~(VAR31)VAR14;
        }
        if ((VAR7 = FUN2(VAR1, VAR4, VAR6, VAR14, 1, 1)) < 0)
            return VAR7;
        VAR5 += VAR11;
        if (!VAR11 || !*VAR5)
            return 0;
    }
    return 0;
}