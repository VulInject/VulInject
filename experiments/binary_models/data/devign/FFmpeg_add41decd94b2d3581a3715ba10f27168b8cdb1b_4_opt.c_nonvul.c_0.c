int FUN1(void *VAR1, const char *VAR2, const char *VAR3, int VAR4, const VAR5 **VAR6)
{
    int VAR7;
    const VAR5 *VAR8 = FUN2(VAR1, VAR2, NULL, 0, 0);
    if (VAR6)
        *VAR6 = VAR8;
    if (!VAR8)
        return VAR9;
    if (!VAR3 || VAR8->VAR10 <= 0)
        return FUN3(VAR11);
    if (VAR8->VAR12 == VAR13)
    {
        VAR14 **VAR15 = (VAR14 **)(((VAR14 *)VAR1) + VAR8->VAR10);
        int *VAR16 = (int *)(VAR15 + 1);
        VAR14 *VAR17, *VAR18;
        int VAR19 = strlen(VAR3);
        FUN4(VAR15);
        *VAR16 = 0;
        if (VAR19 & 1)
            return FUN3(VAR11);
        VAR19 /= 2;
        VAR18 = VAR17 = FUN5(VAR19);
        while (*VAR3)
        {
            int VAR20 = FUN6(*VAR3++);
            int VAR21 = FUN6(*VAR3++);
            if (VAR20 < 0 || VAR21 < 0)
            {
                FUN7(VAR17);
                return FUN3(VAR11);
            }
            *VAR18++ = (VAR20 << 4) | VAR21;
        }
        *VAR15 = VAR17;
        *VAR16 = VAR19;
        return 0;
    }
    if (VAR8->VAR12 != VAR22)
    {
        int VAR23 = 0;
        for (;;)
        {
            int VAR24;
            char VAR25[256];
            int VAR26 = 0;
            double VAR27;
            if (*VAR3 == '' || *VAR3 == '')
                VAR26 = *(VAR3++);
            for (VAR24 = 0; VAR24 < sizeof(VAR25) - 1 && VAR3[VAR24] && VAR3[VAR24] != '' && VAR3[VAR24] != ''; VAR24++)
                VAR25[VAR24] = VAR3[VAR24];
            VAR25[VAR24] = 0;
            {
                const VAR5 *VAR28 = FUN2(VAR1, VAR25, VAR8->VAR29, 0, 0);
                if (VAR28 && VAR28->VAR12 == VAR30)
                    VAR27 = VAR28->VAR31.VAR32;
                else if (!strcmp(VAR25, ""))
                    VAR27 = VAR8->VAR31.VAR32;
                else if (!strcmp(VAR25, ""))
                    VAR27 = VAR8->VAR33;
                else if (!strcmp(VAR25, ""))
                    VAR27 = VAR8->VAR34;
                else if (!strcmp(VAR25, ""))
                    VAR27 = 0;
                else if (!strcmp(VAR25, ""))
                    VAR27 = ~0;
                else
                {
                    int VAR35 = FUN8(&VAR27, VAR25, VAR36, VAR37, NULL, NULL, NULL, NULL, NULL, 0, VAR1);
                    if (VAR35 < 0)
                    {
                        FUN9(VAR1, VAR38, ""%VAR39\"", VAR3);
                        return VAR35;
                    }
                }
            }
            if (VAR8->VAR12 == VAR40)
            {
                if (VAR26 == '')
                    VAR27 = FUN10(VAR1, VAR2, NULL) | (VAR41)VAR27;
                else if (VAR26 == '')
                    VAR27 = FUN10(VAR1, VAR2, NULL) & ~(VAR41)VAR27;
            }
            else
            {
                if (VAR26 == '')
                    VAR27 = VAR23 * FUN11(VAR1, VAR2, NULL) + VAR27;
                else if (VAR26 == '')
                    VAR27 = VAR23 * FUN11(VAR1, VAR2, NULL) - VAR27;
            }
            if ((VAR7 = FUN12(VAR1, VAR2, VAR27, 1, 1, VAR6)) < 0)
                return VAR7;
            VAR3 += VAR24;
            if (!*VAR3)
                return 0;
            VAR23 = 1;
        }
    }
    if (VAR4)
    {
        FUN7(*(void **)(((VAR14 *)VAR1) + VAR8->VAR10));
        VAR3 = FUN13(VAR3);
    }
    memcpy(((VAR14 *)VAR1) + VAR8->VAR10, &VAR3, sizeof(VAR3));
    return 0;
}