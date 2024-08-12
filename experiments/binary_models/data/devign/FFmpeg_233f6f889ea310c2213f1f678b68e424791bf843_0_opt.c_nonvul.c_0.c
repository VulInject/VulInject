VAR1 *FUN1(void *VAR2, const char *VAR3, const char *VAR4)
{
    VAR1 *VAR5 = FUN2(VAR2, VAR3);
    if (!VAR5 || !VAR4 || VAR5->VAR6 <= 0)
        return NULL;
    if (VAR5->VAR7 != VAR8)
    {
        for (;;)
        {
            int VAR9;
            char VAR10[256], *VAR11;
            int VAR12 = 0;
            double VAR13;
            if (*VAR4 == '' || *VAR4 == '')
                VAR12 = *(VAR4++);
            for (VAR9 = 0; VAR9 < sizeof(VAR10) - 1 && VAR4[VAR9] && VAR4[VAR9] != '' && VAR4[VAR9] != ''; VAR9++)
                VAR10[VAR9] = VAR4[VAR9];
            VAR10[VAR9] = 0;
            VAR4 += VAR9;
            VAR13 = FUN3(VAR10, &VAR11);
            if (VAR11 <= VAR10)
            {
                VAR1 *VAR14 = FUN2(VAR2, VAR10);
                if (VAR14 && VAR14->VAR7 == VAR15 && !strcmp(VAR14->VAR16, VAR5->VAR16))
                    VAR13 = VAR14->VAR17;
                else if (!strcmp(VAR10, ""))
                    VAR13 = VAR5->VAR17;
                else if (!strcmp(VAR10, ""))
                    VAR13 = VAR5->VAR18;
                else if (!strcmp(VAR10, ""))
                    VAR13 = VAR5->VAR19;
                else
                    return NULL;
            }
            if (VAR5->VAR7 == VAR20)
            {
                if (VAR12 == '')
                    VAR13 = FUN4(VAR2, VAR3, NULL) | (VAR21)VAR13;
                else if (VAR12 == '')
                    VAR13 = FUN4(VAR2, VAR3, NULL) & ~(VAR21)VAR13;
            }
            else if (VAR12 == '')
                VAR13 = -VAR13;
            FUN5(VAR2, VAR3, VAR13, 1, 1);
            if (!*VAR4)
                return VAR5;
        }
        return NULL;
    }
    memcpy(((VAR22 *)VAR2) + VAR5->VAR6, VAR4, sizeof(VAR4));
    return VAR5;
}