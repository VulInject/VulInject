const VAR1 *FUN1(void *VAR2, const char *VAR3, const char *VAR4)
{
    const VAR1 *VAR5 = FUN2(VAR2, VAR3, NULL, 0, 0);
    if (VAR5 && VAR5->VAR6 == 0 && VAR5->VAR7 == VAR8 && VAR5->VAR9)
    {
        return FUN3(VAR2, VAR5->VAR9, VAR5->VAR10);
    }
    if (!VAR5 || !VAR4 || VAR5->VAR6 <= 0)
        return NULL;
    if (VAR5->VAR7 != VAR11)
    {
        for (;;)
        {
            int VAR12;
            char VAR13[256];
            int VAR14 = 0;
            double VAR15;
            char *VAR16 = NULL;
            if (*VAR4 == '' || *VAR4 == '')
                VAR14 = *(VAR4++);
            for (VAR12 = 0; VAR12 < sizeof(VAR13) - 1 && VAR4[VAR12] && VAR4[VAR12] != '' && VAR4[VAR12] != ''; VAR12++)
                VAR13[VAR12] = VAR4[VAR12];
            VAR13[VAR12] = 0;
            VAR4 += VAR12;
            VAR15 = FUN4(VAR13, VAR17, VAR18, NULL, NULL, NULL, NULL, NULL, &VAR16);
            if (FUN5(VAR15))
            {
                const VAR1 *VAR19 = FUN2(VAR2, VAR13, VAR5->VAR9, 0, 0);
                if (VAR19 && VAR19->VAR7 == VAR8)
                    VAR15 = VAR19->VAR10;
                else if (!strcmp(VAR13, ""))
                    VAR15 = VAR5->VAR10;
                else if (!strcmp(VAR13, ""))
                    VAR15 = VAR5->VAR20;
                else if (!strcmp(VAR13, ""))
                    VAR15 = VAR5->VAR21;
                else if (!strcmp(VAR13, ""))
                    VAR15 = 0;
                else if (!strcmp(VAR13, ""))
                    VAR15 = ~0;
                else
                {
                    if (!VAR16)
                        FUN6(NULL, VAR22, ""%VAR23\"", VAR4, VAR16);
                    return NULL;
                }
            }
            if (VAR5->VAR7 == VAR24)
            {
                if (VAR14 == '')
                    VAR15 = FUN7(VAR2, VAR3, NULL) | (VAR25)VAR15;
                else if (VAR14 == '')
                    VAR15 = FUN7(VAR2, VAR3, NULL) & ~(VAR25)VAR15;
            }
            else if (VAR14 == '')
                VAR15 = -VAR15;
            FUN8(VAR2, VAR3, VAR15, 1, 1);
            if (!*VAR4)
                return VAR5;
        }
        return NULL;
    }
    memcpy(((VAR26 *)VAR2) + VAR5->VAR6, VAR4, sizeof(VAR4));
    return VAR5;
}